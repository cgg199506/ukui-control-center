/****************************************************************************
** Meta object code from reading C++ file 'm_updatelog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/security-updates/upgrade/src/m_updatelog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'm_updatelog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_m_updatelog_t {
    QByteArrayData data[18];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_m_updatelog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_m_updatelog_t qt_meta_stringdata_m_updatelog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "m_updatelog"
QT_MOC_LITERAL(1, 12, 16), // "historyUpdateNow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "str1"
QT_MOC_LITERAL(4, 35, 4), // "str2"
QT_MOC_LITERAL(5, 40, 6), // "initUI"
QT_MOC_LITERAL(6, 47, 13), // "initGsettings"
QT_MOC_LITERAL(7, 61, 18), // "dynamicLoadingInit"
QT_MOC_LITERAL(8, 80, 14), // "dynamicLoading"
QT_MOC_LITERAL(9, 95, 1), // "i"
QT_MOC_LITERAL(10, 97, 9), // "updatesql"
QT_MOC_LITERAL(11, 107, 5), // "start"
QT_MOC_LITERAL(12, 113, 3), // "num"
QT_MOC_LITERAL(13, 117, 5), // "intop"
QT_MOC_LITERAL(14, 123, 11), // "defaultItem"
QT_MOC_LITERAL(15, 135, 25), // "translationVirtualPackage"
QT_MOC_LITERAL(16, 161, 3), // "str"
QT_MOC_LITERAL(17, 165, 26) // "changeListWidgetItemHeight"

    },
    "m_updatelog\0historyUpdateNow\0\0str1\0"
    "str2\0initUI\0initGsettings\0dynamicLoadingInit\0"
    "dynamicLoading\0i\0updatesql\0start\0num\0"
    "intop\0defaultItem\0translationVirtualPackage\0"
    "str\0changeListWidgetItemHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_m_updatelog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x0a /* Public */,
       5,    0,   79,    2, 0x08 /* Private */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    1,   82,    2, 0x08 /* Private */,
      10,    3,   85,    2, 0x08 /* Private */,
      10,    2,   92,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   97,    2, 0x28 /* Private | MethodCloned */,
      10,    0,  100,    2, 0x28 /* Private | MethodCloned */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   11,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void m_updatelog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<m_updatelog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->historyUpdateNow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->initUI(); break;
        case 2: _t->initGsettings(); break;
        case 3: _t->dynamicLoadingInit(); break;
        case 4: _t->dynamicLoading((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updatesql((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->updatesql((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->updatesql((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->updatesql(); break;
        case 9: _t->defaultItem(); break;
        case 10: { QString _r = _t->translationVirtualPackage((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->changeListWidgetItemHeight(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject m_updatelog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_m_updatelog.data,
    qt_meta_data_m_updatelog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *m_updatelog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *m_updatelog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_m_updatelog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int m_updatelog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
