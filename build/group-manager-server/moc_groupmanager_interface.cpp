/****************************************************************************
** Meta object code from reading C++ file 'groupmanager_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "groupmanager_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupmanager_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgUkuiGroupmanagerInterfaceInterface_t {
    QByteArrayData data[14];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgUkuiGroupmanagerInterfaceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgUkuiGroupmanagerInterfaceInterface_t qt_meta_stringdata_OrgUkuiGroupmanagerInterfaceInterface = {
    {
QT_MOC_LITERAL(0, 0, 37), // "OrgUkuiGroupmanagerInterfaceI..."
QT_MOC_LITERAL(1, 38, 3), // "add"
QT_MOC_LITERAL(2, 42, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 9), // "groupName"
QT_MOC_LITERAL(5, 77, 7), // "groupId"
QT_MOC_LITERAL(6, 85, 14), // "addUserToGroup"
QT_MOC_LITERAL(7, 100, 8), // "userName"
QT_MOC_LITERAL(8, 109, 3), // "del"
QT_MOC_LITERAL(9, 113, 16), // "delUserFromGroup"
QT_MOC_LITERAL(10, 130, 8), // "getGroup"
QT_MOC_LITERAL(11, 139, 31), // "QDBusPendingReply<QVariantList>"
QT_MOC_LITERAL(12, 171, 9), // "getPasswd"
QT_MOC_LITERAL(13, 181, 3) // "set"

    },
    "OrgUkuiGroupmanagerInterfaceInterface\0"
    "add\0QDBusPendingReply<bool>\0\0groupName\0"
    "groupId\0addUserToGroup\0userName\0del\0"
    "delUserFromGroup\0getGroup\0"
    "QDBusPendingReply<QVariantList>\0"
    "getPasswd\0set"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgUkuiGroupmanagerInterfaceInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    3, 0x0a /* Public */,
       6,    2,   54,    3, 0x0a /* Public */,
       8,    1,   59,    3, 0x0a /* Public */,
       9,    2,   62,    3, 0x0a /* Public */,
      10,    0,   67,    3, 0x0a /* Public */,
      12,    0,   68,    3, 0x0a /* Public */,
      13,    2,   69,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    7,
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    7,
    0x80000000 | 11,
    0x80000000 | 11,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,

       0        // eod
};

void OrgUkuiGroupmanagerInterfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrgUkuiGroupmanagerInterfaceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QDBusPendingReply<bool> _r = _t->add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<bool> _r = _t->addUserToGroup((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<bool> _r = _t->del((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<bool> _r = _t->delUserFromGroup((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<QVariantList> _r = _t->getGroup();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantList>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<QVariantList> _r = _t->getPasswd();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantList>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<bool> _r = _t->set((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrgUkuiGroupmanagerInterfaceInterface::staticMetaObject = { {
    &QDBusAbstractInterface::staticMetaObject,
    qt_meta_stringdata_OrgUkuiGroupmanagerInterfaceInterface.data,
    qt_meta_data_OrgUkuiGroupmanagerInterfaceInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrgUkuiGroupmanagerInterfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgUkuiGroupmanagerInterfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgUkuiGroupmanagerInterfaceInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgUkuiGroupmanagerInterfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
