#include <QtCore>
#include <QApplication>
#include <iostream>
#include <QtDebug>

#include <chrono>
#include "tcpserver.h"

#include "../PC_Application/Device/device.h"

using namespace std;

static QApplication *app;

Protocol::DeviceInfo lastInfo;
Device *device;

TCPServer *server;

Protocol::Datapoint lastPoint;

auto beginTime = std::chrono::high_resolution_clock::now();

class TraceDataReceiver : public QObject {
    Q_OBJECT
public:
    TraceDataReceiver(QObject *parent = 0) : QObject(parent) {}

public slots:
    void newDataPoint(Protocol::Datapoint d) {
	if(lastPoint.frequency > 0 && (d.frequency < lastPoint.frequency)) {
	   //server->send(QString("\n"));
	   auto endTime = std::chrono::high_resolution_clock::now();
	   auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - beginTime);
	   printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

	   beginTime = std::chrono::high_resolution_clock::now();
	} else {
	   //server->send(QString::fromStdString(std::to_string(d.frequency) + "," + std::to_string(d.real_S21) + "," + std::to_string(d.imag_S21) + ";")); 
	}

	lastPoint = d;
	//qDebug() << "Got datapoint:" << d.frequency;
    }

    void deviceLogReceived(QString line) {
	//qDebug() << line;
    }

    void deviceInfoUpdated() {
       lastInfo = Device::Info();
    }

signals:
    void finished();
};

#include "main.moc";

double freqExcitationLevel = 0.0;
void setLevel(double level) {
    if(level > Device::Info().limits_cdbm_max / 100.0) {
        level = Device::Info().limits_cdbm_max / 100.0;
    } else if(level < Device::Info().limits_cdbm_min / 100.0) {
        level = Device::Info().limits_cdbm_min / 100.0;
    }

    freqExcitationLevel = level;
}

TCPServer::TCPServer(int port)
{
    qInfo() << "Listening on port" << port;
    socket = nullptr;
    server.listen(QHostAddress::Any, port);
    connect(&server, &QTcpServer::newConnection, [&](){
        // only one connection at a time
        delete socket;
        socket = server.nextPendingConnection();
	QObject::connect(socket, &QTcpSocket::stateChanged, [&](QAbstractSocket::SocketState state){
            if (state == QAbstractSocket::UnconnectedState)
            {
                socket->deleteLater();
                socket = nullptr;
            }
        });
    });
}

bool TCPServer::send(QString str) {
    if (socket) {
        socket->write(QByteArray::fromStdString(str.toStdString()));
        return true;
    } else {
        return false;
    }
}

int main( int argc, char **argv ) {
    int argument_count = 3;
    char* argument[3];
    argument[0] = const_cast<char*>("GPR_Application");
    argument[1] = const_cast<char*>("-platform");
    argument[2] = const_cast<char*>("offscreen");
    
    QApplication app(argument_count, argument);

    TraceDataReceiver *dataReceiver = new TraceDataReceiver(&app);

    qDebug() << "Starting TCP server on port 6969...";

    //server = new TCPServer(6969);

    qDebug() << "Attempting to connect to device...";

    QString serial = QString();
  
    //Protocol::Datapoint sweepPoints[sweepSettings.f_stop - sweepSettings.f_start];

    device = new Device(serial);

    setLevel(-10.00);

    Protocol::ReferenceSettings referenceSettings;
    referenceSettings.ExtRefOuputFreq = 0;
    referenceSettings.AutomaticSwitch = 0;
    referenceSettings.UseExternalRef = 0;

    Protocol::PacketInfo pReferenceSettings;
    pReferenceSettings.type = Protocol::PacketType::Reference;

    device->SendPacket(pReferenceSettings);

    Protocol::SweepSettings sweepSettings;

    sweepSettings.f_start = 100000000;
    sweepSettings.f_stop = 2000000000;
    sweepSettings.points = 100;
    sweepSettings.if_bandwidth = 100000;
    sweepSettings.cdbm_excitation_start = freqExcitationLevel * 100;
    sweepSettings.excitePort1 = 1;
    sweepSettings.excitePort2 = 0;
    sweepSettings.suppressPeaks = 0;
    sweepSettings.fixedPowerSetting = 1;
    sweepSettings.cdbm_excitation_stop = freqExcitationLevel * 100;

    Protocol::PacketInfo pSweepSettings;
    pSweepSettings.type = Protocol::PacketType::SweepSettings;
    pSweepSettings.settings = sweepSettings;
    device->SendPacket(pSweepSettings, [=](Device::TransmissionResult res){
            if(res == Device::TransmissionResult::Ack) {
		qDebug() << "Device responded ACK";

	    } else if(res == Device::TransmissionResult::Nack) {
		qDebug() << "Device responded NACK";

	    } else if(res == Device::TransmissionResult::Timeout) {
	    	qDebug() << "Device timeout";
            } else if(res == Device::TransmissionResult::InternalError) {
		qDebug() << "Device Internal Error!";
	    }
		    // device received command, reset traces now
            });

    qRegisterMetaType<Protocol::Datapoint>("Datapoint");
   
    QObject::connect(device, &Device::DatapointReceived, dataReceiver, &TraceDataReceiver::newDataPoint, Qt::DirectConnection);
    QObject::connect(device, &Device::DeviceInfoUpdated, dataReceiver, &TraceDataReceiver::deviceInfoUpdated);
    QObject::connect(device, &Device::LogLineReceived, dataReceiver, &TraceDataReceiver::deviceLogReceived);

    return app.exec();
}
