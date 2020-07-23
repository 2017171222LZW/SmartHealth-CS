/****************************************************************************
** Meta object code from reading C++ file 'registerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../registerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RegisterWindow_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterWindow_t qt_meta_stringdata_RegisterWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RegisterWindow"
QT_MOC_LITERAL(1, 15, 10), // "back2Login"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "userRegister"
QT_MOC_LITERAL(4, 40, 15), // "const Customer*"
QT_MOC_LITERAL(5, 56, 6), // "person"
QT_MOC_LITERAL(6, 63, 17), // "on_Cancel_clicked"
QT_MOC_LITERAL(7, 81, 19), // "on_Register_clicked"
QT_MOC_LITERAL(8, 101, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(9, 133, 5), // "index"
QT_MOC_LITERAL(10, 139, 18), // "on_Picture_clicked"
QT_MOC_LITERAL(11, 158, 15), // "registerSeccuss"
QT_MOC_LITERAL(12, 174, 12) // "registerFail"

    },
    "RegisterWindow\0back2Login\0\0userRegister\0"
    "const Customer*\0person\0on_Cancel_clicked\0"
    "on_Register_clicked\0on_comboBox_currentIndexChanged\0"
    "index\0on_Picture_clicked\0registerSeccuss\0"
    "registerFail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x0a /* Public */,
      12,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RegisterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegisterWindow *_t = static_cast<RegisterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back2Login(); break;
        case 1: _t->userRegister((*reinterpret_cast< const Customer*(*)>(_a[1]))); break;
        case 2: _t->on_Cancel_clicked(); break;
        case 3: _t->on_Register_clicked(); break;
        case 4: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Picture_clicked(); break;
        case 6: _t->registerSeccuss(); break;
        case 7: _t->registerFail(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RegisterWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterWindow::back2Login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RegisterWindow::*_t)(const Customer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RegisterWindow::userRegister)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RegisterWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RegisterWindow.data,
      qt_meta_data_RegisterWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegisterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterWindow.stringdata0))
        return static_cast<void*>(const_cast< RegisterWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RegisterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RegisterWindow::back2Login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RegisterWindow::userRegister(const Customer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
