/****************************************************************************
** Meta object code from reading C++ file 'manageforrenyuan.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../manageforrenyuan.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageforrenyuan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_manageforrenyuan_t {
    QByteArrayData data[9];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageforrenyuan_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageforrenyuan_t qt_meta_stringdata_manageforrenyuan = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 10),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 8),
QT_MOC_LITERAL(4, 38, 7),
QT_MOC_LITERAL(5, 46, 14),
QT_MOC_LITERAL(6, 61, 21),
QT_MOC_LITERAL(7, 83, 23),
QT_MOC_LITERAL(8, 107, 14)
    },
    "manageforrenyuan\0addaccount\0\0showthis\0"
    "renyuan\0gengxinrenyuan\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_det_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageforrenyuan[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void manageforrenyuan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageforrenyuan *_t = static_cast<manageforrenyuan *>(_o);
        switch (_id) {
        case 0: _t->addaccount(); break;
        case 1: _t->showthis(); break;
        case 2: _t->renyuan(); break;
        case 3: _t->gengxinrenyuan(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_det_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (manageforrenyuan::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageforrenyuan::addaccount)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject manageforrenyuan::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_manageforrenyuan.data,
      qt_meta_data_manageforrenyuan,  qt_static_metacall, 0, 0}
};


const QMetaObject *manageforrenyuan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageforrenyuan::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_manageforrenyuan.stringdata))
        return static_cast<void*>(const_cast< manageforrenyuan*>(this));
    return QWidget::qt_metacast(_clname);
}

int manageforrenyuan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void manageforrenyuan::addaccount()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
