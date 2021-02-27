/****************************************************************************
** Meta object code from reading C++ file 'deviceinfoitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/devices/bluetooth/deviceinfoitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceinfoitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceInfoItem_t {
    QByteArrayData data[15];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceInfoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceInfoItem_t qt_meta_stringdata_DeviceInfoItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DeviceInfoItem"
QT_MOC_LITERAL(1, 15, 17), // "sendConnectDevice"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 27), // "sendDisconnectDeviceAddress"
QT_MOC_LITERAL(4, 62, 23), // "sendDeleteDeviceAddress"
QT_MOC_LITERAL(5, 86, 22), // "send_this_item_is_pair"
QT_MOC_LITERAL(6, 109, 17), // "sendPairedAddress"
QT_MOC_LITERAL(7, 127, 19), // "onClick_Connect_Btn"
QT_MOC_LITERAL(8, 147, 22), // "onClick_Disconnect_Btn"
QT_MOC_LITERAL(9, 170, 18), // "onClick_Delete_Btn"
QT_MOC_LITERAL(10, 189, 18), // "updateDeviceStatus"
QT_MOC_LITERAL(11, 208, 13), // "DEVICE_STATUS"
QT_MOC_LITERAL(12, 222, 6), // "status"
QT_MOC_LITERAL(13, 229, 16), // "GSettingsChanges"
QT_MOC_LITERAL(14, 246, 3) // "key"

    },
    "DeviceInfoItem\0sendConnectDevice\0\0"
    "sendDisconnectDeviceAddress\0"
    "sendDeleteDeviceAddress\0send_this_item_is_pair\0"
    "sendPairedAddress\0onClick_Connect_Btn\0"
    "onClick_Disconnect_Btn\0onClick_Delete_Btn\0"
    "updateDeviceStatus\0DEVICE_STATUS\0"
    "status\0GSettingsChanges\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceInfoItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   82,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
       9,    1,   88,    2, 0x08 /* Private */,
      10,    1,   91,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x28 /* Private | MethodCloned */,
      13,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void DeviceInfoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceInfoItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendConnectDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendDisconnectDeviceAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendDeleteDeviceAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->send_this_item_is_pair(); break;
        case 4: _t->sendPairedAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onClick_Connect_Btn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onClick_Disconnect_Btn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onClick_Delete_Btn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateDeviceStatus((*reinterpret_cast< DEVICE_STATUS(*)>(_a[1]))); break;
        case 9: _t->updateDeviceStatus(); break;
        case 10: _t->GSettingsChanges((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceInfoItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfoItem::sendConnectDevice)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceInfoItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfoItem::sendDisconnectDeviceAddress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceInfoItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfoItem::sendDeleteDeviceAddress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceInfoItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfoItem::send_this_item_is_pair)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceInfoItem::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInfoItem::sendPairedAddress)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceInfoItem::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DeviceInfoItem.data,
    qt_meta_data_DeviceInfoItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceInfoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInfoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceInfoItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DeviceInfoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void DeviceInfoItem::sendConnectDevice(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceInfoItem::sendDisconnectDeviceAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceInfoItem::sendDeleteDeviceAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceInfoItem::send_this_item_is_pair()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DeviceInfoItem::sendPairedAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
