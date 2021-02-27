/****************************************************************************
** Meta object code from reading C++ file 'bluetoothmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/devices/bluetooth/bluetoothmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BlueToothMain_t {
    QByteArrayData data[22];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlueToothMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlueToothMain_t qt_meta_stringdata_BlueToothMain = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BlueToothMain"
QT_MOC_LITERAL(1, 14, 20), // "adapter_name_changed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "name"
QT_MOC_LITERAL(4, 41, 22), // "onClick_Open_Bluetooth"
QT_MOC_LITERAL(5, 64, 17), // "serviceDiscovered"
QT_MOC_LITERAL(6, 82, 18), // "BluezQt::DevicePtr"
QT_MOC_LITERAL(7, 101, 20), // "receiveConnectsignal"
QT_MOC_LITERAL(8, 122, 23), // "receiveDisConnectSignal"
QT_MOC_LITERAL(9, 146, 19), // "receiveRemoveSignal"
QT_MOC_LITERAL(10, 166, 23), // "Refresh_load_Label_icon"
QT_MOC_LITERAL(11, 190, 16), // "set_tray_visible"
QT_MOC_LITERAL(12, 207, 19), // "change_adapter_name"
QT_MOC_LITERAL(13, 227, 20), // "change_device_parent"
QT_MOC_LITERAL(14, 248, 7), // "address"
QT_MOC_LITERAL(15, 256, 21), // "adapterPoweredChanged"
QT_MOC_LITERAL(16, 278, 5), // "value"
QT_MOC_LITERAL(17, 284, 20), // "adapterComboxChanged"
QT_MOC_LITERAL(18, 305, 1), // "i"
QT_MOC_LITERAL(19, 307, 18), // "adapterNameChanged"
QT_MOC_LITERAL(20, 326, 19), // "adapterDeviceRemove"
QT_MOC_LITERAL(21, 346, 3) // "ptr"

    },
    "BlueToothMain\0adapter_name_changed\0\0"
    "name\0onClick_Open_Bluetooth\0"
    "serviceDiscovered\0BluezQt::DevicePtr\0"
    "receiveConnectsignal\0receiveDisConnectSignal\0"
    "receiveRemoveSignal\0Refresh_load_Label_icon\0"
    "set_tray_visible\0change_adapter_name\0"
    "change_device_parent\0address\0"
    "adapterPoweredChanged\0value\0"
    "adapterComboxChanged\0i\0adapterNameChanged\0"
    "adapterDeviceRemove\0ptr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlueToothMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   87,    2, 0x08 /* Private */,
       5,    1,   90,    2, 0x08 /* Private */,
       7,    1,   93,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      12,    1,  106,    2, 0x08 /* Private */,
      13,    1,  109,    2, 0x08 /* Private */,
      15,    1,  112,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      20,    1,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,   21,

       0        // eod
};

void BlueToothMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlueToothMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adapter_name_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onClick_Open_Bluetooth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->serviceDiscovered((*reinterpret_cast< BluezQt::DevicePtr(*)>(_a[1]))); break;
        case 3: _t->receiveConnectsignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receiveDisConnectSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveRemoveSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->Refresh_load_Label_icon(); break;
        case 7: _t->set_tray_visible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->change_adapter_name((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->change_device_parent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->adapterPoweredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->adapterComboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->adapterNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->adapterDeviceRemove((*reinterpret_cast< BluezQt::DevicePtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BlueToothMain::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlueToothMain::adapter_name_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BlueToothMain::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BlueToothMain.data,
    qt_meta_data_BlueToothMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlueToothMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlueToothMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlueToothMain.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BlueToothMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BlueToothMain::adapter_name_changed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
