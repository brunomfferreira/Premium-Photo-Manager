/****************************************************************************
** Meta object code from reading C++ file 'uislideshowaddimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ES-Design/design/uislideshowaddimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uislideshowaddimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UiSlideShowAddImage_t {
    QByteArrayData data[15];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiSlideShowAddImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiSlideShowAddImage_t qt_meta_stringdata_UiSlideShowAddImage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UiSlideShowAddImage"
QT_MOC_LITERAL(1, 20, 21), // "SentPhotosToSlideShow"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 20), // "QList<ourDB::photos>"
QT_MOC_LITERAL(4, 64, 6), // "photos"
QT_MOC_LITERAL(5, 71, 11), // "SentRootDir"
QT_MOC_LITERAL(6, 83, 8), // "root_dir"
QT_MOC_LITERAL(7, 92, 8), // "SentTime"
QT_MOC_LITERAL(8, 101, 4), // "time"
QT_MOC_LITERAL(9, 106, 13), // "SentAudioFile"
QT_MOC_LITERAL(10, 120, 19), // "SlotGetStateRootDir"
QT_MOC_LITERAL(11, 140, 8), // "AddPages"
QT_MOC_LITERAL(12, 149, 10), // "ChangeTime"
QT_MOC_LITERAL(13, 160, 27), // "on_pushButton_feito_clicked"
QT_MOC_LITERAL(14, 188, 31) // "on_pushButton_add_music_clicked"

    },
    "UiSlideShowAddImage\0SentPhotosToSlideShow\0"
    "\0QList<ourDB::photos>\0photos\0SentRootDir\0"
    "root_dir\0SentTime\0time\0SentAudioFile\0"
    "SlotGetStateRootDir\0AddPages\0ChangeTime\0"
    "on_pushButton_feito_clicked\0"
    "on_pushButton_add_music_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiSlideShowAddImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       7,    1,   65,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   71,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiSlideShowAddImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiSlideShowAddImage *_t = static_cast<UiSlideShowAddImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SentPhotosToSlideShow((*reinterpret_cast< QList<ourDB::photos>(*)>(_a[1]))); break;
        case 1: _t->SentRootDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SentTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SentAudioFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SlotGetStateRootDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->AddPages(); break;
        case 6: _t->ChangeTime(); break;
        case 7: _t->on_pushButton_feito_clicked(); break;
        case 8: _t->on_pushButton_add_music_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UiSlideShowAddImage::*_t)(QList<ourDB::photos> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiSlideShowAddImage::SentPhotosToSlideShow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UiSlideShowAddImage::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiSlideShowAddImage::SentRootDir)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UiSlideShowAddImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiSlideShowAddImage::SentTime)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UiSlideShowAddImage::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiSlideShowAddImage::SentAudioFile)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UiSlideShowAddImage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UiSlideShowAddImage.data,
      qt_meta_data_UiSlideShowAddImage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UiSlideShowAddImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiSlideShowAddImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UiSlideShowAddImage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UiSlideShowAddImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void UiSlideShowAddImage::SentPhotosToSlideShow(QList<ourDB::photos> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UiSlideShowAddImage::SentRootDir(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UiSlideShowAddImage::SentTime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UiSlideShowAddImage::SentAudioFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
