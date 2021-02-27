/****************************************************************************
** Meta object code from reading C++ file 'ukccsessionserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../registeredSession/ukccsessionserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ukccsessionserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ukccSessionServer_t {
    QByteArrayData data[9];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ukccSessionServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ukccSessionServer_t qt_meta_stringdata_ukccSessionServer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ukccSessionServer"
QT_MOC_LITERAL(1, 18, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 34, 31), // "org.ukui.ukcc.session.interface"
QT_MOC_LITERAL(3, 66, 13), // "configChanged"
QT_MOC_LITERAL(4, 80, 0), // ""
QT_MOC_LITERAL(5, 81, 11), // "exitService"
QT_MOC_LITERAL(6, 93, 20), // "ReloadSecurityConfig"
QT_MOC_LITERAL(7, 114, 19), // "getModuleHideStatus"
QT_MOC_LITERAL(8, 134, 21) // "GetSecurityConfigPath"

    },
    "ukccSessionServer\0D-Bus Interface\0"
    "org.ukui.ukcc.session.interface\0"
    "configChanged\0\0exitService\0"
    "ReloadSecurityConfig\0getModuleHideStatus\0"
    "GetSecurityConfigPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ukccSessionServer[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   41,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    4, 0x0a /* Public */,
       6,    0,   43,    4, 0x0a /* Public */,
       7,    0,   44,    4, 0x0a /* Public */,
       8,    0,   45,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariantMap,
    QMetaType::QString,

       0        // eod
};

void ukccSessionServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ukccSessionServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->exitService(); break;
        case 2: _t->ReloadSecurityConfig(); break;
        case 3: { QVariantMap _r = _t->getModuleHideStatus();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->GetSecurityConfigPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ukccSessionServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ukccSessionServer::configChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ukccSessionServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ukccSessionServer.data,
    qt_meta_data_ukccSessionServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ukccSessionServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ukccSessionServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ukccSessionServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ukccSessionServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ukccSessionServer::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
