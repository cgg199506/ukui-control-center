/****************************************************************************
** Meta object code from reading C++ file 'datetime.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/time-language/datetime/datetime.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datetime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DateTime_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DateTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DateTime_t qt_meta_stringdata_DateTime = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DateTime"
QT_MOC_LITERAL(1, 9, 7), // "changed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 20), // "datetime_update_slot"
QT_MOC_LITERAL(4, 39, 15), // "changetime_slot"
QT_MOC_LITERAL(5, 55, 15), // "changezone_slot"
QT_MOC_LITERAL(6, 71, 24), // "time_format_clicked_slot"
QT_MOC_LITERAL(7, 96, 23), // "rsync_with_network_slot"
QT_MOC_LITERAL(8, 120, 12), // "showendLabel"
QT_MOC_LITERAL(9, 133, 11), // "hidendLabel"
QT_MOC_LITERAL(10, 145, 14), // "keyChangedSlot"
QT_MOC_LITERAL(11, 160, 3) // "key"

    },
    "DateTime\0changed\0\0datetime_update_slot\0"
    "changetime_slot\0changezone_slot\0"
    "time_format_clicked_slot\0"
    "rsync_with_network_slot\0showendLabel\0"
    "hidendLabel\0keyChangedSlot\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DateTime[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    2,   71,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void DateTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DateTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->datetime_update_slot(); break;
        case 2: _t->changetime_slot(); break;
        case 3: _t->changezone_slot(); break;
        case 4: _t->changezone_slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->time_format_clicked_slot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->rsync_with_network_slot(); break;
        case 7: _t->showendLabel(); break;
        case 8: _t->hidendLabel(); break;
        case 9: _t->keyChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DateTime::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DateTime::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DateTime::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DateTime.data,
    qt_meta_data_DateTime,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DateTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DateTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DateTime.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int DateTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DateTime::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
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
    0x03,  0x68,  'D',  'a',  't',  'e',  'T',  'i', 
    'm',  'e', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DateTime, DateTime)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
