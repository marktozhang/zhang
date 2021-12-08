/****************************************************************************
** Meta object code from reading C++ file 'cnnNT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnnNT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnnNT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cnnNT_t {
    QByteArrayData data[10];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cnnNT_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cnnNT_t qt_meta_stringdata_cnnNT = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 10),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 15),
QT_MOC_LITERAL(4, 34, 6),
QT_MOC_LITERAL(5, 41, 9),
QT_MOC_LITERAL(6, 51, 9),
QT_MOC_LITERAL(7, 61, 5),
QT_MOC_LITERAL(8, 67, 2),
QT_MOC_LITERAL(9, 70, 10)
    },
    "cnnNT\0show_renew\0\0show_renew_pnum\0"
    "tomain\0badtomain\0addresult\0renew\0rq\0"
    "recvlistwc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cnnNT[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       3,    1,   61,    2, 0x06 /* Public */,
       4,    0,   64,    2, 0x06 /* Public */,
       5,    0,   65,    2, 0x06 /* Public */,
       6,    1,   66,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cnnNT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cnnNT *_t = static_cast<cnnNT *>(_o);
        switch (_id) {
        case 0: _t->show_renew((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->show_renew_pnum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tomain(); break;
        case 3: _t->badtomain(); break;
        case 4: _t->addresult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->renew(); break;
        case 6: _t->rq(); break;
        case 7: _t->recvlistwc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (cnnNT::*_t)(QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::show_renew)) {
                *result = 0;
            }
        }
        {
            typedef void (cnnNT::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::show_renew_pnum)) {
                *result = 1;
            }
        }
        {
            typedef void (cnnNT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::tomain)) {
                *result = 2;
            }
        }
        {
            typedef void (cnnNT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::badtomain)) {
                *result = 3;
            }
        }
        {
            typedef void (cnnNT::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::addresult)) {
                *result = 4;
            }
        }
        {
            typedef void (cnnNT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::renew)) {
                *result = 5;
            }
        }
        {
            typedef void (cnnNT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::rq)) {
                *result = 6;
            }
        }
        {
            typedef void (cnnNT::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cnnNT::recvlistwc)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject cnnNT::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_cnnNT.data,
      qt_meta_data_cnnNT,  qt_static_metacall, 0, 0}
};


const QMetaObject *cnnNT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cnnNT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cnnNT.stringdata))
        return static_cast<void*>(const_cast< cnnNT*>(this));
    return QThread::qt_metacast(_clname);
}

int cnnNT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void cnnNT::show_renew(QString _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cnnNT::show_renew_pnum(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cnnNT::tomain()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void cnnNT::badtomain()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void cnnNT::addresult(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void cnnNT::renew()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void cnnNT::rq()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void cnnNT::recvlistwc()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
