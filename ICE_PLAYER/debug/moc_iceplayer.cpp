/****************************************************************************
** Meta object code from reading C++ file 'iceplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../iceplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iceplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IcePlayer_t {
    QByteArrayData data[24];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IcePlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IcePlayer_t qt_meta_stringdata_IcePlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "IcePlayer"
QT_MOC_LITERAL(1, 10, 14), // "ice_open_music"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "ice_write_list"
QT_MOC_LITERAL(4, 41, 13), // "ice_read_list"
QT_MOC_LITERAL(5, 55, 37), // "ice_playlisttable_cell_double..."
QT_MOC_LITERAL(6, 93, 3), // "row"
QT_MOC_LITERAL(7, 97, 32), // "ice_playlisttable_menu_requested"
QT_MOC_LITERAL(8, 130, 3), // "pos"
QT_MOC_LITERAL(9, 134, 24), // "ice_remove_current_music"
QT_MOC_LITERAL(10, 159, 14), // "ice_clear_list"
QT_MOC_LITERAL(11, 174, 23), // "ice_play_button_clicked"
QT_MOC_LITERAL(12, 198, 23), // "ice_mode_button_clicked"
QT_MOC_LITERAL(13, 222, 23), // "ice_next_button_clicked"
QT_MOC_LITERAL(14, 246, 23), // "ice_last_button_clicked"
QT_MOC_LITERAL(15, 270, 20), // "ice_update_meta_data"
QT_MOC_LITERAL(16, 291, 16), // "ice_update_state"
QT_MOC_LITERAL(17, 308, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(18, 328, 5), // "state"
QT_MOC_LITERAL(19, 334, 19), // "ice_update_duration"
QT_MOC_LITERAL(20, 354, 8), // "duration"
QT_MOC_LITERAL(21, 363, 19), // "ice_update_position"
QT_MOC_LITERAL(22, 383, 8), // "position"
QT_MOC_LITERAL(23, 392, 17) // "ice_set_play_mode"

    },
    "IcePlayer\0ice_open_music\0\0ice_write_list\0"
    "ice_read_list\0ice_playlisttable_cell_double_clicked\0"
    "row\0ice_playlisttable_menu_requested\0"
    "pos\0ice_remove_current_music\0"
    "ice_clear_list\0ice_play_button_clicked\0"
    "ice_mode_button_clicked\0ice_next_button_clicked\0"
    "ice_last_button_clicked\0ice_update_meta_data\0"
    "ice_update_state\0QMediaPlayer::State\0"
    "state\0ice_update_duration\0duration\0"
    "ice_update_position\0position\0"
    "ice_set_play_mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IcePlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    2,   97,    2, 0x08 /* Private */,
       7,    1,  102,    2, 0x08 /* Private */,
       9,    0,  105,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    1,  112,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,
      21,    1,  118,    2, 0x08 /* Private */,
      23,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    2,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::LongLong,   22,
    QMetaType::Void,

       0        // eod
};

void IcePlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IcePlayer *_t = static_cast<IcePlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ice_open_music(); break;
        case 1: _t->ice_write_list(); break;
        case 2: _t->ice_read_list(); break;
        case 3: _t->ice_playlisttable_cell_double_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->ice_playlisttable_menu_requested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->ice_remove_current_music(); break;
        case 6: _t->ice_clear_list(); break;
        case 7: _t->ice_play_button_clicked(); break;
        case 8: _t->ice_mode_button_clicked(); break;
        case 9: _t->ice_next_button_clicked(); break;
        case 10: _t->ice_last_button_clicked(); break;
        case 11: _t->ice_update_meta_data(); break;
        case 12: _t->ice_update_state((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 13: _t->ice_update_duration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 14: _t->ice_update_position((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 15: _t->ice_set_play_mode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject IcePlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IcePlayer.data,
      qt_meta_data_IcePlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IcePlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IcePlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IcePlayer.stringdata0))
        return static_cast<void*>(const_cast< IcePlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int IcePlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
