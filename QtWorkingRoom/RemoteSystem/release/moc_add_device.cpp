/****************************************************************************
** Meta object code from reading C++ file 'add_device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../add_device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ADD_device_t {
    QByteArrayData data[14];
    char stringdata[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ADD_device_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ADD_device_t qt_meta_stringdata_ADD_device = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 7),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 11),
QT_MOC_LITERAL(4, 32, 4),
QT_MOC_LITERAL(5, 37, 8),
QT_MOC_LITERAL(6, 46, 10),
QT_MOC_LITERAL(7, 57, 4),
QT_MOC_LITERAL(8, 62, 3),
QT_MOC_LITERAL(9, 66, 6),
QT_MOC_LITERAL(10, 73, 21),
QT_MOC_LITERAL(11, 95, 23),
QT_MOC_LITERAL(12, 119, 21),
QT_MOC_LITERAL(13, 141, 18)
    },
    "ADD_device\0xiewanl\0\0okadddevice\0deee\0"
    "showthis\0button64sf\0qsin\0xxx\0setQSS\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_hidexiugai_clicked\0on_adddddd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ADD_device[] = {

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
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       8,    4,   82,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ADD_device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ADD_device *_t = static_cast<ADD_device *>(_o);
        switch (_id) {
        case 0: _t->xiewanl(); break;
        case 1: _t->okadddevice(); break;
        case 2: _t->deee(); break;
        case 3: _t->showthis(); break;
        case 4: _t->button64sf(); break;
        case 5: _t->qsin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->xxx((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->setQSS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_hidexiugai_clicked(); break;
        case 11: _t->on_adddddd_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ADD_device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ADD_device::xiewanl)) {
                *result = 0;
            }
        }
        {
            typedef void (ADD_device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ADD_device::okadddevice)) {
                *result = 1;
            }
        }
        {
            typedef void (ADD_device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ADD_device::deee)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject ADD_device::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ADD_device.data,
      qt_meta_data_ADD_device,  qt_static_metacall, 0, 0}
};


const QMetaObject *ADD_device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADD_device::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ADD_device.stringdata))
        return static_cast<void*>(const_cast< ADD_device*>(this));
    return QWidget::qt_metacast(_clname);
}

int ADD_device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ADD_device::xiewanl()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ADD_device::okadddevice()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ADD_device::deee()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
