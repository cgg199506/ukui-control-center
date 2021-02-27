/****************************************************************************
** Meta object code from reading C++ file 'session_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "session_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfaceAdaptor_t {
    QByteArrayData data[11];
    char stringdata0[664];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceAdaptor_t qt_meta_stringdata_InterfaceAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InterfaceAdaptor"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 31), // "org.ukui.ukcc.session.interface"
QT_MOC_LITERAL(3, 65, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 85, 488), // "  <interface name=\"org.ukui...."
QT_MOC_LITERAL(5, 538, 13), // "configChanged"
QT_MOC_LITERAL(6, 552, 0), // ""
QT_MOC_LITERAL(7, 553, 21), // "GetSecurityConfigPath"
QT_MOC_LITERAL(8, 575, 20), // "ReloadSecurityConfig"
QT_MOC_LITERAL(9, 596, 11), // "exitService"
QT_MOC_LITERAL(10, 608, 19) // "getModuleHideStatus"

    },
    "InterfaceAdaptor\0D-Bus Interface\0"
    "org.ukui.ukcc.session.interface\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.ukui.ukcc.session.interface\">\n    <signal na"
    "me=\"configChanged\"/>\n    <method name=\"exitService\"/>\n    <metho"
    "d name=\"ReloadSecurityConfig\"/>\n    <method name=\"getModuleHideSta"
    "tus\">\n      <arg direction=\"out\" type=\"a{sv}\"/>\n      <annotati"
    "on value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\""
    "/>\n    </method>\n    <method name=\"GetSecurityConfigPath\">\n      "
    "<arg direction=\"out\" type=\"s\"/>\n    </method>\n  </interface>\n\0"
    "configChanged\0\0GetSecurityConfigPath\0"
    "ReloadSecurityConfig\0exitService\0"
    "getModuleHideStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       5,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    0,   43,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    6, 0x0a /* Public */,
       8,    0,   45,    6, 0x0a /* Public */,
       9,    0,   46,    6, 0x0a /* Public */,
      10,    0,   47,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariantMap,

       0        // eod
};

void InterfaceAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterfaceAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: { QString _r = _t->GetSecurityConfigPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ReloadSecurityConfig(); break;
        case 3: _t->exitService(); break;
        case 4: { QVariantMap _r = _t->getModuleHideStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InterfaceAdaptor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfaceAdaptor::configChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InterfaceAdaptor::staticMetaObject = { {
    &QDBusAbstractAdaptor::staticMetaObject,
    qt_meta_stringdata_InterfaceAdaptor.data,
    qt_meta_data_InterfaceAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InterfaceAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int InterfaceAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void InterfaceAdaptor::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
