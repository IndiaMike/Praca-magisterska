/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../A_Start_Test3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "Map_GenerateMap"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "Map_RedrawMap"
QT_MOC_LITERAL(4, 42, 21), // "Map_GenerateObstacles"
QT_MOC_LITERAL(5, 64, 7), // "percent"
QT_MOC_LITERAL(6, 72, 28), // "on_buttonMapGenerate_clicked"
QT_MOC_LITERAL(7, 101, 23), // "Map_GenerateStartFinish"
QT_MOC_LITERAL(8, 125, 18), // "Map_Find8Neighbors"
QT_MOC_LITERAL(9, 144, 9), // "Map_AStar"
QT_MOC_LITERAL(10, 154, 16), // "Map_FindZeroNode"
QT_MOC_LITERAL(11, 171, 21), // "Map_FindNeighborsCost"
QT_MOC_LITERAL(12, 193, 15), // "Map_CheckFinish"
QT_MOC_LITERAL(13, 209, 34), // "on_buttonRunAStarAlgorithm_cl..."
QT_MOC_LITERAL(14, 244, 15), // "mousePressEvent"
QT_MOC_LITERAL(15, 260, 12), // "QMouseEvent*"
QT_MOC_LITERAL(16, 273, 1), // "e"
QT_MOC_LITERAL(17, 275, 12), // "Map_ResetMap"
QT_MOC_LITERAL(18, 288, 1), // "x"
QT_MOC_LITERAL(19, 290, 1), // "y"
QT_MOC_LITERAL(20, 292, 24), // "Map_FindVisibleObstacles"
QT_MOC_LITERAL(21, 317, 13), // "keyPressEvent"
QT_MOC_LITERAL(22, 331, 10), // "QKeyEvent*"
QT_MOC_LITERAL(23, 342, 5) // "event"

    },
    "MainWindow\0Map_GenerateMap\0\0Map_RedrawMap\0"
    "Map_GenerateObstacles\0percent\0"
    "on_buttonMapGenerate_clicked\0"
    "Map_GenerateStartFinish\0Map_Find8Neighbors\0"
    "Map_AStar\0Map_FindZeroNode\0"
    "Map_FindNeighborsCost\0Map_CheckFinish\0"
    "on_buttonRunAStarAlgorithm_clicked\0"
    "mousePressEvent\0QMouseEvent*\0e\0"
    "Map_ResetMap\0x\0y\0Map_FindVisibleObstacles\0"
    "keyPressEvent\0QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      17,    2,  105,    2, 0x08 /* Private */,
      20,    0,  110,    2, 0x08 /* Private */,
      21,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Map_GenerateMap(); break;
        case 1: _t->Map_RedrawMap(); break;
        case 2: _t->Map_GenerateObstacles((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_buttonMapGenerate_clicked(); break;
        case 4: _t->Map_GenerateStartFinish(); break;
        case 5: _t->Map_Find8Neighbors(); break;
        case 6: { bool _r = _t->Map_AStar();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->Map_FindZeroNode(); break;
        case 8: _t->Map_FindNeighborsCost(); break;
        case 9: { bool _r = _t->Map_CheckFinish();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_buttonRunAStarAlgorithm_clicked(); break;
        case 11: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->Map_ResetMap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->Map_FindVisibleObstacles(); break;
        case 14: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
