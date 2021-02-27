/****************************************************************************
** Meta object code from reading C++ file 'auth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../checkUserPwdWithPAM/checkUserPwd/auth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Auth_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Auth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Auth_t qt_meta_stringdata_Auth = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Auth"
QT_MOC_LITERAL(1, 5, 10), // "showPrompt"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "prompt"
QT_MOC_LITERAL(4, 24, 16), // "Auth::PromptType"
QT_MOC_LITERAL(5, 41, 4), // "type"
QT_MOC_LITERAL(6, 46, 11), // "showMessage"
QT_MOC_LITERAL(7, 58, 7), // "message"
QT_MOC_LITERAL(8, 66, 17), // "Auth::MessageType"
QT_MOC_LITERAL(9, 84, 20), // "authenticateComplete"
QT_MOC_LITERAL(10, 105, 10), // "PromptType"
QT_MOC_LITERAL(11, 116, 18), // "PromptTypeQuestion"
QT_MOC_LITERAL(12, 135, 16), // "PromptTypeSecret"
QT_MOC_LITERAL(13, 152, 11), // "MessageType"
QT_MOC_LITERAL(14, 164, 15), // "MessageTypeInfo"
QT_MOC_LITERAL(15, 180, 16) // "MessageTypeError"

    },
    "Auth\0showPrompt\0\0prompt\0Auth::PromptType\0"
    "type\0showMessage\0message\0Auth::MessageType\0"
    "authenticateComplete\0PromptType\0"
    "PromptTypeQuestion\0PromptTypeSecret\0"
    "MessageType\0MessageTypeInfo\0"
    "MessageTypeError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Auth[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    2,   34,    2, 0x06 /* Public */,
       9,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    5,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   50,
      13,   13, 0x0,    2,   54,

 // enum data: key, value
      11, uint(Auth::PromptTypeQuestion),
      12, uint(Auth::PromptTypeSecret),
      14, uint(Auth::MessageTypeInfo),
      15, uint(Auth::MessageTypeError),

       0        // eod
};

void Auth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Auth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showPrompt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::PromptType(*)>(_a[2]))); break;
        case 1: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Auth::MessageType(*)>(_a[2]))); break;
        case 2: _t->authenticateComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Auth::*)(const QString & , Auth::PromptType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Auth::showPrompt)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Auth::*)(const QString & , Auth::MessageType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Auth::showMessage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Auth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Auth::authenticateComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Auth::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Auth.data,
    qt_meta_data_Auth,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Auth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Auth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Auth.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Auth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Auth::showPrompt(const QString & _t1, Auth::PromptType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Auth::showMessage(const QString & _t1, Auth::MessageType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Auth::authenticateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
