/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/account/networkaccount/maindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainDialog_t {
    QByteArrayData data[26];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainDialog_t qt_meta_stringdata_MainDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainDialog"
QT_MOC_LITERAL(1, 11, 14), // "on_close_event"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "on_login_failed"
QT_MOC_LITERAL(4, 43, 16), // "on_login_success"
QT_MOC_LITERAL(5, 60, 13), // "on_allow_send"
QT_MOC_LITERAL(6, 74, 7), // "dologin"
QT_MOC_LITERAL(7, 82, 8), // "username"
QT_MOC_LITERAL(8, 91, 3), // "pwd"
QT_MOC_LITERAL(9, 95, 20), // "dogetmcode_phone_log"
QT_MOC_LITERAL(10, 116, 9), // "phonenumb"
QT_MOC_LITERAL(11, 126, 12), // "dophonelogin"
QT_MOC_LITERAL(12, 139, 5), // "phone"
QT_MOC_LITERAL(13, 145, 5), // "mCode"
QT_MOC_LITERAL(14, 151, 12), // "on_login_btn"
QT_MOC_LITERAL(15, 164, 11), // "on_pass_btn"
QT_MOC_LITERAL(16, 176, 10), // "on_reg_btn"
QT_MOC_LITERAL(17, 187, 17), // "on_login_finished"
QT_MOC_LITERAL(18, 205, 3), // "ret"
QT_MOC_LITERAL(19, 209, 21), // "on_get_mcode_by_phone"
QT_MOC_LITERAL(20, 231, 16), // "on_timer_timeout"
QT_MOC_LITERAL(21, 248, 16), // "on_send_code_log"
QT_MOC_LITERAL(22, 265, 8), // "on_close"
QT_MOC_LITERAL(23, 274, 12), // "cleanconfirm"
QT_MOC_LITERAL(24, 287, 3), // "str"
QT_MOC_LITERAL(25, 291, 8) // "set_back"

    },
    "MainDialog\0on_close_event\0\0on_login_failed\0"
    "on_login_success\0on_allow_send\0dologin\0"
    "username\0pwd\0dogetmcode_phone_log\0"
    "phonenumb\0dophonelogin\0phone\0mCode\0"
    "on_login_btn\0on_pass_btn\0on_reg_btn\0"
    "on_login_finished\0ret\0on_get_mcode_by_phone\0"
    "on_timer_timeout\0on_send_code_log\0"
    "on_close\0cleanconfirm\0str\0set_back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    2,  103,    2, 0x06 /* Public */,
       9,    1,  108,    2, 0x06 /* Public */,
      11,    2,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    1,  119,    2, 0x0a /* Public */,
      19,    1,  122,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      21,    0,  126,    2, 0x0a /* Public */,
      22,    0,  127,    2, 0x0a /* Public */,
      23,    1,  128,    2, 0x0a /* Public */,
      25,    0,  131,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,

       0        // eod
};

void MainDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_event(); break;
        case 1: _t->on_login_failed(); break;
        case 2: _t->on_login_success(); break;
        case 3: _t->on_allow_send(); break;
        case 4: _t->dologin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->dogetmcode_phone_log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->dophonelogin((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->on_login_btn(); break;
        case 8: _t->on_pass_btn(); break;
        case 9: _t->on_reg_btn(); break;
        case 10: _t->on_login_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_get_mcode_by_phone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_timer_timeout(); break;
        case 13: _t->on_send_code_log(); break;
        case 14: _t->on_close(); break;
        case 15: _t->cleanconfirm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->set_back(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::on_close_event)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::on_login_failed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::on_login_success)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::on_allow_send)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainDialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::dologin)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::dogetmcode_phone_log)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainDialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::dophonelogin)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_MainDialog.data,
    qt_meta_data_MainDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainDialog::on_close_event()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainDialog::on_login_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainDialog::on_login_success()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainDialog::on_allow_send()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainDialog::dologin(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainDialog::dogetmcode_phone_log(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainDialog::dophonelogin(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
