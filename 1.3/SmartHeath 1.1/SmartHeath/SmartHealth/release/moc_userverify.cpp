/****************************************************************************
** Meta object code from reading C++ file 'userverify.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../userverify.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userverify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserVerify_t {
    QByteArrayData data[21];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserVerify_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserVerify_t qt_meta_stringdata_UserVerify = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UserVerify"
QT_MOC_LITERAL(1, 11, 14), // "promised2Login"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "dotpromised2Login"
QT_MOC_LITERAL(4, 45, 15), // "registerSeccuss"
QT_MOC_LITERAL(5, 61, 12), // "registerFail"
QT_MOC_LITERAL(6, 74, 16), // "changePSDSeccuss"
QT_MOC_LITERAL(7, 91, 13), // "changePSDFail"
QT_MOC_LITERAL(8, 105, 14), // "AfterchangePSD"
QT_MOC_LITERAL(9, 120, 13), // "CantchangePSD"
QT_MOC_LITERAL(10, 134, 14), // "readSocketData"
QT_MOC_LITERAL(11, 149, 11), // "verifyLogin"
QT_MOC_LITERAL(12, 161, 5), // "uname"
QT_MOC_LITERAL(13, 167, 6), // "passwd"
QT_MOC_LITERAL(14, 174, 14), // "verifyRegister"
QT_MOC_LITERAL(15, 189, 15), // "const Customer*"
QT_MOC_LITERAL(16, 205, 6), // "person"
QT_MOC_LITERAL(17, 212, 22), // "verigyUserChangePasswd"
QT_MOC_LITERAL(18, 235, 2), // "id"
QT_MOC_LITERAL(19, 238, 9), // "telephone"
QT_MOC_LITERAL(20, 248, 16) // "ChangeUserPasswd"

    },
    "UserVerify\0promised2Login\0\0dotpromised2Login\0"
    "registerSeccuss\0registerFail\0"
    "changePSDSeccuss\0changePSDFail\0"
    "AfterchangePSD\0CantchangePSD\0"
    "readSocketData\0verifyLogin\0uname\0"
    "passwd\0verifyRegister\0const Customer*\0"
    "person\0verigyUserChangePasswd\0id\0"
    "telephone\0ChangeUserPasswd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserVerify[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   87,    2, 0x0a /* Public */,
      11,    2,   88,    2, 0x0a /* Public */,
      14,    1,   93,    2, 0x0a /* Public */,
      17,    2,   96,    2, 0x0a /* Public */,
      20,    3,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   18,   19,   13,

       0        // eod
};

void UserVerify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserVerify *_t = static_cast<UserVerify *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->promised2Login(); break;
        case 1: _t->dotpromised2Login(); break;
        case 2: _t->registerSeccuss(); break;
        case 3: _t->registerFail(); break;
        case 4: _t->changePSDSeccuss(); break;
        case 5: _t->changePSDFail(); break;
        case 6: _t->AfterchangePSD(); break;
        case 7: _t->CantchangePSD(); break;
        case 8: _t->readSocketData(); break;
        case 9: _t->verifyLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->verifyRegister((*reinterpret_cast< const Customer*(*)>(_a[1]))); break;
        case 11: _t->verigyUserChangePasswd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->ChangeUserPasswd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::promised2Login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::dotpromised2Login)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::registerSeccuss)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::registerFail)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::changePSDSeccuss)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::changePSDFail)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::AfterchangePSD)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (UserVerify::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserVerify::CantchangePSD)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject UserVerify::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserVerify.data,
      qt_meta_data_UserVerify,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserVerify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserVerify::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserVerify.stringdata0))
        return static_cast<void*>(const_cast< UserVerify*>(this));
    return QObject::qt_metacast(_clname);
}

int UserVerify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UserVerify::promised2Login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UserVerify::dotpromised2Login()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void UserVerify::registerSeccuss()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void UserVerify::registerFail()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void UserVerify::changePSDSeccuss()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void UserVerify::changePSDFail()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void UserVerify::AfterchangePSD()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void UserVerify::CantchangePSD()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
