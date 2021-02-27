/****************************************************************************
** Meta object code from reading C++ file 'qmlscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/system/touchscreen/declarative/qmlscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMLScreen_t {
    QByteArrayData data[21];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMLScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMLScreen_t qt_meta_stringdata_QMLScreen = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QMLScreen"
QT_MOC_LITERAL(1, 10, 28), // "connectedOutputsCountChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "enabledOutputsCountChanged"
QT_MOC_LITERAL(4, 67, 18), // "outputScaleChanged"
QT_MOC_LITERAL(5, 86, 20), // "focusedOutputChanged"
QT_MOC_LITERAL(6, 107, 10), // "QMLOutput*"
QT_MOC_LITERAL(7, 118, 6), // "output"
QT_MOC_LITERAL(8, 125, 15), // "setActiveOutput"
QT_MOC_LITERAL(9, 141, 9), // "addOutput"
QT_MOC_LITERAL(10, 151, 18), // "KScreen::OutputPtr"
QT_MOC_LITERAL(11, 170, 12), // "removeOutput"
QT_MOC_LITERAL(12, 183, 8), // "outputId"
QT_MOC_LITERAL(13, 192, 22), // "outputConnectedChanged"
QT_MOC_LITERAL(14, 215, 20), // "outputEnabledChanged"
QT_MOC_LITERAL(15, 236, 21), // "outputPositionChanged"
QT_MOC_LITERAL(16, 258, 15), // "viewSizeChanged"
QT_MOC_LITERAL(17, 274, 13), // "maxScreenSize"
QT_MOC_LITERAL(18, 288, 21), // "connectedOutputsCount"
QT_MOC_LITERAL(19, 310, 19), // "enabledOutputsCount"
QT_MOC_LITERAL(20, 330, 11) // "outputScale"

    },
    "QMLScreen\0connectedOutputsCountChanged\0"
    "\0enabledOutputsCountChanged\0"
    "outputScaleChanged\0focusedOutputChanged\0"
    "QMLOutput*\0output\0setActiveOutput\0"
    "addOutput\0KScreen::OutputPtr\0removeOutput\0"
    "outputId\0outputConnectedChanged\0"
    "outputEnabledChanged\0outputPositionChanged\0"
    "viewSizeChanged\0maxScreenSize\0"
    "connectedOutputsCount\0enabledOutputsCount\0"
    "outputScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMLScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    7,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::QSize, 0x00095401,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Int, 0x00495001,
      20, QMetaType::Float, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void QMLScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMLScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedOutputsCountChanged(); break;
        case 1: _t->enabledOutputsCountChanged(); break;
        case 2: _t->outputScaleChanged(); break;
        case 3: _t->focusedOutputChanged((*reinterpret_cast< QMLOutput*(*)>(_a[1]))); break;
        case 4: _t->setActiveOutput(); break;
        case 5: _t->addOutput((*reinterpret_cast< const KScreen::OutputPtr(*)>(_a[1]))); break;
        case 6: _t->removeOutput((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->outputConnectedChanged(); break;
        case 8: _t->outputEnabledChanged(); break;
        case 9: _t->outputPositionChanged(); break;
        case 10: _t->viewSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMLOutput* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMLScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMLScreen::connectedOutputsCountChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QMLScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMLScreen::enabledOutputsCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QMLScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMLScreen::outputScaleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QMLScreen::*)(QMLOutput * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMLScreen::focusedOutputChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QMLScreen *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->maxScreenSize(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->connectedOutputsCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->enabledOutputsCount(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->outputScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QMLScreen::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_QMLScreen.data,
    qt_meta_data_QMLScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QMLScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMLScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMLScreen.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QMLScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMLScreen::connectedOutputsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMLScreen::enabledOutputsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMLScreen::outputScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QMLScreen::focusedOutputChanged(QMLOutput * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
