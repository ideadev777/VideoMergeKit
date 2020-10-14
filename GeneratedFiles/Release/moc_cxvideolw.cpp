/****************************************************************************
** Meta object code from reading C++ file 'cxvideolw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cxvideolw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cxvideolw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CxVideoLW_t {
    QByteArrayData data[13];
    char stringdata[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CxVideoLW_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CxVideoLW_t qt_meta_stringdata_CxVideoLW = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 23),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 12),
QT_MOC_LITERAL(4, 48, 4),
QT_MOC_LITERAL(5, 53, 19),
QT_MOC_LITERAL(6, 73, 2),
QT_MOC_LITERAL(7, 76, 2),
QT_MOC_LITERAL(8, 79, 9),
QT_MOC_LITERAL(9, 89, 4),
QT_MOC_LITERAL(10, 94, 14),
QT_MOC_LITERAL(11, 109, 2),
QT_MOC_LITERAL(12, 112, 22)
    },
    "CxVideoLW\0__videoSelectionChanged\0\0"
    "CxVideoItem*\0item\0__curSeekPosChanged\0"
    "id\0st\0__preview\0msec\0__rangeChanged\0"
    "en\0onItemSelectionChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CxVideoLW[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x05,
       5,    2,   42,    2, 0x05,
       8,    2,   47,    2, 0x05,
      10,    3,   52,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      12,    0,   59,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CxVideoLW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CxVideoLW *_t = static_cast<CxVideoLW *>(_o);
        switch (_id) {
        case 0: _t->__videoSelectionChanged((*reinterpret_cast< CxVideoItem*(*)>(_a[1]))); break;
        case 1: _t->__curSeekPosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->__preview((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->__rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->onItemSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CxVideoLW::*_t)(CxVideoItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxVideoLW::__videoSelectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CxVideoLW::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxVideoLW::__curSeekPosChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (CxVideoLW::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxVideoLW::__preview)) {
                *result = 2;
            }
        }
        {
            typedef void (CxVideoLW::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CxVideoLW::__rangeChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject CxVideoLW::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_CxVideoLW.data,
      qt_meta_data_CxVideoLW,  qt_static_metacall, 0, 0}
};


const QMetaObject *CxVideoLW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CxVideoLW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CxVideoLW.stringdata))
        return static_cast<void*>(const_cast< CxVideoLW*>(this));
    return QListWidget::qt_metacast(_clname);
}

int CxVideoLW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void CxVideoLW::__videoSelectionChanged(CxVideoItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CxVideoLW::__curSeekPosChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CxVideoLW::__preview(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CxVideoLW::__rangeChanged(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
