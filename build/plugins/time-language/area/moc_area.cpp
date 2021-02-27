/****************************************************************************
** Meta object code from reading C++ file 'area.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/time-language/area/area.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'area.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Area_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Area_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Area_t qt_meta_stringdata_Area = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Area"
QT_MOC_LITERAL(1, 5, 14), // "initFormatData"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 21), // "run_external_app_slot"
QT_MOC_LITERAL(4, 43, 20), // "change_language_slot"
QT_MOC_LITERAL(5, 64, 16), // "change_area_slot"
QT_MOC_LITERAL(6, 81, 20), // "datetime_update_slot"
QT_MOC_LITERAL(7, 102, 16), // "add_lan_btn_slot"
QT_MOC_LITERAL(8, 119, 15), // "changeform_slot"
QT_MOC_LITERAL(9, 135, 16), // "cloudChangedSlot"
QT_MOC_LITERAL(10, 152, 3) // "key"

    },
    "Area\0initFormatData\0\0run_external_app_slot\0"
    "change_language_slot\0change_area_slot\0"
    "datetime_update_slot\0add_lan_btn_slot\0"
    "changeform_slot\0cloudChangedSlot\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Area[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       5,    1,   59,    2, 0x08 /* Private */,
       6,    0,   62,    2, 0x08 /* Private */,
       7,    0,   63,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void Area::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Area *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initFormatData(); break;
        case 1: _t->run_external_app_slot(); break;
        case 2: _t->change_language_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->change_area_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->datetime_update_slot(); break;
        case 5: _t->add_lan_btn_slot(); break;
        case 6: _t->changeform_slot(); break;
        case 7: _t->cloudChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Area::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Area.data,
    qt_meta_data_Area,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Area::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Area::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Area.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int Area::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x18,  'o',  'r',  'g',  '.',  'k', 
    'y',  'c',  'c',  '.',  'C',  'o',  'm',  'm', 
    'o',  'n',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e', 
    // "className"
    0x03,  0x64,  'A',  'r',  'e',  'a', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Area, Area)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
