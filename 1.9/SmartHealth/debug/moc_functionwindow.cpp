/****************************************************************************
** Meta object code from reading C++ file 'functionwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../functionwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'functionwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FunctionWindow_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionWindow_t qt_meta_stringdata_FunctionWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FunctionWindow"
QT_MOC_LITERAL(1, 15, 11), // "backForExit"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "backForLogOut"
QT_MOC_LITERAL(4, 42, 15), // "on_Exit_clicked"
QT_MOC_LITERAL(5, 58, 18), // "on_Login_3_clicked"
QT_MOC_LITERAL(6, 77, 14), // "backFromDoctor"
QT_MOC_LITERAL(7, 92, 12), // "backFromData"
QT_MOC_LITERAL(8, 105, 17), // "on_Logout_clicked"
QT_MOC_LITERAL(9, 123, 21), // "on_dataButton_clicked"
QT_MOC_LITERAL(10, 145, 18), // "on_Login_2_clicked"
QT_MOC_LITERAL(11, 164, 18) // "on_Login_5_clicked"

    },
    "FunctionWindow\0backForExit\0\0backForLogOut\0"
    "on_Exit_clicked\0on_Login_3_clicked\0"
    "backFromDoctor\0backFromData\0"
    "on_Logout_clicked\0on_dataButton_clicked\0"
    "on_Login_2_clicked\0on_Login_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FunctionWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FunctionWindow *_t = static_cast<FunctionWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backForExit(); break;
        case 1: _t->backForLogOut(); break;
        case 2: _t->on_Exit_clicked(); break;
        case 3: _t->on_Login_3_clicked(); break;
        case 4: _t->backFromDoctor(); break;
        case 5: _t->backFromData(); break;
        case 6: _t->on_Logout_clicked(); break;
        case 7: _t->on_dataButton_clicked(); break;
        case 8: _t->on_Login_2_clicked(); break;
        case 9: _t->on_Login_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FunctionWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionWindow::backForExit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FunctionWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionWindow::backForLogOut)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FunctionWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FunctionWindow.data,
      qt_meta_data_FunctionWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FunctionWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionWindow.stringdata0))
        return static_cast<void*>(const_cast< FunctionWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FunctionWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FunctionWindow::backForExit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FunctionWindow::backForLogOut()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
