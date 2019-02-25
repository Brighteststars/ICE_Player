/****************************************************************************
** Meta object code from reading C++ file 'icevolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../icevolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icevolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ICE_Vol_Button_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ICE_Vol_Button_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ICE_Vol_Button_t qt_meta_stringdata_ICE_Vol_Button = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ICE_Vol_Button"
QT_MOC_LITERAL(1, 15, 18), // "ICE_Volume_Changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "volume"
QT_MOC_LITERAL(4, 42, 19), // "ICE_Increase_Volume"
QT_MOC_LITERAL(5, 62, 20), // "ICE_Descrease_Volume"
QT_MOC_LITERAL(6, 83, 14), // "ICE_Set_Volume"
QT_MOC_LITERAL(7, 98, 18), // "ICE_Button_Clicked"
QT_MOC_LITERAL(8, 117, 14) // "ICE_Get_Volume"

    },
    "ICE_Vol_Button\0ICE_Volume_Changed\0\0"
    "volume\0ICE_Increase_Volume\0"
    "ICE_Descrease_Volume\0ICE_Set_Volume\0"
    "ICE_Button_Clicked\0ICE_Get_Volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ICE_Vol_Button[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ICE_Vol_Button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ICE_Vol_Button *_t = static_cast<ICE_Vol_Button *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ICE_Volume_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ICE_Increase_Volume(); break;
        case 2: _t->ICE_Descrease_Volume(); break;
        case 3: _t->ICE_Set_Volume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ICE_Button_Clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ICE_Vol_Button::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ICE_Vol_Button::ICE_Volume_Changed)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ICE_Vol_Button *_t = static_cast<ICE_Vol_Button *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->ICE_Get_Volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ICE_Vol_Button *_t = static_cast<ICE_Vol_Button *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->ICE_Set_Volume(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ICE_Vol_Button::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ICE_Vol_Button.data,
      qt_meta_data_ICE_Vol_Button,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ICE_Vol_Button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ICE_Vol_Button::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ICE_Vol_Button.stringdata0))
        return static_cast<void*>(const_cast< ICE_Vol_Button*>(this));
    return QWidget::qt_metacast(_clname);
}

int ICE_Vol_Button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ICE_Vol_Button::ICE_Volume_Changed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
