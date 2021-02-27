/****************************************************************************
** Meta object code from reading C++ file 'colordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/personalized/wallpaper/colordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorDialog_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorDialog_t qt_meta_stringdata_ColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ColorDialog"
QT_MOC_LITERAL(1, 12, 12), // "colorChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "checkedChanged"
QT_MOC_LITERAL(4, 41, 13), // "colorSelected"
QT_MOC_LITERAL(5, 55, 17), // "updateWidgetsSlot"
QT_MOC_LITERAL(6, 73, 10), // "setRgbSlot"
QT_MOC_LITERAL(7, 84, 10), // "SetHsvSlot"
QT_MOC_LITERAL(8, 95, 6) // "okSlot"

    },
    "ColorDialog\0colorChanged\0\0checkedChanged\0"
    "colorSelected\0updateWidgetsSlot\0"
    "setRgbSlot\0SetHsvSlot\0okSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::Char,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->checkedChanged((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 2: _t->colorSelected((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->updateWidgetsSlot(); break;
        case 4: _t->setRgbSlot(); break;
        case 5: _t->SetHsvSlot(); break;
        case 6: _t->okSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorDialog::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorDialog::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorDialog::*)(char );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorDialog::checkedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorDialog::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorDialog::colorSelected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColorDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ColorDialog.data,
    qt_meta_data_ColorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ColorDialog::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ColorDialog::checkedChanged(char _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ColorDialog::colorSelected(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
