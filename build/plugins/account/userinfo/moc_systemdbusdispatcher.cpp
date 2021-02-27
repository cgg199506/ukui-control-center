/****************************************************************************
** Meta object code from reading C++ file 'systemdbusdispatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/account/userinfo/qtdbus/systemdbusdispatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemdbusdispatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemDbusDispatcher_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemDbusDispatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemDbusDispatcher_t qt_meta_stringdata_SystemDbusDispatcher = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SystemDbusDispatcher"
QT_MOC_LITERAL(1, 21, 14), // "createuserdone"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "path"
QT_MOC_LITERAL(4, 42, 14), // "deleteuserdone"
QT_MOC_LITERAL(5, 57, 19), // "create_user_success"
QT_MOC_LITERAL(6, 77, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(7, 93, 7), // "objpath"
QT_MOC_LITERAL(8, 101, 19) // "delete_user_success"

    },
    "SystemDbusDispatcher\0createuserdone\0"
    "\0path\0deleteuserdone\0create_user_success\0"
    "QDBusObjectPath\0objpath\0delete_user_success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemDbusDispatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SystemDbusDispatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemDbusDispatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createuserdone((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->deleteuserdone((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->create_user_success((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        case 3: _t->delete_user_success((*reinterpret_cast< QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemDbusDispatcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemDbusDispatcher::createuserdone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemDbusDispatcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemDbusDispatcher::deleteuserdone)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SystemDbusDispatcher::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SystemDbusDispatcher.data,
    qt_meta_data_SystemDbusDispatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemDbusDispatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemDbusDispatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemDbusDispatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemDbusDispatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SystemDbusDispatcher::createuserdone(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemDbusDispatcher::deleteuserdone(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
