/****************************************************************************
** Meta object code from reading C++ file 'doctorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../doctorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doctorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DoctorWindow_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoctorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoctorWindow_t qt_meta_stringdata_DoctorWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DoctorWindow"
QT_MOC_LITERAL(1, 13, 9), // "back2Func"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(4, 43, 32), // "on_doctorTable_cellDoubleClicked"
QT_MOC_LITERAL(5, 76, 3), // "row"
QT_MOC_LITERAL(6, 80, 6), // "column"
QT_MOC_LITERAL(7, 87, 14), // "addDoctorImage"
QT_MOC_LITERAL(8, 102, 4) // "data"

    },
    "DoctorWindow\0back2Func\0\0on_backBtn_clicked\0"
    "on_doctorTable_cellDoubleClicked\0row\0"
    "column\0addDoctorImage\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoctorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    2,   36,    2, 0x08 /* Private */,
       7,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void DoctorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DoctorWindow *_t = static_cast<DoctorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back2Func(); break;
        case 1: _t->on_backBtn_clicked(); break;
        case 2: _t->on_doctorTable_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->addDoctorImage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DoctorWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DoctorWindow::back2Func)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DoctorWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DoctorWindow.data,
      qt_meta_data_DoctorWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DoctorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoctorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DoctorWindow.stringdata0))
        return static_cast<void*>(const_cast< DoctorWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DoctorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DoctorWindow::back2Func()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
