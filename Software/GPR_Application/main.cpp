#include <QtCore>
#include <QApplication>
#include <iostream>
#include <QtDebug>

#include "../PC_Application/Device/device.h"

using namespace std;

static QApplication *app;

Protocol::DeviceInfo lastInfo;
Device *device;

class TraceDataReceiver : public QObject
{
    Q_OBJECT
public:
    TraceDataReceiver(QObject *parent = 0) : QObject(parent) {}

public slots:
    void newDataPoint(Protocol::Datapoint d) {
	qDebug() << "Got datapoint:" << d.frequency;
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



int main( int argc, char **argv )
{
    int argument_count = 3;
    char* argument[3];
    argument[0] = const_cast<char*>("GPR_Application");
    argument[1] = const_cast<char*>("-platform");
    argument[2] = const_cast<char*>("offscreen");
    
    QApplication app(argument_count, argument);

    TraceDataReceiver *dataReceiver = new TraceDataReceiver(&app);

    qDebug() << "Attempting to connect to device...";

    QString serial = QString();
  
    Protocol::SweepSettings sweepSettings;

    sweepSettings.f_start = 10000000;
    sweepSettings.f_stop = 3000000000;
    sweepSettings.points = 303;
    sweepSettings.if_bandwidth = 10000;
    sweepSettings.cdbm_excitation_start = freqExcitationLevel * 100;
    sweepSettings.excitePort1 = 1;
    sweepSettings.excitePort2 = 1;
    sweepSettings.suppressPeaks = 1;
    sweepSettings.fixedPowerSetting = 1;
    sweepSettings.cdbm_excitation_stop = freqExcitationLevel * 100;

    Protocol::Datapoint sweepPoints[sweepSettings.f_stop - sweepSettings.f_start];

    device = new Device(serial);

    qRegisterMetaType<Protocol::Datapoint>("Datapoint");
    
    QObject::connect(device, &Device::DatapointReceived, dataReceiver, &TraceDataReceiver::newDataPoint, Qt::UniqueConnection);
    QObject::connect(device, &Device::DeviceInfoUpdated, dataReceiver, &TraceDataReceiver::deviceInfoUpdated, Qt::UniqueConnection);

    return app.exec();
}
