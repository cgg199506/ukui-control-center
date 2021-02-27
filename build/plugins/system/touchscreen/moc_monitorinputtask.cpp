/****************************************************************************
** Meta object code from reading C++ file 'monitorinputtask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/system/touchscreen/monitorinputtask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitorinputtask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MonitorInputTask_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MonitorInputTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MonitorInputTask_t qt_meta_stringdata_MonitorInputTask = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MonitorInputTask"
QT_MOC_LITERAL(1, 17, 10), // "slaveAdded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "device_id"
QT_MOC_LITERAL(4, 39, 12), // "slaveRemoved"
QT_MOC_LITERAL(5, 52, 11), // "masterAdded"
QT_MOC_LITERAL(6, 64, 13), // "masterRemoved"
QT_MOC_LITERAL(7, 78, 12), // "deviceEnable"
QT_MOC_LITERAL(8, 91, 13), // "deviceDisable"
QT_MOC_LITERAL(9, 105, 13), // "slaveAttached"
QT_MOC_LITERAL(10, 119, 13), // "slaveDetached"
QT_MOC_LITERAL(11, 133, 12) // "StartManager"

    },
    "MonitorInputTask\0slaveAdded\0\0device_id\0"
    "slaveRemoved\0masterAdded\0masterRemoved\0"
    "deviceEnable\0deviceDisable\0slaveAttached\0"
    "slaveDetached\0StartManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonitorInputTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,
       7,    1,   71,    2, 0x06 /* Public */,
       8,    1,   74,    2, 0x06 /* Public */,
       9,    1,   77,    2, 0x06 /* Public */,
      10,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MonitorInputTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MonitorInputTask *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slaveAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slaveRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->masterAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->masterRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->deviceEnable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->deviceDisable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slaveAttached((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slaveDetached((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->StartManager(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::slaveAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::slaveRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::masterAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::masterRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::deviceEnable)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::deviceDisable)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::slaveAttached)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MonitorInputTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MonitorInputTask::slaveDetached)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MonitorInputTask::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MonitorInputTask.data,
    qt_meta_data_MonitorInputTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MonitorInputTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonitorInputTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonitorInputTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MonitorInputTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MonitorInputTask::slaveAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MonitorInputTask::slaveRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MonitorInputTask::masterAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MonitorInputTask::masterRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MonitorInputTask::deviceEnable(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MonitorInputTask::deviceDisable(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MonitorInputTask::slaveAttached(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MonitorInputTask::slaveDetached(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
