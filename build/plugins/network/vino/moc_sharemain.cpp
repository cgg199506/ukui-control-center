/****************************************************************************
** Meta object code from reading C++ file 'sharemain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/network/vino/sharemain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharemain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShareMain_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShareMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShareMain_t qt_meta_stringdata_ShareMain = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ShareMain"
QT_MOC_LITERAL(1, 10, 10), // "enableSlot"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "status"
QT_MOC_LITERAL(4, 29, 11), // "viewBoxSlot"
QT_MOC_LITERAL(5, 41, 10), // "accessSlot"
QT_MOC_LITERAL(6, 52, 13), // "pwdEnableSlot"
QT_MOC_LITERAL(7, 66, 12), // "pwdInputSlot"
QT_MOC_LITERAL(8, 79, 3) // "pwd"

    },
    "ShareMain\0enableSlot\0\0status\0viewBoxSlot\0"
    "accessSlot\0pwdEnableSlot\0pwdInputSlot\0"
    "pwd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShareMain[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void ShareMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->viewBoxSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->accessSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pwdEnableSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->pwdInputSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShareMain::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ShareMain.data,
    qt_meta_data_ShareMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShareMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShareMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShareMain.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ShareMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
