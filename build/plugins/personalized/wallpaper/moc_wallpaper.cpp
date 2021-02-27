/****************************************************************************
** Meta object code from reading C++ file 'wallpaper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/personalized/wallpaper/wallpaper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wallpaper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Wallpaper_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wallpaper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wallpaper_t qt_meta_stringdata_Wallpaper = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Wallpaper"
QT_MOC_LITERAL(1, 10, 25), // "resetDefaultWallpaperSlot"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 20), // "wpOptionsChangedSlot"
QT_MOC_LITERAL(4, 58, 2), // "op"
QT_MOC_LITERAL(5, 61, 17), // "colorSelectedSlot"
QT_MOC_LITERAL(6, 79, 5), // "color"
QT_MOC_LITERAL(7, 85, 20), // "add_custom_wallpaper"
QT_MOC_LITERAL(8, 106, 13) // "del_wallpaper"

    },
    "Wallpaper\0resetDefaultWallpaperSlot\0"
    "\0wpOptionsChangedSlot\0op\0colorSelectedSlot\0"
    "color\0add_custom_wallpaper\0del_wallpaper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wallpaper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    0,   46,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Wallpaper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Wallpaper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetDefaultWallpaperSlot(); break;
        case 1: _t->wpOptionsChangedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->colorSelectedSlot((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->add_custom_wallpaper(); break;
        case 4: _t->del_wallpaper(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Wallpaper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Wallpaper.data,
    qt_meta_data_Wallpaper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Wallpaper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wallpaper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Wallpaper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int Wallpaper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x69,  'W',  'a',  'l',  'l',  'p',  'a', 
    'p',  'e',  'r', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Wallpaper, Wallpaper)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
