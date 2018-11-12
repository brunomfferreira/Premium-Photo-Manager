/****************************************************************************
** Meta object code from reading C++ file 'uislideshow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ES-Design/design/uislideshow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uislideshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UiSlideShow_t {
    QByteArrayData data[17];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiSlideShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiSlideShow_t qt_meta_stringdata_UiSlideShow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UiSlideShow"
QT_MOC_LITERAL(1, 12, 19), // "SlotGetPhotosToShow"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "QList<ourDB::photos>"
QT_MOC_LITERAL(4, 54, 6), // "photos"
QT_MOC_LITERAL(5, 61, 15), // "SlotUpdatePhoto"
QT_MOC_LITERAL(6, 77, 14), // "SlotGetRootDir"
QT_MOC_LITERAL(7, 92, 8), // "root_dir"
QT_MOC_LITERAL(8, 101, 11), // "SlotGetTime"
QT_MOC_LITERAL(9, 113, 4), // "time"
QT_MOC_LITERAL(10, 118, 16), // "SlotGetAudioFile"
QT_MOC_LITERAL(11, 135, 10), // "audio_file"
QT_MOC_LITERAL(12, 146, 32), // "on_pushButton_play_pause_clicked"
QT_MOC_LITERAL(13, 179, 6), // "reject"
QT_MOC_LITERAL(14, 186, 29), // "on_pushButton_forward_clicked"
QT_MOC_LITERAL(15, 216, 30), // "on_pushButton_backward_clicked"
QT_MOC_LITERAL(16, 247, 33) // "on_pushButton_full_screen_cli..."

    },
    "UiSlideShow\0SlotGetPhotosToShow\0\0"
    "QList<ourDB::photos>\0photos\0SlotUpdatePhoto\0"
    "SlotGetRootDir\0root_dir\0SlotGetTime\0"
    "time\0SlotGetAudioFile\0audio_file\0"
    "on_pushButton_play_pause_clicked\0"
    "reject\0on_pushButton_forward_clicked\0"
    "on_pushButton_backward_clicked\0"
    "on_pushButton_full_screen_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiSlideShow[] = {

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
       1,    1,   64,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    1,   68,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,
      15,    0,   80,    2, 0x08 /* Private */,
      16,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiSlideShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiSlideShow *_t = static_cast<UiSlideShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotGetPhotosToShow((*reinterpret_cast< QList<ourDB::photos>(*)>(_a[1]))); break;
        case 1: _t->SlotUpdatePhoto(); break;
        case 2: _t->SlotGetRootDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SlotGetTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SlotGetAudioFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_play_pause_clicked(); break;
        case 6: _t->reject(); break;
        case 7: _t->on_pushButton_forward_clicked(); break;
        case 8: _t->on_pushButton_backward_clicked(); break;
        case 9: _t->on_pushButton_full_screen_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UiSlideShow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UiSlideShow.data,
      qt_meta_data_UiSlideShow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UiSlideShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiSlideShow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UiSlideShow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UiSlideShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
