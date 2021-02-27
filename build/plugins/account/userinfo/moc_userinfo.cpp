/****************************************************************************
** Meta object code from reading C++ file 'userinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/account/userinfo/userinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserInfo_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserInfo_t qt_meta_stringdata_UserInfo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserInfo"
QT_MOC_LITERAL(1, 9, 16), // "delete_user_slot"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "removefile"
QT_MOC_LITERAL(4, 38, 8), // "username"
QT_MOC_LITERAL(5, 47, 19), // "propertyChangedSlot"
QT_MOC_LITERAL(6, 67, 21), // "pwdAndAutoChangedSlot"
QT_MOC_LITERAL(7, 89, 3) // "key"

    },
    "UserInfo\0delete_user_slot\0\0removefile\0"
    "username\0propertyChangedSlot\0"
    "pwdAndAutoChangedSlot\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       5,    3,   34,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void UserInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->delete_user_slot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->propertyChangedSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 2: _t->pwdAndAutoChangedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserInfo::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UserInfo.data,
    qt_meta_data_UserInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserInfo.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int UserInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x18,  'o',  'r',  'g',  '.',  'k', 
    'y',  'c',  'c',  '.',  'C',  'o',  'm',  'm', 
    'o',  'n',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e', 
    // "className"
    0x03,  0x68,  'U',  's',  'e',  'r',  'I',  'n', 
    'f',  'o', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(UserInfo, UserInfo)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
