/****************************************************************************
** Meta object code from reading C++ file 'sortwindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AlgorithmVisualizer/include/sortwindow.hpp"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SortWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SortWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SortWindow_t qt_meta_stringdata_SortWindow = {
    {
QT_MOC_LITERAL(0, 10), // "SortWindow"
QT_MOC_LITERAL(11, 11), // "changeSpeed"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 5), // "speed"
QT_MOC_LITERAL(30, 26), // "on_speedSlider_sliderMoved"
QT_MOC_LITERAL(57, 8), // "position"
QT_MOC_LITERAL(66, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(89, 11), // "swapColumns"
QT_MOC_LITERAL(101, 4), // "col1"
QT_MOC_LITERAL(106, 4), // "col2"
QT_MOC_LITERAL(111, 7), // "sortEnd"
QT_MOC_LITERAL(119, 11), // "changeColor"
QT_MOC_LITERAL(131, 5), // "color"
QT_MOC_LITERAL(137, 3), // "col"
QT_MOC_LITERAL(141, 12), // "changeColumn"
QT_MOC_LITERAL(154, 6) // "height"

    },
    "SortWindow\0changeSpeed\0\0speed\0"
    "on_speedSlider_sliderMoved\0position\0"
    "on_startButton_clicked\0swapColumns\0"
    "col1\0col2\0sortEnd\0changeColor\0color\0"
    "col\0changeColumn\0height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   65,    2, 0x08,    3 /* Private */,
       6,    0,   68,    2, 0x08,    5 /* Private */,
       7,    2,   69,    2, 0x08,    6 /* Private */,
      10,    0,   74,    2, 0x08,    9 /* Private */,
      11,    3,   75,    2, 0x08,   10 /* Private */,
      11,    2,   82,    2, 0x08,   14 /* Private */,
      14,    2,   87,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QColor,    8,    9,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::QColor,   13,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,   13,   15,

       0        // eod
};

void SortWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_speedSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->swapColumns((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 4: _t->sortEnd(); break;
        case 5: _t->changeColor((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 6: _t->changeColor((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 7: _t->changeColumn((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SortWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortWindow::changeSpeed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SortWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SortWindow.offsetsAndSize,
    qt_meta_data_SortWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SortWindow_t
, QtPrivate::TypeAndForceComplete<SortWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *SortWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SortWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SortWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SortWindow::changeSpeed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
