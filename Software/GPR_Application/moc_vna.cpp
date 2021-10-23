/****************************************************************************
** Meta object code from reading C++ file 'vna.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PC_Application/VNA/vna.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vna.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VNA_t {
    QByteArrayData data[59];
    char stringdata0[816];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VNA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VNA_t qt_meta_stringdata_VNA = {
    {
QT_MOC_LITERAL(0, 0, 3), // "VNA"
QT_MOC_LITERAL(1, 4, 31), // "CalibrationMeasurementsComplete"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 34), // "std::set<Calibration::Measure..."
QT_MOC_LITERAL(4, 72, 1), // "m"
QT_MOC_LITERAL(5, 74, 18), // "graphColorsChanged"
QT_MOC_LITERAL(6, 93, 11), // "dataChanged"
QT_MOC_LITERAL(7, 105, 16), // "sweepTypeChanged"
QT_MOC_LITERAL(8, 122, 9), // "SweepType"
QT_MOC_LITERAL(9, 132, 2), // "sw"
QT_MOC_LITERAL(10, 135, 16), // "startFreqChanged"
QT_MOC_LITERAL(11, 152, 4), // "freq"
QT_MOC_LITERAL(12, 157, 15), // "stopFreqChanged"
QT_MOC_LITERAL(13, 173, 17), // "centerFreqChanged"
QT_MOC_LITERAL(14, 191, 11), // "spanChanged"
QT_MOC_LITERAL(15, 203, 4), // "span"
QT_MOC_LITERAL(16, 208, 18), // "sourceLevelChanged"
QT_MOC_LITERAL(17, 227, 5), // "level"
QT_MOC_LITERAL(18, 233, 13), // "pointsChanged"
QT_MOC_LITERAL(19, 247, 6), // "points"
QT_MOC_LITERAL(20, 254, 18), // "IFBandwidthChanged"
QT_MOC_LITERAL(21, 273, 9), // "bandwidth"
QT_MOC_LITERAL(22, 283, 16), // "averagingChanged"
QT_MOC_LITERAL(23, 300, 8), // "averages"
QT_MOC_LITERAL(24, 309, 17), // "startPowerChanged"
QT_MOC_LITERAL(25, 327, 16), // "stopPowerChanged"
QT_MOC_LITERAL(26, 344, 26), // "powerSweepFrequencyChanged"
QT_MOC_LITERAL(27, 371, 19), // "CalibrationDisabled"
QT_MOC_LITERAL(28, 391, 18), // "CalibrationApplied"
QT_MOC_LITERAL(29, 410, 17), // "Calibration::Type"
QT_MOC_LITERAL(30, 428, 4), // "type"
QT_MOC_LITERAL(31, 433, 12), // "NewDatapoint"
QT_MOC_LITERAL(32, 446, 19), // "Protocol::Datapoint"
QT_MOC_LITERAL(33, 466, 1), // "d"
QT_MOC_LITERAL(34, 468, 22), // "StartImpedanceMatching"
QT_MOC_LITERAL(35, 491, 12), // "SetSweepType"
QT_MOC_LITERAL(36, 504, 12), // "SetStartFreq"
QT_MOC_LITERAL(37, 517, 11), // "SetStopFreq"
QT_MOC_LITERAL(38, 529, 13), // "SetCenterFreq"
QT_MOC_LITERAL(39, 543, 7), // "SetSpan"
QT_MOC_LITERAL(40, 551, 11), // "SetFullSpan"
QT_MOC_LITERAL(41, 563, 10), // "SpanZoomIn"
QT_MOC_LITERAL(42, 574, 11), // "SpanZoomOut"
QT_MOC_LITERAL(43, 586, 14), // "SetSourceLevel"
QT_MOC_LITERAL(44, 601, 13), // "SetStartPower"
QT_MOC_LITERAL(45, 615, 12), // "SetStopPower"
QT_MOC_LITERAL(46, 628, 22), // "SetPowerSweepFrequency"
QT_MOC_LITERAL(47, 651, 9), // "SetPoints"
QT_MOC_LITERAL(48, 661, 14), // "SetIFBandwidth"
QT_MOC_LITERAL(49, 676, 12), // "SetAveraging"
QT_MOC_LITERAL(50, 689, 18), // "ExcitationRequired"
QT_MOC_LITERAL(51, 708, 5), // "port1"
QT_MOC_LITERAL(52, 714, 5), // "port2"
QT_MOC_LITERAL(53, 720, 18), // "DisableCalibration"
QT_MOC_LITERAL(54, 739, 5), // "force"
QT_MOC_LITERAL(55, 745, 16), // "ApplyCalibration"
QT_MOC_LITERAL(56, 762, 28), // "StartCalibrationMeasurements"
QT_MOC_LITERAL(57, 791, 17), // "EnableDeembedding"
QT_MOC_LITERAL(58, 809, 6) // "enable"

    },
    "VNA\0CalibrationMeasurementsComplete\0"
    "\0std::set<Calibration::Measurement>\0"
    "m\0graphColorsChanged\0dataChanged\0"
    "sweepTypeChanged\0SweepType\0sw\0"
    "startFreqChanged\0freq\0stopFreqChanged\0"
    "centerFreqChanged\0spanChanged\0span\0"
    "sourceLevelChanged\0level\0pointsChanged\0"
    "points\0IFBandwidthChanged\0bandwidth\0"
    "averagingChanged\0averages\0startPowerChanged\0"
    "stopPowerChanged\0powerSweepFrequencyChanged\0"
    "CalibrationDisabled\0CalibrationApplied\0"
    "Calibration::Type\0type\0NewDatapoint\0"
    "Protocol::Datapoint\0d\0StartImpedanceMatching\0"
    "SetSweepType\0SetStartFreq\0SetStopFreq\0"
    "SetCenterFreq\0SetSpan\0SetFullSpan\0"
    "SpanZoomIn\0SpanZoomOut\0SetSourceLevel\0"
    "SetStartPower\0SetStopPower\0"
    "SetPowerSweepFrequency\0SetPoints\0"
    "SetIFBandwidth\0SetAveraging\0"
    "ExcitationRequired\0port1\0port2\0"
    "DisableCalibration\0force\0ApplyCalibration\0"
    "StartCalibrationMeasurements\0"
    "EnableDeembedding\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VNA[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,
       5,    0,  217,    2, 0x06 /* Public */,
       6,    0,  218,    2, 0x06 /* Public */,
       7,    1,  219,    2, 0x06 /* Public */,
      10,    1,  222,    2, 0x06 /* Public */,
      12,    1,  225,    2, 0x06 /* Public */,
      13,    1,  228,    2, 0x06 /* Public */,
      14,    1,  231,    2, 0x06 /* Public */,
      16,    1,  234,    2, 0x06 /* Public */,
      18,    1,  237,    2, 0x06 /* Public */,
      20,    1,  240,    2, 0x06 /* Public */,
      22,    1,  243,    2, 0x06 /* Public */,
      24,    1,  246,    2, 0x06 /* Public */,
      25,    1,  249,    2, 0x06 /* Public */,
      26,    1,  252,    2, 0x06 /* Public */,
      27,    0,  255,    2, 0x06 /* Public */,
      28,    1,  256,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  259,    2, 0x08 /* Private */,
      34,    0,  262,    2, 0x08 /* Private */,
      35,    1,  263,    2, 0x08 /* Private */,
      36,    1,  266,    2, 0x08 /* Private */,
      37,    1,  269,    2, 0x08 /* Private */,
      38,    1,  272,    2, 0x08 /* Private */,
      39,    1,  275,    2, 0x08 /* Private */,
      40,    0,  278,    2, 0x08 /* Private */,
      41,    0,  279,    2, 0x08 /* Private */,
      42,    0,  280,    2, 0x08 /* Private */,
      43,    1,  281,    2, 0x08 /* Private */,
      44,    1,  284,    2, 0x08 /* Private */,
      45,    1,  287,    2, 0x08 /* Private */,
      46,    1,  290,    2, 0x08 /* Private */,
      47,    1,  293,    2, 0x08 /* Private */,
      48,    1,  296,    2, 0x08 /* Private */,
      49,    1,  299,    2, 0x08 /* Private */,
      50,    2,  302,    2, 0x08 /* Private */,
      53,    1,  307,    2, 0x08 /* Private */,
      53,    0,  310,    2, 0x28 /* Private | MethodCloned */,
      55,    1,  311,    2, 0x08 /* Private */,
      56,    1,  314,    2, 0x08 /* Private */,
      57,    1,  317,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::UInt,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::UInt,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   51,   52,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,   58,

       0        // eod
};

