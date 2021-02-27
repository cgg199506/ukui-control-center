/****************************************************************************
** Meta object code from reading C++ file 'defaultapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/system/defaultapp/defaultapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defaultapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DefaultApp_t {
    QByteArrayData data[14];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DefaultApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DefaultApp_t qt_meta_stringdata_DefaultApp = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DefaultApp"
QT_MOC_LITERAL(1, 11, 11), // "appInitDone"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "index"
QT_MOC_LITERAL(4, 30, 4), // "type"
QT_MOC_LITERAL(5, 35, 26), // "browserComBoBox_changed_cb"
QT_MOC_LITERAL(6, 62, 23), // "mailComBoBox_changed_cb"
QT_MOC_LITERAL(7, 86, 24), // "imageComBoBox_changed_cb"
QT_MOC_LITERAL(8, 111, 24), // "audioComBoBox_changed_cb"
QT_MOC_LITERAL(9, 136, 24), // "videoComBoBox_changed_cb"
QT_MOC_LITERAL(10, 161, 23), // "textComBoBox_changed_cb"
QT_MOC_LITERAL(11, 185, 14), // "keyChangedSlot"
QT_MOC_LITERAL(12, 200, 3), // "key"
QT_MOC_LITERAL(13, 204, 15) // "resetDefaultApp"

    },
    "DefaultApp\0appInitDone\0\0index\0type\0"
    "browserComBoBox_changed_cb\0"
    "mailComBoBox_changed_cb\0"
    "imageComBoBox_changed_cb\0"
    "audioComBoBox_changed_cb\0"
    "videoComBoBox_changed_cb\0"
    "textComBoBox_changed_cb\0keyChangedSlot\0"
    "key\0resetDefaultApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DefaultApp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   64,    2, 0x0a /* Public */,
       6,    1,   67,    2, 0x0a /* Public */,
       7,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void DefaultApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DefaultApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appInitDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->browserComBoBox_changed_cb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mailComBoBox_changed_cb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->imageComBoBox_changed_cb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->audioComBoBox_changed_cb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->videoComBoBox_changed_cb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->textComBoBox_changed_cb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->keyChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->resetDefaultApp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DefaultApp::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DefaultApp::appInitDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DefaultApp::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DefaultApp.data,
    qt_meta_data_DefaultApp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DefaultApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefaultApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultApp.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int DefaultApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DefaultApp::appInitDone(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
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
    0x03,  0x6a,  'D',  'e',  'f',  'a',  'u',  'l', 
    't',  'A',  'p',  'p', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(DefaultApp, DefaultApp)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
