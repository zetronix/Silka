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
#include <QtCore/QVector>
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
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCalendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCalendar_t qt_meta_stringdata_MyCalendar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyCalendar"
QT_MOC_LITERAL(1, 11, 15), // "emitWorkoutType"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "QVector<workoutType>"
QT_MOC_LITERAL(4, 49, 10), // "updateList"
QT_MOC_LITERAL(5, 60, 9), // "paintCell"
QT_MOC_LITERAL(6, 70, 9), // "QPainter*"
QT_MOC_LITERAL(7, 80, 7), // "painter"
QT_MOC_LITERAL(8, 88, 4), // "rect"
QT_MOC_LITERAL(9, 93, 4), // "date"
QT_MOC_LITERAL(10, 98, 16) // "checkWorkoutList"

    },
    "MyCalendar\0emitWorkoutType\0\0"
    "QVector<workoutType>\0updateList\0"
    "paintCell\0QPainter*\0painter\0rect\0date\0"
    "checkWorkoutList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCalendar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       5,    3,   40,    2, 0x08 /* Private */,
      10,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QRect, QMetaType::QDate,    7,    8,    9,
    QMetaType::Void, QMetaType::QDate,    9,

       0        // eod
};

void MyCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyCalendar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitWorkoutType((*reinterpret_cast< const QVector<workoutType>(*)>(_a[1]))); break;
        case 1: _t->updateList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->paintCell((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2])),(*reinterpret_cast< const QDate(*)>(_a[3]))); break;
        case 3: _t->checkWorkoutList((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyCalendar::*)(const QVector<workoutType> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyCalendar::emitWorkoutType)) {
                *result = 0;
                return;
            }
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MyCalendar::emitWorkoutType(const QVector<workoutType> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
