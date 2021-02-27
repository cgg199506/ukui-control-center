/****************************************************************************
** Meta object code from reading C++ file 'poplist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/time-language/datetime/worldMap/poplist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poplist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PopList_t {
    QByteArrayData data[12];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopList_t qt_meta_stringdata_PopList = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PopList"
QT_MOC_LITERAL(1, 8, 8), // "listHide"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 11), // "listAactive"
QT_MOC_LITERAL(4, 30, 5), // "index"
QT_MOC_LITERAL(5, 36, 12), // "showPopLists"
QT_MOC_LITERAL(6, 49, 3), // "pos"
QT_MOC_LITERAL(7, 53, 13), // "setStringList"
QT_MOC_LITERAL(8, 67, 7), // "strings"
QT_MOC_LITERAL(9, 75, 14), // "listActiveSlot"
QT_MOC_LITERAL(10, 90, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 102, 5) // "idnex"

    },
    "PopList\0listHide\0\0listAactive\0index\0"
    "showPopLists\0pos\0setStringList\0strings\0"
    "listActiveSlot\0QModelIndex\0idnex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void PopList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PopList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listHide(); break;
        case 1: _t->listAactive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showPopLists((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->setStringList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->listActiveSlot((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PopList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PopList::listHide)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PopList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PopList::listAactive)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PopList::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_PopList.data,
    qt_meta_data_PopList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PopList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PopList.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PopList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PopList::listHide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PopList::listAactive(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
