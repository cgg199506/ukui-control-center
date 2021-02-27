/****************************************************************************
** Meta object code from reading C++ file 'desktop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/personalized/desktop/desktop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'desktop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Desktop_t {
    QByteArrayData data[15];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Desktop_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Desktop_t qt_meta_stringdata_Desktop = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Desktop"
QT_MOC_LITERAL(1, 8, 14), // "removeTrayItem"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "itemName"
QT_MOC_LITERAL(4, 33, 11), // "addTrayItem"
QT_MOC_LITERAL(5, 45, 11), // "QGSettings*"
QT_MOC_LITERAL(6, 57, 12), // "trayGSetting"
QT_MOC_LITERAL(7, 70, 13), // "desktopToName"
QT_MOC_LITERAL(8, 84, 11), // "desktopfile"
QT_MOC_LITERAL(9, 96, 13), // "desktopToIcon"
QT_MOC_LITERAL(10, 110, 13), // "readOuputSlot"
QT_MOC_LITERAL(11, 124, 19), // "QMap<QString,QIcon>"
QT_MOC_LITERAL(12, 144, 13), // "readErrorSlot"
QT_MOC_LITERAL(13, 158, 15), // "slotCloudAccout"
QT_MOC_LITERAL(14, 174, 3) // "key"

    },
    "Desktop\0removeTrayItem\0\0itemName\0"
    "addTrayItem\0QGSettings*\0trayGSetting\0"
    "desktopToName\0desktopfile\0desktopToIcon\0"
    "readOuputSlot\0QMap<QString,QIcon>\0"
    "readErrorSlot\0slotCloudAccout\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Desktop[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::QString, QMetaType::QString,    8,
    QMetaType::QIcon, QMetaType::QString,    8,
    0x80000000 | 11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void Desktop::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Desktop *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeTrayItem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->addTrayItem((*reinterpret_cast< QGSettings*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->desktopToName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QIcon _r = _t->desktopToIcon((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = std::move(_r); }  break;
        case 4: { QMap<QString,QIcon> _r = _t->readOuputSlot();
            if (_a[0]) *reinterpret_cast< QMap<QString,QIcon>*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->readErrorSlot(); break;
        case 6: _t->slotCloudAccout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Desktop::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Desktop.data,
    qt_meta_data_Desktop,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Desktop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Desktop::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Desktop.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "CommonInterface"))
        return static_cast< CommonInterface*>(this);
    if (!strcmp(_clname, "org.kycc.CommonInterface"))
        return static_cast< CommonInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int Desktop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    0x03,  0x67,  'D',  'e',  's',  'k',  't',  'o', 
    'p', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(Desktop, Desktop)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
