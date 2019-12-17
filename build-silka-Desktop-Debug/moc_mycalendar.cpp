/****************************************************************************
** Meta object code from reading C++ file 'mycalendar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../silkaQT/mycalendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycalendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyCalendar_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCalendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCalendar_t qt_meta_stringdata_MyCalendar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyCalendar"
QT_MOC_LITERAL(1, 11, 10), // "updateList"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "paintCell"
QT_MOC_LITERAL(4, 33, 9), // "QPainter*"
QT_MOC_LITERAL(5, 43, 7), // "painter"
QT_MOC_LITERAL(6, 51, 4), // "rect"
QT_MOC_LITERAL(7, 56, 4) // "date"

    },
    "MyCalendar\0updateList\0\0paintCell\0"
    "QPainter*\0painter\0rect\0date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCalendar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       3,    3,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QRect, QMetaType::QDate,    5,    6,    7,

       0        // eod
};

void MyCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyCalendar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->paintCell((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< const QDate(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyCalendar::staticMetaObject = { {
    &QCalendarWidget::staticMetaObject,
    qt_meta_stringdata_MyCalendar.data,
    qt_meta_data_MyCalendar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyCalendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCalendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyCalendar.stringdata0))
        return static_cast<void*>(this);
    return QCalendarWidget::qt_metacast(_clname);
}

int MyCalendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCalendarWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
