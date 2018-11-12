/****************************************************************************
** Meta object code from reading C++ file 'uiaddpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ES-Design/design/uiaddpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiaddpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UiAddPage_t {
    QByteArrayData data[21];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiAddPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiAddPage_t qt_meta_stringdata_UiAddPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UiAddPage"
QT_MOC_LITERAL(1, 10, 8), // "SentPage"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "Page"
QT_MOC_LITERAL(4, 25, 9), // "page_send"
QT_MOC_LITERAL(5, 35, 13), // "SentPageParty"
QT_MOC_LITERAL(6, 49, 5), // "Party"
QT_MOC_LITERAL(7, 55, 10), // "party_send"
QT_MOC_LITERAL(8, 66, 19), // "SentPageThingPeople"
QT_MOC_LITERAL(9, 86, 11), // "ThingPeople"
QT_MOC_LITERAL(10, 98, 17), // "thing_people_send"
QT_MOC_LITERAL(11, 116, 12), // "SentPageTrip"
QT_MOC_LITERAL(12, 129, 4), // "Trip"
QT_MOC_LITERAL(13, 134, 9), // "trip_send"
QT_MOC_LITERAL(14, 144, 13), // "SentPageOther"
QT_MOC_LITERAL(15, 158, 5), // "Other"
QT_MOC_LITERAL(16, 164, 10), // "other_send"
QT_MOC_LITERAL(17, 175, 11), // "SlotGetType"
QT_MOC_LITERAL(18, 187, 4), // "type"
QT_MOC_LITERAL(19, 192, 35), // "on_pushButton_AddPage_Feito_c..."
QT_MOC_LITERAL(20, 228, 14) // "checkLineEdits"

    },
    "UiAddPage\0SentPage\0\0Page\0page_send\0"
    "SentPageParty\0Party\0party_send\0"
    "SentPageThingPeople\0ThingPeople\0"
    "thing_people_send\0SentPageTrip\0Trip\0"
    "trip_send\0SentPageOther\0Other\0other_send\0"
    "SlotGetType\0type\0on_pushButton_AddPage_Feito_clicked\0"
    "checkLineEdits"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiAddPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,
      11,    1,   63,    2, 0x06 /* Public */,
      14,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   69,    2, 0x0a /* Public */,
      19,    0,   72,    2, 0x08 /* Private */,
      20,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UiAddPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiAddPage *_t = static_cast<UiAddPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SentPage((*reinterpret_cast< Page(*)>(_a[1]))); break;
        case 1: _t->SentPageParty((*reinterpret_cast< Party(*)>(_a[1]))); break;
        case 2: _t->SentPageThingPeople((*reinterpret_cast< ThingPeople(*)>(_a[1]))); break;
        case 3: _t->SentPageTrip((*reinterpret_cast< Trip(*)>(_a[1]))); break;
        case 4: _t->SentPageOther((*reinterpret_cast< Other(*)>(_a[1]))); break;
        case 5: _t->SlotGetType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_AddPage_Feito_clicked(); break;
        case 7: _t->checkLineEdits(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (UiAddPage::*_t)(Page );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiAddPage::SentPage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UiAddPage::*_t)(Party );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiAddPage::SentPageParty)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UiAddPage::*_t)(ThingPeople );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiAddPage::SentPageThingPeople)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UiAddPage::*_t)(Trip );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiAddPage::SentPageTrip)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UiAddPage::*_t)(Other );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UiAddPage::SentPageOther)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UiAddPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UiAddPage.data,
      qt_meta_data_UiAddPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UiAddPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiAddPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UiAddPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UiAddPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UiAddPage::SentPage(Page _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UiAddPage::SentPageParty(Party _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UiAddPage::SentPageThingPeople(ThingPeople _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UiAddPage::SentPageTrip(Trip _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UiAddPage::SentPageOther(Other _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
