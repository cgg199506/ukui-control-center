/****************************************************************************
** Meta object code from reading C++ file 'getshortcutworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/devices/shortcut/getshortcutworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getshortcutworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GetShortcutWorker_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetShortcutWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetShortcutWorker_t qt_meta_stringdata_GetShortcutWorker = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GetShortcutWorker"
QT_MOC_LITERAL(1, 18, 23), // "generalShortcutGenerate"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "schema"
QT_MOC_LITERAL(4, 50, 3), // "key"
QT_MOC_LITERAL(5, 54, 5), // "value"
QT_MOC_LITERAL(6, 60, 22), // "customShortcutGenerate"
QT_MOC_LITERAL(7, 83, 4), // "path"
QT_MOC_LITERAL(8, 88, 4), // "name"
QT_MOC_LITERAL(9, 93, 10), // "bindingkey"
QT_MOC_LITERAL(10, 104, 6), // "action"
QT_MOC_LITERAL(11, 111, 14) // "workerComplete"

    },
    "GetShortcutWorker\0generalShortcutGenerate\0"
    "\0schema\0key\0value\0customShortcutGenerate\0"
    "path\0name\0bindingkey\0action\0workerComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetShortcutWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    4,   36,    2, 0x06 /* Public */,
      11,    0,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,
    QMetaType::Void,

       0        // eod
};

void GetShortcutWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetShortcutWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generalShortcutGenerate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->customShortcutGenerate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->workerComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetShortcutWorker::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetShortcutWorker::generalShortcutGenerate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GetShortcutWorker::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetShortcutWorker::customShortcutGenerate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GetShortcutWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetShortcutWorker::workerComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetShortcutWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GetShortcutWorker.data,
    qt_meta_data_GetShortcutWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetShortcutWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetShortcutWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetShortcutWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GetShortcutWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GetShortcutWorker::generalShortcutGenerate(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GetShortcutWorker::customShortcutGenerate(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GetShortcutWorker::workerComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
