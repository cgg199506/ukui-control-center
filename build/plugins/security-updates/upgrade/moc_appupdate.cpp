/****************************************************************************
** Meta object code from reading C++ file 'appupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/security-updates/upgrade/src/appupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppUpdateWid_t {
    QByteArrayData data[30];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppUpdateWid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppUpdateWid_t qt_meta_stringdata_AppUpdateWid = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AppUpdateWid"
QT_MOC_LITERAL(1, 13, 9), // "startWork"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "appName"
QT_MOC_LITERAL(4, 32, 9), // "startMove"
QT_MOC_LITERAL(5, 42, 4), // "list"
QT_MOC_LITERAL(6, 47, 19), // "hideUpdateBtnSignal"
QT_MOC_LITERAL(7, 67, 9), // "isSucceed"
QT_MOC_LITERAL(8, 77, 21), // "changeUpdateAllSignal"
QT_MOC_LITERAL(9, 99, 20), // "downloadFailedSignal"
QT_MOC_LITERAL(10, 120, 8), // "exitCode"
QT_MOC_LITERAL(11, 129, 16), // "filelockedSignal"
QT_MOC_LITERAL(12, 146, 6), // "cancel"
QT_MOC_LITERAL(13, 153, 11), // "showDetails"
QT_MOC_LITERAL(14, 165, 13), // "showUpdateLog"
QT_MOC_LITERAL(15, 179, 14), // "cancelOrUpdate"
QT_MOC_LITERAL(16, 194, 18), // "showInstallStatues"
QT_MOC_LITERAL(17, 213, 6), // "status"
QT_MOC_LITERAL(18, 220, 10), // "appAptName"
QT_MOC_LITERAL(19, 231, 8), // "progress"
QT_MOC_LITERAL(20, 240, 8), // "errormsg"
QT_MOC_LITERAL(21, 249, 19), // "showDownloadStatues"
QT_MOC_LITERAL(22, 269, 13), // "downloadSpeed"
QT_MOC_LITERAL(23, 283, 20), // "slotDownloadPackages"
QT_MOC_LITERAL(24, 304, 22), // "calculateSpeedProgress"
QT_MOC_LITERAL(25, 327, 12), // "startInstall"
QT_MOC_LITERAL(26, 340, 12), // "updateAllApp"
QT_MOC_LITERAL(27, 353, 13), // "showUpdateBtn"
QT_MOC_LITERAL(28, 367, 23), // "hideOrShowUpdateBtnSlot"
QT_MOC_LITERAL(29, 391, 6) // "result"

    },
    "AppUpdateWid\0startWork\0\0appName\0"
    "startMove\0list\0hideUpdateBtnSignal\0"
    "isSucceed\0changeUpdateAllSignal\0"
    "downloadFailedSignal\0exitCode\0"
    "filelockedSignal\0cancel\0showDetails\0"
    "showUpdateLog\0cancelOrUpdate\0"
    "showInstallStatues\0status\0appAptName\0"
    "progress\0errormsg\0showDownloadStatues\0"
    "downloadSpeed\0slotDownloadPackages\0"
    "calculateSpeedProgress\0startInstall\0"
    "updateAllApp\0showUpdateBtn\0"
    "hideOrShowUpdateBtnSlot\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppUpdateWid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    2,  107,    2, 0x06 /* Public */,
       6,    1,  112,    2, 0x06 /* Public */,
       8,    0,  115,    2, 0x06 /* Public */,
       9,    1,  116,    2, 0x06 /* Public */,
      11,    0,  119,    2, 0x06 /* Public */,
      12,    0,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  121,    2, 0x0a /* Public */,
      14,    0,  122,    2, 0x0a /* Public */,
      15,    0,  123,    2, 0x0a /* Public */,
      16,    4,  124,    2, 0x0a /* Public */,
      21,    2,  133,    2, 0x0a /* Public */,
      23,    0,  138,    2, 0x0a /* Public */,
      24,    0,  139,    2, 0x0a /* Public */,
      25,    1,  140,    2, 0x0a /* Public */,
      26,    0,  143,    2, 0x0a /* Public */,
      27,    0,  144,    2, 0x0a /* Public */,
      28,    1,  145,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    5,    3,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::QString,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   22,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,

       0        // eod
};

void AppUpdateWid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppUpdateWid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startWork((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->startMove((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->hideUpdateBtnSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->changeUpdateAllSignal(); break;
        case 4: _t->downloadFailedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->filelockedSignal(); break;
        case 6: _t->cancel(); break;
        case 7: _t->showDetails(); break;
        case 8: _t->showUpdateLog(); break;
        case 9: _t->cancelOrUpdate(); break;
        case 10: _t->showInstallStatues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 11: _t->showDownloadStatues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->slotDownloadPackages(); break;
        case 13: _t->calculateSpeedProgress(); break;
        case 14: _t->startInstall((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->updateAllApp(); break;
        case 16: _t->showUpdateBtn(); break;
        case 17: _t->hideOrShowUpdateBtnSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppUpdateWid::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::startWork)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppUpdateWid::*)(QStringList , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::startMove)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppUpdateWid::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::hideUpdateBtnSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppUpdateWid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::changeUpdateAllSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AppUpdateWid::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::downloadFailedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AppUpdateWid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::filelockedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AppUpdateWid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppUpdateWid::cancel)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppUpdateWid::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AppUpdateWid.data,
    qt_meta_data_AppUpdateWid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppUpdateWid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppUpdateWid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppUpdateWid.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AppUpdateWid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void AppUpdateWid::startWork(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppUpdateWid::startMove(QStringList _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppUpdateWid::hideUpdateBtnSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AppUpdateWid::changeUpdateAllSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AppUpdateWid::downloadFailedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AppUpdateWid::filelockedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AppUpdateWid::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
