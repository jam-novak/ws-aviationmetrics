/****************************************************************************
** Meta object code from reading C++ file 'myglobalobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../aviationmap/myglobalobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myglobalobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyGlobalObject_t {
    QByteArrayData data[22];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyGlobalObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyGlobalObject_t qt_meta_stringdata_MyGlobalObject = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MyGlobalObject"
QT_MOC_LITERAL(1, 15, 15), // "readyForTakeoff"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "reviewFlight"
QT_MOC_LITERAL(4, 45, 14), // "latitudesignal"
QT_MOC_LITERAL(5, 60, 15), // "longitudesignal"
QT_MOC_LITERAL(6, 76, 14), // "airspeedsignal"
QT_MOC_LITERAL(7, 91, 15), // "steigratesignal"
QT_MOC_LITERAL(8, 107, 10), // "rollsignal"
QT_MOC_LITERAL(9, 118, 14), // "altitudesignal"
QT_MOC_LITERAL(10, 133, 14), // "pressuresignal"
QT_MOC_LITERAL(11, 148, 4), // "test"
QT_MOC_LITERAL(12, 153, 4), // "text"
QT_MOC_LITERAL(13, 158, 11), // "getLatitude"
QT_MOC_LITERAL(14, 170, 12), // "getLongitude"
QT_MOC_LITERAL(15, 183, 11), // "getAirspeed"
QT_MOC_LITERAL(16, 195, 12), // "getSteigrate"
QT_MOC_LITERAL(17, 208, 7), // "getRoll"
QT_MOC_LITERAL(18, 216, 11), // "getAltitude"
QT_MOC_LITERAL(19, 228, 11), // "getPressure"
QT_MOC_LITERAL(20, 240, 11), // "startFlight"
QT_MOC_LITERAL(21, 252, 10) // "viewFlight"

    },
    "MyGlobalObject\0readyForTakeoff\0\0"
    "reviewFlight\0latitudesignal\0longitudesignal\0"
    "airspeedsignal\0steigratesignal\0"
    "rollsignal\0altitudesignal\0pressuresignal\0"
    "test\0text\0getLatitude\0getLongitude\0"
    "getAirspeed\0getSteigrate\0getRoll\0"
    "getAltitude\0getPressure\0startFlight\0"
    "viewFlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyGlobalObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,
       9,    0,  116,    2, 0x06 /* Public */,
      10,    0,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  118,    2, 0x0a /* Public */,
      13,    0,  121,    2, 0x0a /* Public */,
      14,    0,  122,    2, 0x0a /* Public */,
      15,    0,  123,    2, 0x0a /* Public */,
      16,    0,  124,    2, 0x0a /* Public */,
      17,    0,  125,    2, 0x0a /* Public */,
      18,    0,  126,    2, 0x0a /* Public */,
      19,    0,  127,    2, 0x0a /* Public */,
      20,    0,  128,    2, 0x0a /* Public */,
      21,    0,  129,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QReal,
    QMetaType::QReal,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::QReal,
    QMetaType::QReal,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyGlobalObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyGlobalObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyForTakeoff(); break;
        case 1: _t->reviewFlight(); break;
        case 2: { qreal _r = _t->latitudesignal();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 3: { qreal _r = _t->longitudesignal();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 4: { double _r = _t->airspeedsignal();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 5: { double _r = _t->steigratesignal();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 6: { double _r = _t->rollsignal();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 7: { double _r = _t->altitudesignal();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 8: { double _r = _t->pressuresignal();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->test((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { qreal _r = _t->getLatitude();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 11: { qreal _r = _t->getLongitude();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 12: { double _r = _t->getAirspeed();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 13: { double _r = _t->getSteigrate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 14: { double _r = _t->getRoll();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 15: { double _r = _t->getAltitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 16: { double _r = _t->getPressure();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->startFlight(); break;
        case 18: _t->viewFlight(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::readyForTakeoff)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::reviewFlight)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = qreal (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::latitudesignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = qreal (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::longitudesignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = double (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::airspeedsignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = double (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::steigratesignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = double (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::rollsignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = double (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::altitudesignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = double (MyGlobalObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGlobalObject::pressuresignal)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyGlobalObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyGlobalObject.data,
    qt_meta_data_MyGlobalObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyGlobalObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyGlobalObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyGlobalObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyGlobalObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MyGlobalObject::readyForTakeoff()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyGlobalObject::reviewFlight()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
qreal MyGlobalObject::latitudesignal()
{
    qreal _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
qreal MyGlobalObject::longitudesignal()
{
    qreal _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
double MyGlobalObject::airspeedsignal()
{
    double _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
double MyGlobalObject::steigratesignal()
{
    double _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
double MyGlobalObject::rollsignal()
{
    double _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
double MyGlobalObject::altitudesignal()
{
    double _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
double MyGlobalObject::pressuresignal()
{
    double _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
