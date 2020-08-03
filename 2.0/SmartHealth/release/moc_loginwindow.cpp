/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loginwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginWindow_t {
    QByteArrayData data[18];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginWindow_t qt_meta_stringdata_LoginWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginWindow"
QT_MOC_LITERAL(1, 12, 11), // "verifyLogin"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "uname"
QT_MOC_LITERAL(4, 31, 6), // "passwd"
QT_MOC_LITERAL(5, 38, 16), // "fromRegisterBack"
QT_MOC_LITERAL(6, 55, 8), // "showChat"
QT_MOC_LITERAL(7, 64, 14), // "fromPasswdBack"
QT_MOC_LITERAL(8, 79, 18), // "on_Login_2_clicked"
QT_MOC_LITERAL(9, 98, 16), // "on_Login_clicked"
QT_MOC_LITERAL(10, 115, 12), // "fromFuncBack"
QT_MOC_LITERAL(11, 128, 14), // "fromFuncLogout"
QT_MOC_LITERAL(12, 143, 13), // "success2Login"
QT_MOC_LITERAL(13, 157, 10), // "fail2Login"
QT_MOC_LITERAL(14, 168, 20), // "on_passwdBtn_clicked"
QT_MOC_LITERAL(15, 189, 11), // "docGotoChat"
QT_MOC_LITERAL(16, 201, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(17, 233, 5) // "index"

    },
    "LoginWindow\0verifyLogin\0\0uname\0passwd\0"
    "fromRegisterBack\0showChat\0fromPasswdBack\0"
    "on_Login_2_clicked\0on_Login_clicked\0"
    "fromFuncBack\0fromFuncLogout\0success2Login\0"
    "fail2Login\0on_passwdBtn_clicked\0"
    "docGotoChat\0on_comboBox_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   84,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void LoginWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginWindow *_t = static_cast<LoginWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->verifyLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->fromRegisterBack(); break;
        case 2: _t->showChat(); break;
        case 3: _t->fromPasswdBack(); break;
        case 4: _t->on_Login_2_clicked(); break;
        case 5: _t->on_Login_clicked(); break;
        case 6: _t->fromFuncBack(); break;
        case 7: _t->fromFuncLogout(); break;
        case 8: _t->success2Login(); break;
        case 9: _t->fail2Login(); break;
        case 10: _t->on_passwdBtn_clicked(); break;
        case 11: _t->docGotoChat(); break;
        case 12: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginWindow::*_t)(const QString , const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginWindow::verifyLogin)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LoginWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LoginWindow.data,
      qt_meta_data_LoginWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginWindow.stringdata0))
        return static_cast<void*>(const_cast< LoginWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LoginWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void LoginWindow::verifyLogin(const QString _t1, const QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
