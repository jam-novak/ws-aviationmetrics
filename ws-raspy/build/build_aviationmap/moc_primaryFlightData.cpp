/****************************************************************************
** Meta object code from reading C++ file 'primaryFlightData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../aviationmap/primaryFlightData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'primaryFlightData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrimaryFlightData_t {
    QByteArrayData data[86];
    char stringdata0[1221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrimaryFlightData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrimaryFlightData_t qt_meta_stringdata_PrimaryFlightData = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PrimaryFlightData"
QT_MOC_LITERAL(1, 18, 20), // "angleOfAttackChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "angleOfSideSlipChanged"
QT_MOC_LITERAL(4, 63, 11), // "rollChanged"
QT_MOC_LITERAL(5, 75, 12), // "pitchChanged"
QT_MOC_LITERAL(6, 88, 14), // "headingChanged"
QT_MOC_LITERAL(7, 103, 15), // "slipSkidChanged"
QT_MOC_LITERAL(8, 119, 15), // "turnRateChanged"
QT_MOC_LITERAL(9, 135, 15), // "airspeedChanged"
QT_MOC_LITERAL(10, 151, 17), // "machNumberChanged"
QT_MOC_LITERAL(11, 169, 15), // "altitudeChanged"
QT_MOC_LITERAL(12, 185, 15), // "pressureChanged"
QT_MOC_LITERAL(13, 201, 16), // "climbRateChanged"
QT_MOC_LITERAL(14, 218, 13), // "ilsLOCChanged"
QT_MOC_LITERAL(15, 232, 12), // "ilsGSChanged"
QT_MOC_LITERAL(16, 245, 13), // "fdRollChanged"
QT_MOC_LITERAL(17, 259, 14), // "fdPitchChanged"
QT_MOC_LITERAL(18, 274, 18), // "altitudeBugChanged"
QT_MOC_LITERAL(19, 293, 18), // "airspeedBugChanged"
QT_MOC_LITERAL(20, 312, 17), // "headingBugChanged"
QT_MOC_LITERAL(21, 330, 13), // "courseChanged"
QT_MOC_LITERAL(22, 344, 19), // "vorDeviationChanged"
QT_MOC_LITERAL(23, 364, 14), // "bearingChanged"
QT_MOC_LITERAL(24, 379, 18), // "dmeDistanceChanged"
QT_MOC_LITERAL(25, 398, 17), // "flightModeChanged"
QT_MOC_LITERAL(26, 416, 16), // "speedModeChanged"
QT_MOC_LITERAL(27, 433, 28), // "lateralNavigationModeChanged"
QT_MOC_LITERAL(28, 462, 29), // "verticalNavigationModeChanged"
QT_MOC_LITERAL(29, 492, 35), // "courseDeviationIndicatorModeC..."
QT_MOC_LITERAL(30, 528, 12), // "stallChanged"
QT_MOC_LITERAL(31, 541, 16), // "fdVisibleChanged"
QT_MOC_LITERAL(32, 558, 19), // "pressureModeChanged"
QT_MOC_LITERAL(33, 578, 20), // "ilsLOCVisibleChanged"
QT_MOC_LITERAL(34, 599, 19), // "ilsGSVisibleChanged"
QT_MOC_LITERAL(35, 619, 19), // "leftTankFuelChanged"
QT_MOC_LITERAL(36, 639, 20), // "rightTankFuelChanged"
QT_MOC_LITERAL(37, 660, 10), // "egtChanged"
QT_MOC_LITERAL(38, 671, 15), // "fuelFlowChanged"
QT_MOC_LITERAL(39, 687, 24), // "engineTemperatureChanged"
QT_MOC_LITERAL(40, 712, 21), // "enginePressureChanged"
QT_MOC_LITERAL(41, 734, 10), // "vacChanged"
QT_MOC_LITERAL(42, 745, 10), // "ampChanged"
QT_MOC_LITERAL(43, 756, 10), // "rpmChanged"
QT_MOC_LITERAL(44, 767, 13), // "angleOfAttack"
QT_MOC_LITERAL(45, 781, 15), // "angleOfSideSlip"
QT_MOC_LITERAL(46, 797, 4), // "roll"
QT_MOC_LITERAL(47, 802, 5), // "pitch"
QT_MOC_LITERAL(48, 808, 7), // "heading"
QT_MOC_LITERAL(49, 816, 8), // "slipSkid"
QT_MOC_LITERAL(50, 825, 8), // "turnRate"
QT_MOC_LITERAL(51, 834, 8), // "airspeed"
QT_MOC_LITERAL(52, 843, 10), // "machNumber"
QT_MOC_LITERAL(53, 854, 8), // "altitude"
QT_MOC_LITERAL(54, 863, 8), // "pressure"
QT_MOC_LITERAL(55, 872, 9), // "climbRate"
QT_MOC_LITERAL(56, 882, 6), // "ilsLOC"
QT_MOC_LITERAL(57, 889, 5), // "ilsGS"
QT_MOC_LITERAL(58, 895, 6), // "fdRoll"
QT_MOC_LITERAL(59, 902, 7), // "fdPitch"
QT_MOC_LITERAL(60, 910, 11), // "altitudeBug"
QT_MOC_LITERAL(61, 922, 11), // "airspeedBug"
QT_MOC_LITERAL(62, 934, 10), // "headingBug"
QT_MOC_LITERAL(63, 945, 6), // "course"
QT_MOC_LITERAL(64, 952, 12), // "vorDeviation"
QT_MOC_LITERAL(65, 965, 7), // "bearing"
QT_MOC_LITERAL(66, 973, 11), // "dmeDistance"
QT_MOC_LITERAL(67, 985, 12), // "pressureMode"
QT_MOC_LITERAL(68, 998, 10), // "flightMode"
QT_MOC_LITERAL(69, 1009, 9), // "speedMode"
QT_MOC_LITERAL(70, 1019, 21), // "lateralNavigationMode"
QT_MOC_LITERAL(71, 1041, 22), // "verticalNavigationMode"
QT_MOC_LITERAL(72, 1064, 28), // "courseDeviationIndicatorMode"
QT_MOC_LITERAL(73, 1093, 13), // "ilsLOCVisible"
QT_MOC_LITERAL(74, 1107, 12), // "ilsGSVisible"
QT_MOC_LITERAL(75, 1120, 5), // "stall"
QT_MOC_LITERAL(76, 1126, 9), // "fdVisible"
QT_MOC_LITERAL(77, 1136, 12), // "leftTankFuel"
QT_MOC_LITERAL(78, 1149, 13), // "rightTankFuel"
QT_MOC_LITERAL(79, 1163, 3), // "egt"
QT_MOC_LITERAL(80, 1167, 8), // "fuelFlow"
QT_MOC_LITERAL(81, 1176, 17), // "engineTemperature"
QT_MOC_LITERAL(82, 1194, 14), // "enginePressure"
QT_MOC_LITERAL(83, 1209, 3), // "vac"
QT_MOC_LITERAL(84, 1213, 3), // "amp"
QT_MOC_LITERAL(85, 1217, 3) // "rpm"

    },
    "PrimaryFlightData\0angleOfAttackChanged\0"
    "\0angleOfSideSlipChanged\0rollChanged\0"
    "pitchChanged\0headingChanged\0slipSkidChanged\0"
    "turnRateChanged\0airspeedChanged\0"
    "machNumberChanged\0altitudeChanged\0"
    "pressureChanged\0climbRateChanged\0"
    "ilsLOCChanged\0ilsGSChanged\0fdRollChanged\0"
    "fdPitchChanged\0altitudeBugChanged\0"
    "airspeedBugChanged\0headingBugChanged\0"
    "courseChanged\0vorDeviationChanged\0"
    "bearingChanged\0dmeDistanceChanged\0"
    "flightModeChanged\0speedModeChanged\0"
    "lateralNavigationModeChanged\0"
    "verticalNavigationModeChanged\0"
    "courseDeviationIndicatorModeChanged\0"
    "stallChanged\0fdVisibleChanged\0"
    "pressureModeChanged\0ilsLOCVisibleChanged\0"
    "ilsGSVisibleChanged\0leftTankFuelChanged\0"
    "rightTankFuelChanged\0egtChanged\0"
    "fuelFlowChanged\0engineTemperatureChanged\0"
    "enginePressureChanged\0vacChanged\0"
    "ampChanged\0rpmChanged\0angleOfAttack\0"
    "angleOfSideSlip\0roll\0pitch\0heading\0"
    "slipSkid\0turnRate\0airspeed\0machNumber\0"
    "altitude\0pressure\0climbRate\0ilsLOC\0"
    "ilsGS\0fdRoll\0fdPitch\0altitudeBug\0"
    "airspeedBug\0headingBug\0course\0"
    "vorDeviation\0bearing\0dmeDistance\0"
    "pressureMode\0flightMode\0speedMode\0"
    "lateralNavigationMode\0verticalNavigationMode\0"
    "courseDeviationIndicatorMode\0ilsLOCVisible\0"
    "ilsGSVisible\0stall\0fdVisible\0leftTankFuel\0"
    "rightTankFuel\0egt\0fuelFlow\0engineTemperature\0"
    "enginePressure\0vac\0amp\0rpm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrimaryFlightData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      42,  266, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  224,    2, 0x06 /* Public */,
       3,    0,  225,    2, 0x06 /* Public */,
       4,    0,  226,    2, 0x06 /* Public */,
       5,    0,  227,    2, 0x06 /* Public */,
       6,    0,  228,    2, 0x06 /* Public */,
       7,    0,  229,    2, 0x06 /* Public */,
       8,    0,  230,    2, 0x06 /* Public */,
       9,    0,  231,    2, 0x06 /* Public */,
      10,    0,  232,    2, 0x06 /* Public */,
      11,    0,  233,    2, 0x06 /* Public */,
      12,    0,  234,    2, 0x06 /* Public */,
      13,    0,  235,    2, 0x06 /* Public */,
      14,    0,  236,    2, 0x06 /* Public */,
      15,    0,  237,    2, 0x06 /* Public */,
      16,    0,  238,    2, 0x06 /* Public */,
      17,    0,  239,    2, 0x06 /* Public */,
      18,    0,  240,    2, 0x06 /* Public */,
      19,    0,  241,    2, 0x06 /* Public */,
      20,    0,  242,    2, 0x06 /* Public */,
      21,    0,  243,    2, 0x06 /* Public */,
      22,    0,  244,    2, 0x06 /* Public */,
      23,    0,  245,    2, 0x06 /* Public */,
      24,    0,  246,    2, 0x06 /* Public */,
      25,    0,  247,    2, 0x06 /* Public */,
      26,    0,  248,    2, 0x06 /* Public */,
      27,    0,  249,    2, 0x06 /* Public */,
      28,    0,  250,    2, 0x06 /* Public */,
      29,    0,  251,    2, 0x06 /* Public */,
      30,    0,  252,    2, 0x06 /* Public */,
      31,    0,  253,    2, 0x06 /* Public */,
      32,    0,  254,    2, 0x06 /* Public */,
      33,    0,  255,    2, 0x06 /* Public */,
      34,    0,  256,    2, 0x06 /* Public */,
      35,    0,  257,    2, 0x06 /* Public */,
      36,    0,  258,    2, 0x06 /* Public */,
      37,    0,  259,    2, 0x06 /* Public */,
      38,    0,  260,    2, 0x06 /* Public */,
      39,    0,  261,    2, 0x06 /* Public */,
      40,    0,  262,    2, 0x06 /* Public */,
      41,    0,  263,    2, 0x06 /* Public */,
      42,    0,  264,    2, 0x06 /* Public */,
      43,    0,  265,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      44, QMetaType::Double, 0x00495001,
      45, QMetaType::Double, 0x00495001,
      46, QMetaType::Double, 0x00495001,
      47, QMetaType::Double, 0x00495001,
      48, QMetaType::Double, 0x00495001,
      49, QMetaType::Double, 0x00495001,
      50, QMetaType::Double, 0x00495001,
      51, QMetaType::Double, 0x00495001,
      52, QMetaType::Double, 0x00495001,
      53, QMetaType::Double, 0x00495001,
      54, QMetaType::Double, 0x00495001,
      55, QMetaType::Double, 0x00495001,
      56, QMetaType::Double, 0x00495001,
      57, QMetaType::Double, 0x00495001,
      58, QMetaType::Double, 0x00495001,
      59, QMetaType::Double, 0x00495001,
      60, QMetaType::Double, 0x00495001,
      61, QMetaType::Double, 0x00495001,
      62, QMetaType::Double, 0x00495001,
      63, QMetaType::Double, 0x00495001,
      64, QMetaType::Double, 0x00495001,
      65, QMetaType::Double, 0x00495001,
      66, QMetaType::Double, 0x00495001,
      67, QMetaType::Int, 0x00495001,
      68, QMetaType::Int, 0x00495001,
      69, QMetaType::Int, 0x00495001,
      70, QMetaType::Int, 0x00495001,
      71, QMetaType::Int, 0x00495001,
      72, QMetaType::Int, 0x00495001,
      73, QMetaType::Bool, 0x00495001,
      74, QMetaType::Bool, 0x00495001,
      75, QMetaType::Bool, 0x00495001,
      76, QMetaType::Bool, 0x00495001,
      77, QMetaType::Double, 0x00495103,
      78, QMetaType::Double, 0x00495103,
      79, QMetaType::Double, 0x00495103,
      80, QMetaType::Double, 0x00495103,
      81, QMetaType::Double, 0x00495103,
      82, QMetaType::Double, 0x00495103,
      83, QMetaType::Double, 0x00495103,
      84, QMetaType::Double, 0x00495103,
      85, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      30,
      23,
      24,
      25,
      26,
      27,
      31,
      32,
      28,
      29,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,

       0        // eod
};

