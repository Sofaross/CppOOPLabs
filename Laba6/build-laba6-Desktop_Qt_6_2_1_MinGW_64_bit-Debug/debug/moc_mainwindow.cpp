/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../laba6/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[34];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 20), // "on_Clear_All_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 19), // "on_Set_Left_clicked"
QT_MOC_LITERAL(53, 18), // "on_Set_All_clicked"
QT_MOC_LITERAL(72, 20), // "on_Set_Right_clicked"
QT_MOC_LITERAL(93, 21), // "on_Clear_Left_clicked"
QT_MOC_LITERAL(115, 22), // "on_Clear_Right_clicked"
QT_MOC_LITERAL(138, 15), // "on_Swap_clicked"
QT_MOC_LITERAL(154, 20), // "on_Move_Left_clicked"
QT_MOC_LITERAL(175, 21), // "on_Move_Right_clicked"
QT_MOC_LITERAL(197, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(219, 4), // "arg1"
QT_MOC_LITERAL(224, 19), // "on_listView_clicked"
QT_MOC_LITERAL(244, 11), // "QModelIndex"
QT_MOC_LITERAL(256, 5), // "index"
QT_MOC_LITERAL(262, 21) // "on_pushButton_clicked"

    },
    "MainWindow\0on_Clear_All_clicked\0\0"
    "on_Set_Left_clicked\0on_Set_All_clicked\0"
    "on_Set_Right_clicked\0on_Clear_Left_clicked\0"
    "on_Clear_Right_clicked\0on_Swap_clicked\0"
    "on_Move_Left_clicked\0on_Move_Right_clicked\0"
    "on_comboBox_activated\0arg1\0"
    "on_listView_clicked\0QModelIndex\0index\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    1,   95,    2, 0x08,   10 /* Private */,
      13,    1,   98,    2, 0x08,   12 /* Private */,
      16,    0,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Clear_All_clicked(); break;
        case 1: _t->on_Set_Left_clicked(); break;
        case 2: _t->on_Set_All_clicked(); break;
        case 3: _t->on_Set_Right_clicked(); break;
        case 4: _t->on_Clear_Left_clicked(); break;
        case 5: _t->on_Clear_Right_clicked(); break;
        case 6: _t->on_Swap_clicked(); break;
        case 7: _t->on_Move_Left_clicked(); break;
        case 8: _t->on_Move_Right_clicked(); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
