/****************************************************************************
** Meta object code from reading C++ file 'BrainBWin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BrainBWin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrainBWin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BrainBWin_t {
    QByteArrayData data[8];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrainBWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrainBWin_t qt_meta_stringdata_BrainBWin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BrainBWin"
QT_MOC_LITERAL(1, 10, 12), // "updateHeroes"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "image"
QT_MOC_LITERAL(4, 30, 1), // "x"
QT_MOC_LITERAL(5, 32, 1), // "y"
QT_MOC_LITERAL(6, 34, 11), // "endAndStats"
QT_MOC_LITERAL(7, 46, 1) // "t"

    },
    "BrainBWin\0updateHeroes\0\0image\0x\0y\0"
    "endAndStats\0t"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrainBWin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x0a /* Public */,
       6,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void BrainBWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrainBWin *_t = static_cast<BrainBWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateHeroes((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 1: _t->endAndStats((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BrainBWin::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BrainBWin.data,
    qt_meta_data_BrainBWin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrainBWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrainBWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrainBWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BrainBWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