void VNA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VNA *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CalibrationMeasurementsComplete((*reinterpret_cast< std::set<Calibration::Measurement>(*)>(_a[1]))); break;
        case 1: _t->graphColorsChanged(); break;
        case 2: _t->dataChanged(); break;
        case 3: _t->sweepTypeChanged((*reinterpret_cast< SweepType(*)>(_a[1]))); break;
        case 4: _t->startFreqChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->stopFreqChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->centerFreqChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->spanChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->sourceLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->pointsChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: _t->IFBandwidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->averagingChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->startPowerChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->stopPowerChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->powerSweepFrequencyChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->CalibrationDisabled(); break;
        case 16: _t->CalibrationApplied((*reinterpret_cast< Calibration::Type(*)>(_a[1]))); break;
        case 17: _t->NewDatapoint((*reinterpret_cast< Protocol::Datapoint(*)>(_a[1]))); break;
        case 18: _t->StartImpedanceMatching(); break;
        case 19: _t->SetSweepType((*reinterpret_cast< SweepType(*)>(_a[1]))); break;
        case 20: _t->SetStartFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->SetStopFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->SetCenterFreq((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->SetSpan((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->SetFullSpan(); break;
        case 25: _t->SpanZoomIn(); break;
        case 26: _t->SpanZoomOut(); break;
        case 27: _t->SetSourceLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->SetStartPower((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->SetStopPower((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->SetPowerSweepFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->SetPoints((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 32: _t->SetIFBandwidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 33: _t->SetAveraging((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 34: _t->ExcitationRequired((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->DisableCalibration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->DisableCalibration(); break;
        case 37: _t->ApplyCalibration((*reinterpret_cast< Calibration::Type(*)>(_a[1]))); break;
        case 38: _t->StartCalibrationMeasurements((*reinterpret_cast< std::set<Calibration::Measurement>(*)>(_a[1]))); break;
        case 39: _t->EnableDeembedding((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Protocol::Datapoint >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VNA::*)(std::set<Calibration::Measurement> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::CalibrationMeasurementsComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VNA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::graphColorsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VNA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::dataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VNA::*)(SweepType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::sweepTypeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::startFreqChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::stopFreqChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::centerFreqChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::spanChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::sourceLevelChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (VNA::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::pointsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::IFBandwidthChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (VNA::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::averagingChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::startPowerChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::stopPowerChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (VNA::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::powerSweepFrequencyChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (VNA::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::CalibrationDisabled)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (VNA::*)(Calibration::Type );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VNA::CalibrationApplied)) {
                *result = 16;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VNA::staticMetaObject = { {
    &Mode::staticMetaObject,
    qt_meta_stringdata_VNA.data,
    qt_meta_data_VNA,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VNA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VNA::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VNA.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SCPINode"))
        return static_cast< SCPINode*>(this);
    return Mode::qt_metacast(_clname);
}

int VNA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void VNA::CalibrationMeasurementsComplete(std::set<Calibration::Measurement> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VNA::graphColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void VNA::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void VNA::sweepTypeChanged(SweepType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VNA::startFreqChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void VNA::stopFreqChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void VNA::centerFreqChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void VNA::spanChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void VNA::sourceLevelChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void VNA::pointsChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void VNA::IFBandwidthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void VNA::averagingChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void VNA::startPowerChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void VNA::stopPowerChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void VNA::powerSweepFrequencyChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void VNA::CalibrationDisabled()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void VNA::CalibrationApplied(Calibration::Type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