void PrimaryFlightData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrimaryFlightData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->angleOfAttackChanged(); break;
        case 1: _t->angleOfSideSlipChanged(); break;
        case 2: _t->rollChanged(); break;
        case 3: _t->pitchChanged(); break;
        case 4: _t->headingChanged(); break;
        case 5: _t->slipSkidChanged(); break;
        case 6: _t->turnRateChanged(); break;
        case 7: _t->airspeedChanged(); break;
        case 8: _t->machNumberChanged(); break;
        case 9: _t->altitudeChanged(); break;
        case 10: _t->pressureChanged(); break;
        case 11: _t->climbRateChanged(); break;
        case 12: _t->ilsLOCChanged(); break;
        case 13: _t->ilsGSChanged(); break;
        case 14: _t->fdRollChanged(); break;
        case 15: _t->fdPitchChanged(); break;
        case 16: _t->altitudeBugChanged(); break;
        case 17: _t->airspeedBugChanged(); break;
        case 18: _t->headingBugChanged(); break;
        case 19: _t->courseChanged(); break;
        case 20: _t->vorDeviationChanged(); break;
        case 21: _t->bearingChanged(); break;
        case 22: _t->dmeDistanceChanged(); break;
        case 23: _t->flightModeChanged(); break;
        case 24: _t->speedModeChanged(); break;
        case 25: _t->lateralNavigationModeChanged(); break;
        case 26: _t->verticalNavigationModeChanged(); break;
        case 27: _t->courseDeviationIndicatorModeChanged(); break;
        case 28: _t->stallChanged(); break;
        case 29: _t->fdVisibleChanged(); break;
        case 30: _t->pressureModeChanged(); break;
        case 31: _t->ilsLOCVisibleChanged(); break;
        case 32: _t->ilsGSVisibleChanged(); break;
        case 33: _t->leftTankFuelChanged(); break;
        case 34: _t->rightTankFuelChanged(); break;
        case 35: _t->egtChanged(); break;
        case 36: _t->fuelFlowChanged(); break;
        case 37: _t->engineTemperatureChanged(); break;
        case 38: _t->enginePressureChanged(); break;
        case 39: _t->vacChanged(); break;
        case 40: _t->ampChanged(); break;
        case 41: _t->rpmChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::angleOfAttackChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::angleOfSideSlipChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::rollChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::pitchChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::headingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::slipSkidChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::turnRateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::airspeedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::machNumberChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::altitudeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::pressureChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::climbRateChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::ilsLOCChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::ilsGSChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::fdRollChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::fdPitchChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::altitudeBugChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::airspeedBugChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::headingBugChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::courseChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::vorDeviationChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::bearingChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::dmeDistanceChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::flightModeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::speedModeChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::lateralNavigationModeChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::verticalNavigationModeChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::courseDeviationIndicatorModeChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::stallChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::fdVisibleChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::pressureModeChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::ilsLOCVisibleChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::ilsGSVisibleChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::leftTankFuelChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::rightTankFuelChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::egtChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::fuelFlowChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::engineTemperatureChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::enginePressureChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::vacChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::ampChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (PrimaryFlightData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrimaryFlightData::rpmChanged)) {
                *result = 41;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrimaryFlightData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->angleOfAttack(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->angleOfSideSlip(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->roll(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->pitch(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->heading(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->slipSkid(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->turnRate(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->airspeed(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->machNumber(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->altitude(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->pressure(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->climbRate(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->ilsLOC(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->ilsGS(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->fdRoll(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->fdPitch(); break;
        case 16: *reinterpret_cast< double*>(_v) = _t->altitudeBug(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->airspeedBug(); break;
        case 18: *reinterpret_cast< double*>(_v) = _t->headingBug(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->course(); break;
        case 20: *reinterpret_cast< double*>(_v) = _t->vorDeviation(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->bearing(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->dmeDistance(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->pressureMode(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->flightMode(); break;
        case 25: *reinterpret_cast< int*>(_v) = _t->speedMode(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->lateralNavigationMode(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->verticalNavigationMode(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->courseDeviationIndicatorMode(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->ilsLOCVisible(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->ilsGSVisible(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->stall(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->fdVisible(); break;
        case 33: *reinterpret_cast< double*>(_v) = _t->leftTankFuel(); break;
        case 34: *reinterpret_cast< double*>(_v) = _t->rightTankFuel(); break;
        case 35: *reinterpret_cast< double*>(_v) = _t->egt(); break;
        case 36: *reinterpret_cast< double*>(_v) = _t->fuelFlow(); break;
        case 37: *reinterpret_cast< double*>(_v) = _t->engineTemperature(); break;
        case 38: *reinterpret_cast< double*>(_v) = _t->enginePressure(); break;
        case 39: *reinterpret_cast< double*>(_v) = _t->vac(); break;
        case 40: *reinterpret_cast< double*>(_v) = _t->amp(); break;
        case 41: *reinterpret_cast< double*>(_v) = _t->rpm(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrimaryFlightData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 33: _t->setLeftTankFuel(*reinterpret_cast< double*>(_v)); break;
        case 34: _t->setRightTankFuel(*reinterpret_cast< double*>(_v)); break;
        case 35: _t->setEgt(*reinterpret_cast< double*>(_v)); break;
        case 36: _t->setFuelFlow(*reinterpret_cast< double*>(_v)); break;
        case 37: _t->setEngineTemperature(*reinterpret_cast< double*>(_v)); break;
        case 38: _t->setEnginePressure(*reinterpret_cast< double*>(_v)); break;
        case 39: _t->setVac(*reinterpret_cast< double*>(_v)); break;
        case 40: _t->setAmp(*reinterpret_cast< double*>(_v)); break;
        case 41: _t->setRpm(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PrimaryFlightData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PrimaryFlightData.data,
    qt_meta_data_PrimaryFlightData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrimaryFlightData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrimaryFlightData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryFlightData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PrimaryFlightData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 42;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 42;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PrimaryFlightData::angleOfAttackChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PrimaryFlightData::angleOfSideSlipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PrimaryFlightData::rollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PrimaryFlightData::pitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PrimaryFlightData::headingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PrimaryFlightData::slipSkidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PrimaryFlightData::turnRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PrimaryFlightData::airspeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PrimaryFlightData::machNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PrimaryFlightData::altitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PrimaryFlightData::pressureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PrimaryFlightData::climbRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PrimaryFlightData::ilsLOCChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PrimaryFlightData::ilsGSChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PrimaryFlightData::fdRollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PrimaryFlightData::fdPitchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void PrimaryFlightData::altitudeBugChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void PrimaryFlightData::airspeedBugChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void PrimaryFlightData::headingBugChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void PrimaryFlightData::courseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void PrimaryFlightData::vorDeviationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void PrimaryFlightData::bearingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void PrimaryFlightData::dmeDistanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void PrimaryFlightData::flightModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void PrimaryFlightData::speedModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void PrimaryFlightData::lateralNavigationModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void PrimaryFlightData::verticalNavigationModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void PrimaryFlightData::courseDeviationIndicatorModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void PrimaryFlightData::stallChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void PrimaryFlightData::fdVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void PrimaryFlightData::pressureModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void PrimaryFlightData::ilsLOCVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void PrimaryFlightData::ilsGSVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void PrimaryFlightData::leftTankFuelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void PrimaryFlightData::rightTankFuelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void PrimaryFlightData::egtChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void PrimaryFlightData::fuelFlowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void PrimaryFlightData::engineTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void PrimaryFlightData::enginePressureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void PrimaryFlightData::vacChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void PrimaryFlightData::ampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void PrimaryFlightData::rpmChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
