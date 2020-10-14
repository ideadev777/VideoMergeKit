/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 7),
QT_MOC_LITERAL(4, 29, 12),
QT_MOC_LITERAL(5, 42, 11),
QT_MOC_LITERAL(6, 54, 8),
QT_MOC_LITERAL(7, 63, 23),
QT_MOC_LITERAL(8, 87, 12),
QT_MOC_LITERAL(9, 100, 4),
QT_MOC_LITERAL(10, 105, 18),
QT_MOC_LITERAL(11, 124, 16),
QT_MOC_LITERAL(12, 141, 19),
QT_MOC_LITERAL(13, 161, 1),
QT_MOC_LITERAL(14, 163, 2),
QT_MOC_LITERAL(15, 166, 2),
QT_MOC_LITERAL(16, 169, 19),
QT_MOC_LITERAL(17, 189, 19),
QT_MOC_LITERAL(18, 209, 17),
QT_MOC_LITERAL(19, 227, 2),
QT_MOC_LITERAL(20, 230, 21),
QT_MOC_LITERAL(21, 252, 3),
QT_MOC_LITERAL(22, 256, 9),
QT_MOC_LITERAL(23, 266, 2),
QT_MOC_LITERAL(24, 269, 11),
QT_MOC_LITERAL(25, 281, 11)
    },
    "MainWindow\0onUpload\0\0onMerge\0onPlayButton\0"
    "uploadVideo\0fileName\0onVideoSelectionChanged\0"
    "CxVideoItem*\0item\0onStartTimeChanged\0"
    "onEndTimeChanged\0onVideoRangeChanged\0"
    "r\0st\0en\0onAudioStateChanged\0"
    "QMediaPlayer::State\0onSeekableChanged\0"
    "on\0onVideoPostionChanged\0pos\0onPreview\0"
    "id\0onSeekClick\0onViewClick\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a,
       3,    0,   85,    2, 0x0a,
       4,    0,   86,    2, 0x0a,
       5,    1,   87,    2, 0x0a,
       7,    1,   90,    2, 0x0a,
      10,    1,   93,    2, 0x0a,
      11,    1,   96,    2, 0x0a,
      12,    3,   99,    2, 0x0a,
      16,    1,  106,    2, 0x0a,
      18,    1,  109,    2, 0x0a,
      20,    1,  112,    2, 0x0a,
      22,    2,  115,    2, 0x0a,
      24,    2,  120,    2, 0x0a,
      25,    0,  125,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::LongLong,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   21,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->onUpload(); break;
        case 1: _t->onMerge(); break;
        case 2: _t->onPlayButton(); break;
        case 3: _t->uploadVideo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onVideoSelectionChanged((*reinterpret_cast< CxVideoItem*(*)>(_a[1]))); break;
        case 5: _t->onStartTimeChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 6: _t->onEndTimeChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 7: _t->onVideoRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->onAudioStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 9: _t->onSeekableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onVideoPostionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->onPreview((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->onSeekClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->onViewClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
