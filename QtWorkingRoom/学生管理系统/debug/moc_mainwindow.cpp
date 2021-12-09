/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "treeTable_node_slot"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "rightmouse_add"
QT_MOC_LITERAL(4, 47, 14), // "rightmouse_del"
QT_MOC_LITERAL(5, 62, 17), // "rightmouse_revise"
QT_MOC_LITERAL(6, 80, 16), // "rightmouse_renew"
QT_MOC_LITERAL(7, 97, 17), // "rightmouse_search"
QT_MOC_LITERAL(8, 115, 4), // "sort"
QT_MOC_LITERAL(9, 120, 1), // "a"
QT_MOC_LITERAL(10, 122, 1), // "b"
QT_MOC_LITERAL(11, 124, 6), // "update"
QT_MOC_LITERAL(12, 131, 41), // "on_tableWidget_customContextM..."
QT_MOC_LITERAL(13, 173, 3), // "pos"
QT_MOC_LITERAL(14, 177, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0treeTable_node_slot\0\0"
    "rightmouse_add\0rightmouse_del\0"
    "rightmouse_revise\0rightmouse_renew\0"
    "rightmouse_search\0sort\0a\0b\0update\0"
    "on_tableWidget_customContextMenuRequested\0"
    "pos\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    2,   70,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,
      12,    1,   76,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->treeTable_node_slot(); break;
        case 1: _t->rightmouse_add(); break;
        case 2: _t->rightmouse_del(); break;
        case 3: _t->rightmouse_revise(); break;
        case 4: _t->rightmouse_renew(); break;
        case 5: _t->rightmouse_search(); break;
        case 6: _t->sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->update(); break;
        case 8: _t->on_tableWidget_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
