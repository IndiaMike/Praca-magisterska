/****************************************************************************
** Meta object code from reading C++ file 'lab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ControlApp1/lab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lab_t {
    QByteArrayData data[13];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lab_t qt_meta_stringdata_Lab = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Lab"
QT_MOC_LITERAL(1, 4, 5), // "crc16"
QT_MOC_LITERAL(2, 10, 8), // "uint16_t"
QT_MOC_LITERAL(3, 19, 0), // ""
QT_MOC_LITERAL(4, 20, 8), // "uint8_t*"
QT_MOC_LITERAL(5, 29, 6), // "packet"
QT_MOC_LITERAL(6, 36, 8), // "uint32_t"
QT_MOC_LITERAL(7, 45, 6), // "nBytes"
QT_MOC_LITERAL(8, 52, 18), // "PrepareFrameToSend"
QT_MOC_LITERAL(9, 71, 12), // "ReadMotorPos"
QT_MOC_LITERAL(10, 84, 3), // "buf"
QT_MOC_LITERAL(11, 88, 13), // "ReadTelemetry"
QT_MOC_LITERAL(12, 102, 19) // "PrepareFrameOnlyCmd"

    },
    "Lab\0crc16\0uint16_t\0\0uint8_t*\0packet\0"
    "uint32_t\0nBytes\0PrepareFrameToSend\0"
    "ReadMotorPos\0buf\0ReadTelemetry\0"
    "PrepareFrameOnlyCmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    3, 0x0a /* Public */,
       8,    0,   44,    3, 0x0a /* Public */,
       9,    1,   45,    3, 0x0a /* Public */,
      11,    1,   48,    3, 0x0a /* Public */,
      12,    0,   51,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 4,   10,
    QMetaType::Void, 0x80000000 | 4,   10,
    0x80000000 | 2,

       0        // eod
};

void Lab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { uint16_t _r = _t->crc16((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint16_t*>(_a[0]) = std::move(_r); }  break;
        case 1: { uint16_t _r = _t->PrepareFrameToSend();
            if (_a[0]) *reinterpret_cast< uint16_t*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ReadMotorPos((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 3: _t->ReadTelemetry((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 4: { uint16_t _r = _t->PrepareFrameOnlyCmd();
            if (_a[0]) *reinterpret_cast< uint16_t*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lab::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Lab.data,
    qt_meta_data_Lab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lab.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Lab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
