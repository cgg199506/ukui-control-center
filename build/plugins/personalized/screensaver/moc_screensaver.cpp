/****************************************************************************
** Meta object code from reading C++ file 'screensaver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/personalized/screensaver/screensaver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screensaver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreviewWidget_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewWidget_t qt_meta_stringdata_PreviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 13) // "PreviewWidget"

    },
    "PreviewWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PreviewWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PreviewWidget.data,
    qt_meta_data_PreviewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Screensaver_t {
    QByteArrayData data[13];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Screensaver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Screensaver_t qt_meta_stringdata_Screensaver = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Screensaver"
QT_MOC_LITERAL(1, 12, 12), // "kill_signals"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "themesComboxChanged"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 21), // "combobox_changed_slot"
QT_MOC_LITERAL(6, 74, 22), // "activebtn_changed_slot"
QT_MOC_LITERAL(7, 97, 6), // "status"
QT_MOC_LITERAL(8, 104, 20), // "lockbtn_changed_slot"
QT_MOC_LITERAL(9, 125, 20), // "slider_released_slot"
QT_MOC_LITERAL(10, 146, 24), // "kill_screensaver_preview"
QT_MOC_LITERAL(11, 171, 14), // "keyChangedSlot"
QT_MOC_LITERAL(12, 186, 3) // "key"

    },
    "Screensaver\0kill_signals\0\0themesComboxChanged\0"
    "index\0combobox_changed_slot\0"
    "activebtn_changed_slot\0status\0"
    "lockbtn_changed_slot\0slider_released_slot\0"
    "kill_screensaver_preview\0keyChangedSlot\0"
    "key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Screensaver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void Screensaver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Screensaver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->kill_signals(); break;
        case 1: _t->themesComboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->combobox_changed_slot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activebtn_changed_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->lockbtn_changed_slot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slider_released_slot(); break;
        case 6: _t->kill_screensaver_preview(); break;
        case 7: _t->keyChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Screensaver::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Screensaver::kill_signals)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Screensaver::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Screensaver.data,
    qt_meta_data_Screensaver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Screensaver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Screensaver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Screensaver.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int Screensaver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Screensaver::kill_signals()
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
    0x03,  0x6b,  'S',  'c',  'r',  'e',  'e',  'n', 
    's',  'a',  'v',  'e',  'r', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Screensaver, Screensaver)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
