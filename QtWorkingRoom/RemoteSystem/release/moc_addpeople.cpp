/****************************************************************************
** Meta object code from reading C++ file 'addpeople.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addpeople.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addpeople.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_addpeople_t {
    QByteArrayData data[17];
    char stringdata[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addpeople_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addpeople_t qt_meta_stringdata_addpeople = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 6),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 7),
QT_MOC_LITERAL(4, 26, 10),
QT_MOC_LITERAL(5, 37, 8),
QT_MOC_LITERAL(6, 46, 13),
QT_MOC_LITERAL(7, 60, 23),
QT_MOC_LITERAL(8, 84, 27),
QT_MOC_LITERAL(9, 112, 4),
QT_MOC_LITERAL(10, 117, 21),
QT_MOC_LITERAL(11, 139, 23),
QT_MOC_LITERAL(12, 163, 25),
QT_MOC_LITERAL(13, 189, 18),
QT_MOC_LITERAL(14, 208, 8),
QT_MOC_LITERAL(15, 217, 11),
QT_MOC_LITERAL(16, 229, 6)
    },
    "addpeople\0addnew\0\0cliinfo\0newcliinfo\0"
    "QString*\0signal_addstr\0on_pushButton_2_clicked\0"
    "on_bumen_currentTextChanged\0arg1\0"
    "on_pushButton_clicked\0on_pushButton_4_clicked\0"
    "on_wanchengxiugai_clicked\0on_adduser_clicked\0"
    "showthis\0xiushowthis\0setQSS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addpeople[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    8,   80,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  103,    2, 0x08 /* Private */,
       8,    1,  104,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x0a /* Public */,
      15,    1,  112,    2, 0x0a /* Public */,
      16,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void addpeople::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addpeople *_t = static_cast<addpeople *>(_o);
        switch (_id) {
        case 0: _t->addnew(); break;
        case 1: _t->cliinfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 2: _t->newcliinfo((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 3: _t->signal_addstr((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_bumen_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_wanchengxiugai_clicked(); break;
        case 9: _t->on_adduser_clicked(); break;
        case 10: _t->showthis(); break;
        case 11: _t->xiushowthis((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 12: _t->setQSS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (addpeople::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addpeople::addnew)) {
                *result = 0;
            }
        }
        {
            typedef void (addpeople::*_t)(QString , QString , QString , QString , QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addpeople::cliinfo)) {
                *result = 1;
            }
        }
        {
            typedef void (addpeople::*_t)(QString * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addpeople::newcliinfo)) {
                *result = 2;
            }
        }
        {
            typedef void (addpeople::*_t)(QString * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addpeople::signal_addstr)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject addpeople::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_addpeople.data,
      qt_meta_data_addpeople,  qt_static_metacall, 0, 0}
};


const QMetaObject *addpeople::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addpeople::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_addpeople.stringdata))
        return static_cast<void*>(const_cast< addpeople*>(this));
    return QWidget::qt_metacast(_clname);
}

int addpeople::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void addpeople::addnew()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void addpeople::cliinfo(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void addpeople::newcliinfo(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void addpeople::signal_addstr(QString * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
