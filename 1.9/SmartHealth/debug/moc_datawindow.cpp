/****************************************************************************
** Meta object code from reading C++ file 'datawindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../datawindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datawindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataWindow_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataWindow_t qt_meta_stringdata_DataWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DataWindow"
QT_MOC_LITERAL(1, 11, 9), // "back2Func"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "commitPersonFeature"
QT_MOC_LITERAL(4, 42, 5), // "array"
QT_MOC_LITERAL(5, 48, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(6, 67, 27), // "on_commitPushButton_clicked"
QT_MOC_LITERAL(7, 95, 22), // "dealReplyFeatureCommit"
QT_MOC_LITERAL(8, 118, 4) // "data"

    },
    "DataWindow\0back2Func\0\0commitPersonFeature\0"
    "array\0on_backBtn_clicked\0"
    "on_commitPushButton_clicked\0"
    "dealReplyFeatureCommit\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void DataWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataWindow *_t = static_cast<DataWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back2Func(); break;
        case 1: _t->commitPersonFeature((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->on_backBtn_clicked(); break;
        case 3: _t->on_commitPushButton_clicked(); break;
        case 4: _t->dealReplyFeatureCommit((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DataWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataWindow::back2Func)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DataWindow::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataWindow::commitPersonFeature)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DataWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DataWindow.data,
      qt_meta_data_DataWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataWindow.stringdata0))
        return static_cast<void*>(const_cast< DataWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DataWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DataWindow::back2Func()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DataWindow::commitPersonFeature(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
