/****************************************************************************
** Meta object code from reading C++ file 'passwordwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../passwordwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'passwordwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PasswordWindow_t {
    QByteArrayData data[19];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PasswordWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PasswordWindow_t qt_meta_stringdata_PasswordWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PasswordWindow"
QT_MOC_LITERAL(1, 15, 10), // "back2Login"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "userPassword"
QT_MOC_LITERAL(4, 40, 9), // "telephone"
QT_MOC_LITERAL(5, 50, 2), // "id"
QT_MOC_LITERAL(6, 53, 16), // "ChangeUserPasswd"
QT_MOC_LITERAL(7, 70, 6), // "passwd"
QT_MOC_LITERAL(8, 77, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(9, 94, 18), // "on_nextBtn_clicked"
QT_MOC_LITERAL(10, 113, 11), // "elementShow"
QT_MOC_LITERAL(11, 125, 17), // "QVector<QWidget*>"
QT_MOC_LITERAL(12, 143, 4), // "page"
QT_MOC_LITERAL(13, 148, 11), // "elementHide"
QT_MOC_LITERAL(14, 160, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(15, 179, 13), // "PasswdSeccuss"
QT_MOC_LITERAL(16, 193, 10), // "PasswdFail"
QT_MOC_LITERAL(17, 204, 13), // "changeSeccuss"
QT_MOC_LITERAL(18, 218, 10) // "changeFail"

    },
    "PasswordWindow\0back2Login\0\0userPassword\0"
    "telephone\0id\0ChangeUserPasswd\0passwd\0"
    "on_okBtn_clicked\0on_nextBtn_clicked\0"
    "elementShow\0QVector<QWidget*>\0page\0"
    "elementHide\0on_backBtn_clicked\0"
    "PasswdSeccuss\0PasswdFail\0changeSeccuss\0"
    "changeFail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PasswordWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    2,   75,    2, 0x06 /* Public */,
       6,    3,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,
      17,    0,   98,    2, 0x0a /* Public */,
      18,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    4,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PasswordWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PasswordWindow *_t = static_cast<PasswordWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back2Login(); break;
        case 1: _t->userPassword((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ChangeUserPasswd((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->on_okBtn_clicked(); break;
        case 4: _t->on_nextBtn_clicked(); break;
        case 5: _t->elementShow((*reinterpret_cast< QVector<QWidget*>(*)>(_a[1]))); break;
        case 6: _t->elementHide((*reinterpret_cast< QVector<QWidget*>(*)>(_a[1]))); break;
        case 7: _t->on_backBtn_clicked(); break;
        case 8: _t->PasswdSeccuss(); break;
        case 9: _t->PasswdFail(); break;
        case 10: _t->changeSeccuss(); break;
        case 11: _t->changeFail(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QWidget*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QWidget*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PasswordWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PasswordWindow::back2Login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PasswordWindow::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PasswordWindow::userPassword)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PasswordWindow::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PasswordWindow::ChangeUserPasswd)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PasswordWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PasswordWindow.data,
      qt_meta_data_PasswordWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PasswordWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasswordWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PasswordWindow.stringdata0))
        return static_cast<void*>(const_cast< PasswordWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PasswordWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PasswordWindow::back2Login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void PasswordWindow::userPassword(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PasswordWindow::ChangeUserPasswd(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
