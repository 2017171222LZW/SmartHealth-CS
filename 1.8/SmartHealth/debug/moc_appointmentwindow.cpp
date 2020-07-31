/****************************************************************************
** Meta object code from reading C++ file 'appointmentwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appointmentwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appointmentwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AppointmentWindow_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppointmentWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppointmentWindow_t qt_meta_stringdata_AppointmentWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AppointmentWindow"
QT_MOC_LITERAL(1, 18, 14), // "appointRequest"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "data"
QT_MOC_LITERAL(4, 39, 18), // "displayInformation"
QT_MOC_LITERAL(5, 58, 6), // "Doctor"
QT_MOC_LITERAL(6, 65, 6), // "doctor"
QT_MOC_LITERAL(7, 72, 14), // "displayPicture"
QT_MOC_LITERAL(8, 87, 11), // "displayDate"
QT_MOC_LITERAL(9, 99, 4), // "date"
QT_MOC_LITERAL(10, 104, 15), // "handleReplyData"
QT_MOC_LITERAL(11, 120, 23) // "on_commitButton_clicked"

    },
    "AppointmentWindow\0appointRequest\0\0"
    "data\0displayInformation\0Doctor\0doctor\0"
    "displayPicture\0displayDate\0date\0"
    "handleReplyData\0on_commitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppointmentWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x0a /* Public */,
      10,    0,   56,    2, 0x0a /* Public */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QDate,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppointmentWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppointmentWindow *_t = static_cast<AppointmentWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appointRequest((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->displayInformation((*reinterpret_cast< const Doctor(*)>(_a[1]))); break;
        case 2: _t->displayPicture((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->displayDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->handleReplyData(); break;
        case 5: _t->on_commitButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AppointmentWindow::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppointmentWindow::appointRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AppointmentWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AppointmentWindow.data,
      qt_meta_data_AppointmentWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppointmentWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppointmentWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppointmentWindow.stringdata0))
        return static_cast<void*>(const_cast< AppointmentWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AppointmentWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AppointmentWindow::appointRequest(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
