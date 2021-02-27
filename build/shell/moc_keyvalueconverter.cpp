/****************************************************************************
** Meta object code from reading C++ file 'keyvalueconverter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shell/utils/keyvalueconverter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyvalueconverter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KeyValueConverter_t {
    QByteArrayData data[11];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyValueConverter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyValueConverter_t qt_meta_stringdata_KeyValueConverter = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KeyValueConverter"
QT_MOC_LITERAL(1, 18, 7), // "FunType"
QT_MOC_LITERAL(2, 26, 6), // "SYSTEM"
QT_MOC_LITERAL(3, 33, 7), // "DEVICES"
QT_MOC_LITERAL(4, 41, 12), // "PERSONALIZED"
QT_MOC_LITERAL(5, 54, 7), // "NETWORK"
QT_MOC_LITERAL(6, 62, 7), // "ACCOUNT"
QT_MOC_LITERAL(7, 70, 8), // "DATETIME"
QT_MOC_LITERAL(8, 79, 6), // "UPDATE"
QT_MOC_LITERAL(9, 86, 14), // "NOTICEANDTASKS"
QT_MOC_LITERAL(10, 101, 12) // "TOTALMODULES"

    },
    "KeyValueConverter\0FunType\0SYSTEM\0"
    "DEVICES\0PERSONALIZED\0NETWORK\0ACCOUNT\0"
    "DATETIME\0UPDATE\0NOTICEANDTASKS\0"
    "TOTALMODULES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyValueConverter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    9,   19,

 // enum data: key, value
       2, uint(KeyValueConverter::SYSTEM),
       3, uint(KeyValueConverter::DEVICES),
       4, uint(KeyValueConverter::PERSONALIZED),
       5, uint(KeyValueConverter::NETWORK),
       6, uint(KeyValueConverter::ACCOUNT),
       7, uint(KeyValueConverter::DATETIME),
       8, uint(KeyValueConverter::UPDATE),
       9, uint(KeyValueConverter::NOTICEANDTASKS),
      10, uint(KeyValueConverter::TOTALMODULES),

       0        // eod
};

void KeyValueConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject KeyValueConverter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_KeyValueConverter.data,
    qt_meta_data_KeyValueConverter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KeyValueConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyValueConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KeyValueConverter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KeyValueConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
