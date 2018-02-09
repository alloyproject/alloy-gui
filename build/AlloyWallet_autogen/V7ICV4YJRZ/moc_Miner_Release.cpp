/****************************************************************************
** Meta object code from reading C++ file 'Miner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Miner/Miner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Miner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__Miner_t {
    QByteArrayData data[26];
    char stringdata0[535];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__Miner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__Miner_t qt_meta_stringdata_WalletGui__Miner = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WalletGui::Miner"
QT_MOC_LITERAL(1, 17, 18), // "stateChangedSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "_newState"
QT_MOC_LITERAL(4, 47, 21), // "hashRateChangedSignal"
QT_MOC_LITERAL(5, 69, 9), // "_hashRate"
QT_MOC_LITERAL(6, 79, 30), // "alternateHashRateChangedSignal"
QT_MOC_LITERAL(7, 110, 23), // "difficultyChangedSignal"
QT_MOC_LITERAL(8, 134, 11), // "_difficulty"
QT_MOC_LITERAL(9, 146, 27), // "goodShareCountChangedSignal"
QT_MOC_LITERAL(10, 174, 15), // "_goodShareCount"
QT_MOC_LITERAL(11, 190, 36), // "goodAlternateShareCountChange..."
QT_MOC_LITERAL(12, 227, 26), // "badShareCountChangedSignal"
QT_MOC_LITERAL(13, 254, 14), // "_badShareCount"
QT_MOC_LITERAL(14, 269, 33), // "connectionErrorCountChangedSi..."
QT_MOC_LITERAL(15, 303, 21), // "_connectionErrorCount"
QT_MOC_LITERAL(16, 325, 36), // "lastConnectionErrorTimeChange..."
QT_MOC_LITERAL(17, 362, 24), // "_lastConnectionErrorTime"
QT_MOC_LITERAL(18, 387, 7), // "started"
QT_MOC_LITERAL(19, 395, 7), // "stopped"
QT_MOC_LITERAL(20, 403, 11), // "socketError"
QT_MOC_LITERAL(21, 415, 17), // "difficultyChanged"
QT_MOC_LITERAL(22, 433, 21), // "goodShareCountChanged"
QT_MOC_LITERAL(23, 455, 20), // "badShareCountChanged"
QT_MOC_LITERAL(24, 476, 27), // "connectionErrorCountChanged"
QT_MOC_LITERAL(25, 504, 30) // "lastConnectionErrorTimeChanged"

    },
    "WalletGui::Miner\0stateChangedSignal\0"
    "\0_newState\0hashRateChangedSignal\0"
    "_hashRate\0alternateHashRateChangedSignal\0"
    "difficultyChangedSignal\0_difficulty\0"
    "goodShareCountChangedSignal\0_goodShareCount\0"
    "goodAlternateShareCountChangedSignal\0"
    "badShareCountChangedSignal\0_badShareCount\0"
    "connectionErrorCountChangedSignal\0"
    "_connectionErrorCount\0"
    "lastConnectionErrorTimeChangedSignal\0"
    "_lastConnectionErrorTime\0started\0"
    "stopped\0socketError\0difficultyChanged\0"
    "goodShareCountChanged\0badShareCountChanged\0"
    "connectionErrorCountChanged\0"
    "lastConnectionErrorTimeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__Miner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       7,    1,  108,    2, 0x06 /* Public */,
       9,    1,  111,    2, 0x06 /* Public */,
      11,    1,  114,    2, 0x06 /* Public */,
      12,    1,  117,    2, 0x06 /* Public */,
      14,    1,  120,    2, 0x06 /* Public */,
      16,    1,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  126,    2, 0x0a /* Public */,
      19,    0,  127,    2, 0x0a /* Public */,
      20,    0,  128,    2, 0x0a /* Public */,
      21,    1,  129,    2, 0x0a /* Public */,
      22,    1,  132,    2, 0x0a /* Public */,
      23,    1,  135,    2, 0x0a /* Public */,
      24,    1,  138,    2, 0x0a /* Public */,
      25,    1,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, QMetaType::QDateTime,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, QMetaType::QDateTime,   17,

       0        // eod
};

void WalletGui::Miner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Miner *_t = static_cast<Miner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChangedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->hashRateChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 2: _t->alternateHashRateChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 3: _t->difficultyChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->goodShareCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->goodAlternateShareCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->badShareCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->connectionErrorCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->lastConnectionErrorTimeChangedSignal((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 9: _t->started(); break;
        case 10: _t->stopped(); break;
        case 11: _t->socketError(); break;
        case 12: _t->difficultyChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 13: _t->goodShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 14: _t->badShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 15: _t->connectionErrorCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->lastConnectionErrorTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Miner::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::stateChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::hashRateChangedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::alternateHashRateChangedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::difficultyChangedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::goodShareCountChangedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::goodAlternateShareCountChangedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::badShareCountChangedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::connectionErrorCountChangedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Miner::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Miner::lastConnectionErrorTimeChangedSignal)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::Miner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__Miner.data,
      qt_meta_data_WalletGui__Miner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::Miner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::Miner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__Miner.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IPoolMiner"))
        return static_cast< IPoolMiner*>(this);
    if (!strcmp(_clname, "IPoolClientObserver"))
        return static_cast< IPoolClientObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::Miner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::Miner::stateChangedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::Miner::hashRateChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGui::Miner::alternateHashRateChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGui::Miner::difficultyChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::Miner::goodShareCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::Miner::goodAlternateShareCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGui::Miner::badShareCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGui::Miner::connectionErrorCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGui::Miner::lastConnectionErrorTimeChangedSignal(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
