/****************************************************************************
** Meta object code from reading C++ file 'sysdbusregister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../registeredQDbus/sysdbusregister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sysdbusregister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SysdbusRegister_t {
    QByteArrayData data[20];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SysdbusRegister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SysdbusRegister_t qt_meta_stringdata_SysdbusRegister = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SysdbusRegister"
QT_MOC_LITERAL(1, 16, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 32, 28), // "com.control.center.interface"
QT_MOC_LITERAL(3, 61, 11), // "nameChanged"
QT_MOC_LITERAL(4, 73, 0), // ""
QT_MOC_LITERAL(5, 74, 12), // "computerinfo"
QT_MOC_LITERAL(6, 87, 11), // "exitService"
QT_MOC_LITERAL(7, 99, 15), // "GetComputerInfo"
QT_MOC_LITERAL(8, 115, 19), // "setNoPwdLoginStatus"
QT_MOC_LITERAL(9, 135, 6), // "status"
QT_MOC_LITERAL(10, 142, 8), // "username"
QT_MOC_LITERAL(11, 151, 19), // "getNoPwdLoginStatus"
QT_MOC_LITERAL(12, 171, 18), // "setAutoLoginStatus"
QT_MOC_LITERAL(13, 190, 23), // "getSuspendThenHibernate"
QT_MOC_LITERAL(14, 214, 23), // "setSuspendThenHibernate"
QT_MOC_LITERAL(15, 238, 4), // "time"
QT_MOC_LITERAL(16, 243, 14), // "setPasswdAging"
QT_MOC_LITERAL(17, 258, 4), // "days"
QT_MOC_LITERAL(18, 263, 21), // "changeOtherUserPasswd"
QT_MOC_LITERAL(19, 285, 3) // "pwd"

    },
    "SysdbusRegister\0D-Bus Interface\0"
    "com.control.center.interface\0nameChanged\0"
    "\0computerinfo\0exitService\0GetComputerInfo\0"
    "setNoPwdLoginStatus\0status\0username\0"
    "getNoPwdLoginStatus\0setAutoLoginStatus\0"
    "getSuspendThenHibernate\0setSuspendThenHibernate\0"
    "time\0setPasswdAging\0days\0changeOtherUserPasswd\0"
    "pwd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SysdbusRegister[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      11,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   71,    4, 0x46 /* Public | isScriptable */,
       5,    1,   74,    4, 0x46 /* Public | isScriptable */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   77,    4, 0x4a /* Public | isScriptable */,
       7,    0,   78,    4, 0x4a /* Public | isScriptable */,
       8,    2,   79,    4, 0x4a /* Public | isScriptable */,
      11,    0,   84,    4, 0x4a /* Public | isScriptable */,
      12,    1,   85,    4, 0x4a /* Public | isScriptable */,
      13,    0,   88,    4, 0x4a /* Public | isScriptable */,
      14,    1,   89,    4, 0x4a /* Public | isScriptable */,
      16,    2,   92,    4, 0x4a /* Public | isScriptable */,
      18,    2,   97,    4, 0x4a /* Public | isScriptable */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    9,   10,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   10,
    QMetaType::Int, QMetaType::QString, QMetaType::QString,   10,   19,

       0        // eod
};

void SysdbusRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SysdbusRegister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->computerinfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->exitService(); break;
        case 3: { QString _r = _t->GetComputerInfo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setNoPwdLoginStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: { QString _r = _t->getNoPwdLoginStatus();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setAutoLoginStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { QString _r = _t->getSuspendThenHibernate();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setSuspendThenHibernate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setPasswdAging((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: { int _r = _t->changeOtherUserPasswd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SysdbusRegister::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SysdbusRegister::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SysdbusRegister::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SysdbusRegister::computerinfo)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SysdbusRegister::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SysdbusRegister.data,
    qt_meta_data_SysdbusRegister,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SysdbusRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SysdbusRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SysdbusRegister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SysdbusRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SysdbusRegister::nameChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SysdbusRegister::computerinfo(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
