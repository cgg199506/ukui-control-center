/****************************************************************************
** Meta object code from reading C++ file 'x11_helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/devices/keyboard/preview/x11_helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'x11_helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XEventNotifier_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XEventNotifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XEventNotifier_t qt_meta_stringdata_XEventNotifier = {
    {
QT_MOC_LITERAL(0, 0, 14), // "XEventNotifier"
QT_MOC_LITERAL(1, 15, 13), // "layoutChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16) // "layoutMapChanged"

    },
    "XEventNotifier\0layoutChanged\0\0"
    "layoutMapChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XEventNotifier[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XEventNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XEventNotifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutChanged(); break;
        case 1: _t->layoutMapChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XEventNotifier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XEventNotifier::layoutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XEventNotifier::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XEventNotifier::layoutMapChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject XEventNotifier::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_XEventNotifier.data,
    qt_meta_data_XEventNotifier,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XEventNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XEventNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XEventNotifier.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(this);
    return QObject::qt_metacast(_clname);
}

int XEventNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void XEventNotifier::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XEventNotifier::layoutMapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
