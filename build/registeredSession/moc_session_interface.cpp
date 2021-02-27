/****************************************************************************
** Meta object code from reading C++ file 'session_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "session_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgUkuiUkccSessionInterfaceInterface_t {
    QByteArrayData data[10];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgUkuiUkccSessionInterfaceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgUkuiUkccSessionInterfaceInterface_t qt_meta_stringdata_OrgUkuiUkccSessionInterfaceInterface = {
    {
QT_MOC_LITERAL(0, 0, 36), // "OrgUkuiUkccSessionInterfaceIn..."
QT_MOC_LITERAL(1, 37, 13), // "configChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 21), // "GetSecurityConfigPath"
QT_MOC_LITERAL(4, 74, 26), // "QDBusPendingReply<QString>"
QT_MOC_LITERAL(5, 101, 20), // "ReloadSecurityConfig"
QT_MOC_LITERAL(6, 122, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(7, 142, 11), // "exitService"
QT_MOC_LITERAL(8, 154, 19), // "getModuleHideStatus"
QT_MOC_LITERAL(9, 174, 30) // "QDBusPendingReply<QVariantMap>"

    },
    "OrgUkuiUkccSessionInterfaceInterface\0"
    "configChanged\0\0GetSecurityConfigPath\0"
    "QDBusPendingReply<QString>\0"
    "ReloadSecurityConfig\0QDBusPendingReply<>\0"
    "exitService\0getModuleHideStatus\0"
    "QDBusPendingReply<QVariantMap>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgUkuiUkccSessionInterfaceInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,
       7,    0,   42,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 9,

       0        // eod
};

void OrgUkuiUkccSessionInterfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrgUkuiUkccSessionInterfaceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: { QDBusPendingReply<QString> _r = _t->GetSecurityConfigPath();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->ReloadSecurityConfig();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->exitService();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<QVariantMap> _r = _t->getModuleHideStatus();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrgUkuiUkccSessionInterfaceInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgUkuiUkccSessionInterfaceInterface::configChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrgUkuiUkccSessionInterfaceInterface::staticMetaObject = { {
    &QDBusAbstractInterface::staticMetaObject,
    qt_meta_stringdata_OrgUkuiUkccSessionInterfaceInterface.data,
    qt_meta_data_OrgUkuiUkccSessionInterfaceInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrgUkuiUkccSessionInterfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgUkuiUkccSessionInterfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgUkuiUkccSessionInterfaceInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgUkuiUkccSessionInterfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OrgUkuiUkccSessionInterfaceInterface::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
