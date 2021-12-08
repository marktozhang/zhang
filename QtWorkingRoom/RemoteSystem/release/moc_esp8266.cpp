/****************************************************************************
** Meta object code from reading C++ file 'esp8266.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../esp8266.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'esp8266.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_kehu_t {
    QByteArrayData data[17];
    char stringdata[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_kehu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_kehu_t qt_meta_stringdata_kehu = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 21),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 23),
QT_MOC_LITERAL(4, 52, 11),
QT_MOC_LITERAL(5, 64, 22),
QT_MOC_LITERAL(6, 87, 20),
QT_MOC_LITERAL(7, 108, 23),
QT_MOC_LITERAL(8, 132, 16),
QT_MOC_LITERAL(9, 149, 8),
QT_MOC_LITERAL(10, 158, 9),
QT_MOC_LITERAL(11, 168, 2),
QT_MOC_LITERAL(12, 171, 9),
QT_MOC_LITERAL(13, 181, 6),
QT_MOC_LITERAL(14, 188, 8),
QT_MOC_LITERAL(15, 197, 6),
QT_MOC_LITERAL(16, 204, 10)
    },
    "kehu\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0Firstwindow\0"
    "on_closewindow_clicked\0on_minwindow_clicked\0"
    "on_addnewdevice_clicked\0on_renew_clicked\0"
    "showthis\0addresult\0ds\0showrenew\0recvrq\0"
    "showlist\0setQSS\0show_renew"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kehu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    1,   92,    2, 0x0a /* Public */,
      12,    0,   95,    2, 0x0a /* Public */,
      13,    0,   96,    2, 0x0a /* Public */,
      14,    0,   97,    2, 0x0a /* Public */,
      15,    1,   98,    2, 0x0a /* Public */,
      16,    3,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void kehu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        kehu *_t = static_cast<kehu *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->Firstwindow(); break;
        case 3: _t->on_closewindow_clicked(); break;
        case 4: _t->on_minwindow_clicked(); break;
        case 5: _t->on_addnewdevice_clicked(); break;
        case 6: _t->on_renew_clicked(); break;
        case 7: _t->showthis(); break;
        case 8: _t->addresult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->showrenew(); break;
        case 10: _t->recvrq(); break;
        case 11: _t->showlist(); break;
        case 12: _t->setQSS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->show_renew((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject kehu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_kehu.data,
      qt_meta_data_kehu,  qt_static_metacall, 0, 0}
};


const QMetaObject *kehu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kehu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_kehu.stringdata))
        return static_cast<void*>(const_cast< kehu*>(this));
    return QWidget::qt_metacast(_clname);
}

int kehu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
