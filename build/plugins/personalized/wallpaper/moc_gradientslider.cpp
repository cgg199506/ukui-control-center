/****************************************************************************
** Meta object code from reading C++ file 'gradientslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/personalized/wallpaper/gradientslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradientslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GradientSlider_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientSlider_t qt_meta_stringdata_GradientSlider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GradientSlider"
QT_MOC_LITERAL(1, 15, 10), // "background"
QT_MOC_LITERAL(2, 26, 6), // "colors"
QT_MOC_LITERAL(3, 33, 15), // "QVector<QColor>"
QT_MOC_LITERAL(4, 49, 8), // "gradient"
QT_MOC_LITERAL(5, 58, 15), // "QLinearGradient"
QT_MOC_LITERAL(6, 74, 10), // "firstColor"
QT_MOC_LITERAL(7, 85, 9) // "lastColor"

    },
    "GradientSlider\0background\0colors\0"
    "QVector<QColor>\0gradient\0QLinearGradient\0"
    "firstColor\0lastColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QBrush, 0x00095103,
       2, 0x80000000 | 3, 0x0009510b,
       4, 0x80000000 | 5, 0x0008510b,
       6, QMetaType::QColor, 0x00085103,
       7, QMetaType::QColor, 0x00085103,

       0        // eod
};

void GradientSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QColor> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GradientSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->background(); break;
        case 1: *reinterpret_cast< QVector<QColor>*>(_v) = _t->colors(); break;
        case 2: *reinterpret_cast< QLinearGradient*>(_v) = _t->gradient(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->firstColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->lastColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GradientSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackground(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setColors(*reinterpret_cast< QVector<QColor>*>(_v)); break;
        case 2: _t->setGradient(*reinterpret_cast< QLinearGradient*>(_v)); break;
        case 3: _t->setFirstColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setLastColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject GradientSlider::staticMetaObject = { {
    &QSlider::staticMetaObject,
    qt_meta_stringdata_GradientSlider.data,
    qt_meta_data_GradientSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GradientSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GradientSlider.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int GradientSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
