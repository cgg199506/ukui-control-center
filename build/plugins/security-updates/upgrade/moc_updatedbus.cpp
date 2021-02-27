/****************************************************************************
** Meta object code from reading C++ file 'updatedbus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/security-updates/upgrade/src/updatedbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatedbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdateDbus_t {
    QByteArrayData data[28];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateDbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateDbus_t qt_meta_stringdata_UpdateDbus = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UpdateDbus"
QT_MOC_LITERAL(1, 11, 10), // "copyFinish"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "appName"
QT_MOC_LITERAL(4, 31, 19), // "transferAptProgress"
QT_MOC_LITERAL(5, 51, 6), // "status"
QT_MOC_LITERAL(6, 58, 10), // "aptPercent"
QT_MOC_LITERAL(7, 69, 8), // "errormsg"
QT_MOC_LITERAL(8, 78, 13), // "sendImportant"
QT_MOC_LITERAL(9, 92, 20), // "sendAppMessageSignal"
QT_MOC_LITERAL(10, 113, 9), // "AppAllMsg"
QT_MOC_LITERAL(11, 123, 3), // "msg"
QT_MOC_LITERAL(12, 127, 22), // "sendFinishGetMsgSignal"
QT_MOC_LITERAL(13, 150, 4), // "size"
QT_MOC_LITERAL(14, 155, 12), // "getAptSignal"
QT_MOC_LITERAL(15, 168, 3), // "arg"
QT_MOC_LITERAL(16, 172, 3), // "map"
QT_MOC_LITERAL(17, 176, 16), // "slotCopyFinished"
QT_MOC_LITERAL(18, 193, 20), // "getInameAndCnameList"
QT_MOC_LITERAL(19, 214, 19), // "getAppMessageSignal"
QT_MOC_LITERAL(20, 234, 7), // "urlList"
QT_MOC_LITERAL(21, 242, 8), // "nameList"
QT_MOC_LITERAL(22, 251, 12), // "fullnameList"
QT_MOC_LITERAL(23, 264, 8), // "sizeList"
QT_MOC_LITERAL(24, 273, 7), // "allSize"
QT_MOC_LITERAL(25, 281, 11), // "dependState"
QT_MOC_LITERAL(26, 293, 20), // "slotFinishGetMessage"
QT_MOC_LITERAL(27, 314, 3) // "num"

    },
    "UpdateDbus\0copyFinish\0\0appName\0"
    "transferAptProgress\0status\0aptPercent\0"
    "errormsg\0sendImportant\0sendAppMessageSignal\0"
    "AppAllMsg\0msg\0sendFinishGetMsgSignal\0"
    "size\0getAptSignal\0arg\0map\0slotCopyFinished\0"
    "getInameAndCnameList\0getAppMessageSignal\0"
    "urlList\0nameList\0fullnameList\0sizeList\0"
    "allSize\0dependState\0slotFinishGetMessage\0"
    "num"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateDbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    4,   67,    2, 0x06 /* Public */,
       8,    0,   76,    2, 0x06 /* Public */,
       9,    1,   77,    2, 0x06 /* Public */,
      12,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,   83,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,
      19,    7,   94,    2, 0x0a /* Public */,
      26,    1,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::QString,    5,    3,    6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,   15,   16,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QStringList, QMetaType::QString, QMetaType::Bool,   16,   20,   21,   22,   23,   24,   25,
    QMetaType::Void, QMetaType::QString,   27,

       0        // eod
};

void UpdateDbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateDbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyFinish((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->transferAptProgress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->sendImportant(); break;
        case 3: _t->sendAppMessageSignal((*reinterpret_cast< AppAllMsg(*)>(_a[1]))); break;
        case 4: _t->sendFinishGetMsgSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->getAptSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[2]))); break;
        case 6: _t->slotCopyFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->getInameAndCnameList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->getAppMessageSignal((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4])),(*reinterpret_cast< QStringList(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 9: _t->slotFinishGetMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AppAllMsg >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateDbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateDbus::copyFinish)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdateDbus::*)(QString , QString , float , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateDbus::transferAptProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UpdateDbus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateDbus::sendImportant)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UpdateDbus::*)(AppAllMsg );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateDbus::sendAppMessageSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UpdateDbus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UpdateDbus::sendFinishGetMsgSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UpdateDbus::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UpdateDbus.data,
    qt_meta_data_UpdateDbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateDbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateDbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDbus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UpdateDbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UpdateDbus::copyFinish(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UpdateDbus::transferAptProgress(QString _t1, QString _t2, float _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UpdateDbus::sendImportant()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UpdateDbus::sendAppMessageSignal(AppAllMsg _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UpdateDbus::sendFinishGetMsgSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
