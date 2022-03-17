/****************************************************************************
** Meta object code from reading C++ file 'sortingalgorithms.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../AlgorithmVisualizer/include/sortingalgorithms.hpp"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortingalgorithms.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SortingAlgorithms_t {
    const uint offsetsAndSize[26];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SortingAlgorithms_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SortingAlgorithms_t qt_meta_stringdata_SortingAlgorithms = {
    {
QT_MOC_LITERAL(0, 17), // "SortingAlgorithms"
QT_MOC_LITERAL(18, 11), // "swapColumns"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 4), // "col1"
QT_MOC_LITERAL(36, 4), // "col2"
QT_MOC_LITERAL(41, 7), // "sortEnd"
QT_MOC_LITERAL(49, 11), // "changeColor"
QT_MOC_LITERAL(61, 5), // "color"
QT_MOC_LITERAL(67, 3), // "col"
QT_MOC_LITERAL(71, 12), // "changeColumn"
QT_MOC_LITERAL(84, 6), // "height"
QT_MOC_LITERAL(91, 11), // "changeSpeed"
QT_MOC_LITERAL(103, 5) // "speed"

    },
    "SortingAlgorithms\0swapColumns\0\0col1\0"
    "col2\0sortEnd\0changeColor\0color\0col\0"
    "changeColumn\0height\0changeSpeed\0speed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortingAlgorithms[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    0,   55,    2, 0x06,    4 /* Public */,
       6,    3,   56,    2, 0x06,    5 /* Public */,
       6,    2,   63,    2, 0x06,    9 /* Public */,
       9,    2,   68,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   73,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QColor,    3,    4,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::QColor,    8,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::Double,    8,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void SortingAlgorithms::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortingAlgorithms *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->swapColumns((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->sortEnd(); break;
        case 2: _t->changeColor((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 3: _t->changeColor((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 4: _t->changeColumn((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->changeSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SortingAlgorithms::*)(unsigned  , unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortingAlgorithms::swapColumns)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SortingAlgorithms::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortingAlgorithms::sortEnd)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SortingAlgorithms::*)(unsigned  , unsigned  , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortingAlgorithms::changeColor)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SortingAlgorithms::*)(unsigned  , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortingAlgorithms::changeColor)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SortingAlgorithms::*)(unsigned  , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortingAlgorithms::changeColumn)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SortingAlgorithms::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_SortingAlgorithms.offsetsAndSize,
    qt_meta_data_SortingAlgorithms,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SortingAlgorithms_t
, QtPrivate::TypeAndForceComplete<SortingAlgorithms, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned , std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *SortingAlgorithms::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortingAlgorithms::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SortingAlgorithms.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int SortingAlgorithms::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SortingAlgorithms::swapColumns(unsigned  _t1, unsigned  _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SortingAlgorithms::sortEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SortingAlgorithms::changeColor(unsigned  _t1, unsigned  _t2, QColor _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SortingAlgorithms::changeColor(unsigned  _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SortingAlgorithms::changeColumn(unsigned  _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
