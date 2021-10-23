/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PC_Application/Device/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_USBInBuffer_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_USBInBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_USBInBuffer_t qt_meta_stringdata_USBInBuffer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "USBInBuffer"
QT_MOC_LITERAL(1, 12, 12), // "DataReceived"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13) // "TransferError"

    },
    "USBInBuffer\0DataReceived\0\0TransferError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_USBInBuffer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void USBInBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<USBInBuffer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DataReceived(); break;
        case 1: _t->TransferError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (USBInBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&USBInBuffer::DataReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (USBInBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&USBInBuffer::TransferError)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject USBInBuffer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_USBInBuffer.data,
    qt_meta_data_USBInBuffer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *USBInBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *USBInBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_USBInBuffer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int USBInBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void USBInBuffer::DataReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void USBInBuffer::TransferError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[32];
    char stringdata0[513];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 17), // "DatapointReceived"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "Protocol::Datapoint"
QT_MOC_LITERAL(4, 46, 20), // "ManualStatusReceived"
QT_MOC_LITERAL(5, 67, 22), // "Protocol::ManualStatus"
QT_MOC_LITERAL(6, 90, 22), // "SpectrumResultReceived"
QT_MOC_LITERAL(7, 113, 32), // "Protocol::SpectrumAnalyzerResult"
QT_MOC_LITERAL(8, 146, 32), // "AmplitudeCorrectionPointReceived"
QT_MOC_LITERAL(9, 179, 34), // "Protocol::AmplitudeCorrection..."
QT_MOC_LITERAL(10, 214, 27), // "FrequencyCorrectionReceived"
QT_MOC_LITERAL(11, 242, 3), // "ppm"
QT_MOC_LITERAL(12, 246, 17), // "DeviceInfoUpdated"
QT_MOC_LITERAL(13, 264, 14), // "ConnectionLost"
QT_MOC_LITERAL(14, 279, 11), // "AckReceived"
QT_MOC_LITERAL(15, 291, 12), // "NackReceived"
QT_MOC_LITERAL(16, 304, 15), // "LogLineReceived"
QT_MOC_LITERAL(17, 320, 4), // "line"
QT_MOC_LITERAL(18, 325, 19), // "NeedsFirmwareUpdate"
QT_MOC_LITERAL(19, 345, 12), // "usedProtocol"
QT_MOC_LITERAL(20, 358, 16), // "requiredProtocol"
QT_MOC_LITERAL(21, 375, 14), // "receivedAnswer"
QT_MOC_LITERAL(22, 390, 18), // "TransmissionResult"
QT_MOC_LITERAL(23, 409, 6), // "result"
QT_MOC_LITERAL(24, 416, 12), // "ReceivedData"
QT_MOC_LITERAL(25, 429, 11), // "ReceivedLog"
QT_MOC_LITERAL(26, 441, 19), // "transmissionTimeout"
QT_MOC_LITERAL(27, 461, 20), // "transmissionFinished"
QT_MOC_LITERAL(28, 482, 3), // "Ack"
QT_MOC_LITERAL(29, 486, 4), // "Nack"
QT_MOC_LITERAL(30, 491, 7), // "Timeout"
QT_MOC_LITERAL(31, 499, 13) // "InternalError"

    },
    "Device\0DatapointReceived\0\0Protocol::Datapoint\0"
    "ManualStatusReceived\0Protocol::ManualStatus\0"
    "SpectrumResultReceived\0"
    "Protocol::SpectrumAnalyzerResult\0"
    "AmplitudeCorrectionPointReceived\0"
    "Protocol::AmplitudeCorrectionPoint\0"
    "FrequencyCorrectionReceived\0ppm\0"
    "DeviceInfoUpdated\0ConnectionLost\0"
    "AckReceived\0NackReceived\0LogLineReceived\0"
    "line\0NeedsFirmwareUpdate\0usedProtocol\0"
    "requiredProtocol\0receivedAnswer\0"
    "TransmissionResult\0result\0ReceivedData\0"
    "ReceivedLog\0transmissionTimeout\0"
    "transmissionFinished\0Ack\0Nack\0Timeout\0"
    "InternalError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       8,    1,  103,    2, 0x06 /* Public */,
      10,    1,  106,    2, 0x06 /* Public */,
      12,    0,  109,    2, 0x06 /* Public */,
      13,    0,  110,    2, 0x06 /* Public */,
      14,    0,  111,    2, 0x06 /* Public */,
      15,    0,  112,    2, 0x06 /* Public */,
      16,    1,  113,    2, 0x06 /* Public */,
      18,    2,  116,    2, 0x06 /* Public */,
      21,    1,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  124,    2, 0x08 /* Private */,
      25,    0,  125,    2, 0x08 /* Private */,
      26,    0,  126,    2, 0x08 /* Private */,
      27,    1,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

 // enums: name, alias, flags, count, data
      22,   22, 0x2,    4,  135,

 // enum data: key, value
      28, uint(Device::TransmissionResult::Ack),
      29, uint(Device::TransmissionResult::Nack),
      30, uint(Device::TransmissionResult::Timeout),
      31, uint(Device::TransmissionResult::InternalError),

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DatapointReceived((*reinterpret_cast< Protocol::Datapoint(*)>(_a[1]))); break;
        case 1: _t->ManualStatusReceived((*reinterpret_cast< Protocol::ManualStatus(*)>(_a[1]))); break;
        case 2: _t->SpectrumResultReceived((*reinterpret_cast< Protocol::SpectrumAnalyzerResult(*)>(_a[1]))); break;
        case 3: _t->AmplitudeCorrectionPointReceived((*reinterpret_cast< Protocol::AmplitudeCorrectionPoint(*)>(_a[1]))); break;
        case 4: _t->FrequencyCorrectionReceived((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->DeviceInfoUpdated(); break;
        case 6: _t->ConnectionLost(); break;
        case 7: _t->AckReceived(); break;
        case 8: _t->NackReceived(); break;
        case 9: _t->LogLineReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->NeedsFirmwareUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->receivedAnswer((*reinterpret_cast< TransmissionResult(*)>(_a[1]))); break;
        case 12: _t->ReceivedData(); break;
        case 13: _t->ReceivedLog(); break;
        case 14: _t->transmissionTimeout(); break;
        case 15: _t->transmissionFinished((*reinterpret_cast< TransmissionResult(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Protocol::Datapoint >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Protocol::ManualStatus >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Protocol::SpectrumAnalyzerResult >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Protocol::AmplitudeCorrectionPoint >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)(Protocol::Datapoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::DatapointReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)(Protocol::ManualStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::ManualStatusReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Device::*)(Protocol::SpectrumAnalyzerResult );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::SpectrumResultReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Device::*)(Protocol::AmplitudeCorrectionPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::AmplitudeCorrectionPointReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Device::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::FrequencyCorrectionReceived)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::DeviceInfoUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::ConnectionLost)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::AckReceived)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::NackReceived)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Device::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::LogLineReceived)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Device::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::NeedsFirmwareUpdate)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Device::*)(TransmissionResult );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::receivedAnswer)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Device::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Device.data,
    qt_meta_data_Device,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Device::DatapointReceived(Protocol::Datapoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Device::ManualStatusReceived(Protocol::ManualStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Device::SpectrumResultReceived(Protocol::SpectrumAnalyzerResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Device::AmplitudeCorrectionPointReceived(Protocol::AmplitudeCorrectionPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Device::FrequencyCorrectionReceived(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Device::DeviceInfoUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Device::ConnectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Device::AckReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Device::NackReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Device::LogLineReceived(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Device::NeedsFirmwareUpdate(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Device::receivedAnswer(TransmissionResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
