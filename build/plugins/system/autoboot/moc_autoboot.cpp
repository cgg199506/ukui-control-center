/****************************************************************************
** Meta object code from reading C++ file 'autoboot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/system/autoboot/autoboot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoboot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoBoot_t {
    QByteArrayData data[12];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoBoot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoBoot_t qt_meta_stringdata_AutoBoot = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AutoBoot"
QT_MOC_LITERAL(1, 9, 19), // "checkbox_changed_cb"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "bname"
QT_MOC_LITERAL(4, 36, 14), // "keyChangedSlot"
QT_MOC_LITERAL(5, 51, 3), // "key"
QT_MOC_LITERAL(6, 55, 25), // "add_autoboot_realize_slot"
QT_MOC_LITERAL(7, 81, 4), // "path"
QT_MOC_LITERAL(8, 86, 4), // "name"
QT_MOC_LITERAL(9, 91, 4), // "exec"
QT_MOC_LITERAL(10, 96, 7), // "comment"
QT_MOC_LITERAL(11, 104, 4) // "icon"

    },
    "AutoBoot\0checkbox_changed_cb\0\0bname\0"
    "keyChangedSlot\0key\0add_autoboot_realize_slot\0"
    "path\0name\0exec\0comment\0icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoBoot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    5,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,

       0        // eod
};

void AutoBoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoBoot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkbox_changed_cb((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->keyChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->add_autoboot_realize_slot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutoBoot::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AutoBoot.data,
    qt_meta_data_AutoBoot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoBoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoBoot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoBoot.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoBoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
    0x03,  0x68,  'A',  'u',  't',  'o',  'B',  'o', 
    'o',  't', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(AutoBoot, AutoBoot)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
