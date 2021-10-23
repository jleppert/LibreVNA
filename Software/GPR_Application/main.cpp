#include <QtCore>
#include <iostream>
#include <QtDebug>

#include "../PC_Application/Device/device.h"

using namespace std;

int main( int argc, char **argv )
{
    QCoreApplication a(argc, argv);

    cout << "hello world" << std::endl;

    qDebug() << "Attempting to connect to device...";

    QString serial = QString();
    Device *device = new Device(serial);

    return a.exec();
}
