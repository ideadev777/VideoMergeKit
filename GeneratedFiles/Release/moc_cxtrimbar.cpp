/****************************************************************************
** Meta object code from reading C++ file 'cxtrimbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cxtrimbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cxtrimbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CxTrimBar_t {
    QByteArrayData data[12];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CxTrimBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CxTrimBar_t qt_meta_stringdata_CxTrimBar = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 19),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 2),
QT_MOC_LITERAL(4, 34, 2),
QT_MOC_LITERAL(5, 37, 9),
QT_MOC_LITERAL(6, 47, 4),
QT_MOC_LITERAL(7, 52, 14),
QT_MOC_LITERAL(8, 67, 2),
QT_MOC_LITERAL(9, 70, 12),
QT_MOC_LITERAL(10, 83, 9),
QT_MOC_LITERAL(11, 93, 4)
    },
    "CxTrimBar\0__curSeekPosChanged\0\0id\0st\0"
    "__preview\0msec\0__rangeChanged\0en\0"
    "onSetSegment\0onSetSeek\0seek\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CxTrimBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x05,
       5,    2,   44,    2, 0x05,
       7,    3,   49,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    2,   56,    2, 0x0a,
      10,    1,   61,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    4,    8,
    QMetaType::Void, QMetaType::QReal,   11,

       0        // eod
};

void CxTrimBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CxTrimBar *_t = static_cast<CxTrimBar *>(_o);
        switch (_id) {
        case 0: _t->__curSeekPosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->__preview((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->__rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->onSetSegment((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 4: _t->onSetSeek((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CxTrimBar::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxTrimBar::__curSeekPosChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CxTrimBar::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxTrimBar::__preview)) {
                *result = 1;
            }
        }
        {
            typedef void (CxTrimBar::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxTrimBar::__rangeChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CxTrimBar::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_CxTrimBar.data,
      qt_meta_data_CxTrimBar,  qt_static_metacall, 0, 0}
};


const QMetaObject *CxTrimBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CxTrimBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CxTrimBar.stringdata))
        return static_cast<void*>(const_cast< CxTrimBar*>(this));
    return QLabel::qt_metacast(_clname);
}

int CxTrimBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CxTrimBar::__curSeekPosChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CxTrimBar::__preview(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CxTrimBar::__rangeChanged(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
