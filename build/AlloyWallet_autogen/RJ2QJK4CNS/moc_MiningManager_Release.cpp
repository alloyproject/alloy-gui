/****************************************************************************
** Meta object code from reading C++ file 'MiningManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Application/MiningManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MiningManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__MiningManager_t {
    QByteArrayData data[51];
    char stringdata0[1069];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__MiningManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__MiningManager_t qt_meta_stringdata_WalletGui__MiningManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::MiningManager"
QT_MOC_LITERAL(1, 25, 18), // "minersLoadedSignal"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "minersUnloadedSignal"
QT_MOC_LITERAL(4, 66, 19), // "miningStartedSignal"
QT_MOC_LITERAL(5, 86, 19), // "miningStoppedSignal"
QT_MOC_LITERAL(6, 106, 24), // "activeMinerChangedSignal"
QT_MOC_LITERAL(7, 131, 8), // "quintptr"
QT_MOC_LITERAL(8, 140, 11), // "_minerIndex"
QT_MOC_LITERAL(9, 152, 27), // "schedulePolicyChangedSignal"
QT_MOC_LITERAL(10, 180, 15), // "_schedulePolicy"
QT_MOC_LITERAL(11, 196, 25), // "cpuCoreCountChangedSignal"
QT_MOC_LITERAL(12, 222, 13), // "_cpuCoreCount"
QT_MOC_LITERAL(13, 236, 16), // "minerAddedSignal"
QT_MOC_LITERAL(14, 253, 18), // "minerRemovedSignal"
QT_MOC_LITERAL(15, 272, 18), // "stateChangedSignal"
QT_MOC_LITERAL(16, 291, 9), // "_newState"
QT_MOC_LITERAL(17, 301, 21), // "hashRateChangedSignal"
QT_MOC_LITERAL(18, 323, 9), // "_hashRate"
QT_MOC_LITERAL(19, 333, 30), // "alternateHashRateChangedSignal"
QT_MOC_LITERAL(20, 364, 23), // "difficultyChangedSignal"
QT_MOC_LITERAL(21, 388, 11), // "_difficulty"
QT_MOC_LITERAL(22, 400, 27), // "goodShareCountChangedSignal"
QT_MOC_LITERAL(23, 428, 15), // "_goodShareCount"
QT_MOC_LITERAL(24, 444, 36), // "goodAlternateShareCountChange..."
QT_MOC_LITERAL(25, 481, 26), // "badShareCountChangedSignal"
QT_MOC_LITERAL(26, 508, 14), // "_badShareCount"
QT_MOC_LITERAL(27, 523, 33), // "connectionErrorCountChangedSi..."
QT_MOC_LITERAL(28, 557, 21), // "_connectionErrorCount"
QT_MOC_LITERAL(29, 579, 36), // "lastConnectionErrorTimeChange..."
QT_MOC_LITERAL(30, 616, 24), // "_lastConnectionErrorTime"
QT_MOC_LITERAL(31, 641, 12), // "stateChanged"
QT_MOC_LITERAL(32, 654, 15), // "hashRateChanged"
QT_MOC_LITERAL(33, 670, 24), // "alternateHashRateChanged"
QT_MOC_LITERAL(34, 695, 17), // "difficultyChanged"
QT_MOC_LITERAL(35, 713, 21), // "goodShareCountChanged"
QT_MOC_LITERAL(36, 735, 30), // "goodAlternateShareCountChanged"
QT_MOC_LITERAL(37, 766, 20), // "badShareCountChanged"
QT_MOC_LITERAL(38, 787, 27), // "connectionErrorCountChanged"
QT_MOC_LITERAL(39, 815, 30), // "lastConnectionErrorTimeChanged"
QT_MOC_LITERAL(40, 846, 21), // "donationManagerOpened"
QT_MOC_LITERAL(41, 868, 21), // "donationManagerClosed"
QT_MOC_LITERAL(42, 890, 21), // "donationMiningEnabled"
QT_MOC_LITERAL(43, 912, 3), // "_on"
QT_MOC_LITERAL(44, 916, 28), // "donationMiningAddressChanged"
QT_MOC_LITERAL(45, 945, 8), // "_address"
QT_MOC_LITERAL(46, 954, 27), // "donationMiningAmountChanged"
QT_MOC_LITERAL(47, 982, 7), // "_amount"
QT_MOC_LITERAL(48, 990, 21), // "donationChangeEnabled"
QT_MOC_LITERAL(49, 1012, 28), // "donationChangeAddressChanged"
QT_MOC_LITERAL(50, 1041, 27) // "donationChangeAmountChanged"

    },
    "WalletGui::MiningManager\0minersLoadedSignal\0"
    "\0minersUnloadedSignal\0miningStartedSignal\0"
    "miningStoppedSignal\0activeMinerChangedSignal\0"
    "quintptr\0_minerIndex\0schedulePolicyChangedSignal\0"
    "_schedulePolicy\0cpuCoreCountChangedSignal\0"
    "_cpuCoreCount\0minerAddedSignal\0"
    "minerRemovedSignal\0stateChangedSignal\0"
    "_newState\0hashRateChangedSignal\0"
    "_hashRate\0alternateHashRateChangedSignal\0"
    "difficultyChangedSignal\0_difficulty\0"
    "goodShareCountChangedSignal\0_goodShareCount\0"
    "goodAlternateShareCountChangedSignal\0"
    "badShareCountChangedSignal\0_badShareCount\0"
    "connectionErrorCountChangedSignal\0"
    "_connectionErrorCount\0"
    "lastConnectionErrorTimeChangedSignal\0"
    "_lastConnectionErrorTime\0stateChanged\0"
    "hashRateChanged\0alternateHashRateChanged\0"
    "difficultyChanged\0goodShareCountChanged\0"
    "goodAlternateShareCountChanged\0"
    "badShareCountChanged\0connectionErrorCountChanged\0"
    "lastConnectionErrorTimeChanged\0"
    "donationManagerOpened\0donationManagerClosed\0"
    "donationMiningEnabled\0_on\0"
    "donationMiningAddressChanged\0_address\0"
    "donationMiningAmountChanged\0_amount\0"
    "donationChangeEnabled\0"
    "donationChangeAddressChanged\0"
    "donationChangeAmountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__MiningManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x06 /* Public */,
       3,    0,  190,    2, 0x06 /* Public */,
       4,    0,  191,    2, 0x06 /* Public */,
       5,    0,  192,    2, 0x06 /* Public */,
       6,    1,  193,    2, 0x06 /* Public */,
       9,    1,  196,    2, 0x06 /* Public */,
      11,    1,  199,    2, 0x06 /* Public */,
      13,    1,  202,    2, 0x06 /* Public */,
      14,    1,  205,    2, 0x06 /* Public */,
      15,    2,  208,    2, 0x06 /* Public */,
      17,    2,  213,    2, 0x06 /* Public */,
      19,    2,  218,    2, 0x06 /* Public */,
      20,    2,  223,    2, 0x06 /* Public */,
      22,    2,  228,    2, 0x06 /* Public */,
      24,    2,  233,    2, 0x06 /* Public */,
      25,    2,  238,    2, 0x06 /* Public */,
      27,    2,  243,    2, 0x06 /* Public */,
      29,    2,  248,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  253,    2, 0x0a /* Public */,
      32,    1,  256,    2, 0x0a /* Public */,
      33,    1,  259,    2, 0x0a /* Public */,
      34,    1,  262,    2, 0x0a /* Public */,
      35,    1,  265,    2, 0x0a /* Public */,
      36,    1,  268,    2, 0x0a /* Public */,
      37,    1,  271,    2, 0x0a /* Public */,
      38,    1,  274,    2, 0x0a /* Public */,
      39,    1,  277,    2, 0x0a /* Public */,
      40,    0,  280,    2, 0x0a /* Public */,
      41,    0,  281,    2, 0x0a /* Public */,
      42,    1,  282,    2, 0x0a /* Public */,
      44,    1,  285,    2, 0x0a /* Public */,
      46,    1,  288,    2, 0x0a /* Public */,
      48,    1,  291,    2, 0x0a /* Public */,
      49,    1,  294,    2, 0x0a /* Public */,
      50,    1,  297,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,   16,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   18,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   18,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   21,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   23,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   23,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   26,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,   28,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QDateTime,    8,   30,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::UInt,   18,
    QMetaType::Void, QMetaType::UInt,   18,
    QMetaType::Void, QMetaType::UInt,   21,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::UInt,   23,
    QMetaType::Void, QMetaType::UInt,   26,
    QMetaType::Void, QMetaType::UInt,   28,
    QMetaType::Void, QMetaType::QDateTime,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::Int,   47,

       0        // eod
};

void WalletGui::MiningManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MiningManager *_t = static_cast<MiningManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minersLoadedSignal(); break;
        case 1: _t->minersUnloadedSignal(); break;
        case 2: _t->miningStartedSignal(); break;
        case 3: _t->miningStoppedSignal(); break;
        case 4: _t->activeMinerChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 5: _t->schedulePolicyChangedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cpuCoreCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->minerAddedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 8: _t->minerRemovedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 9: _t->stateChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->hashRateChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 11: _t->alternateHashRateChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 12: _t->difficultyChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 13: _t->goodShareCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 14: _t->goodAlternateShareCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 15: _t->badShareCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 16: _t->connectionErrorCountChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 17: _t->lastConnectionErrorTimeChangedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 18: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->hashRateChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 20: _t->alternateHashRateChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 21: _t->difficultyChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 22: _t->goodShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 23: _t->goodAlternateShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 24: _t->badShareCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 25: _t->connectionErrorCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 26: _t->lastConnectionErrorTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 27: _t->donationManagerOpened(); break;
        case 28: _t->donationManagerClosed(); break;
        case 29: _t->donationMiningEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->donationMiningAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->donationMiningAmountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->donationChangeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->donationChangeAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->donationChangeAmountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::minersLoadedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::minersUnloadedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::miningStartedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::miningStoppedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::activeMinerChangedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::schedulePolicyChangedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::cpuCoreCountChangedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::minerAddedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::minerRemovedSignal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::stateChangedSignal)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::hashRateChangedSignal)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::alternateHashRateChangedSignal)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::difficultyChangedSignal)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::goodShareCountChangedSignal)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::goodAlternateShareCountChangedSignal)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::badShareCountChangedSignal)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::connectionErrorCountChangedSignal)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MiningManager::*_t)(quintptr , const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MiningManager::lastConnectionErrorTimeChangedSignal)) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::MiningManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__MiningManager.data,
      qt_meta_data_WalletGui__MiningManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::MiningManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::MiningManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__MiningManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IMiningManager"))
        return static_cast< IMiningManager*>(this);
    if (!strcmp(_clname, "IPoolMinerObserver"))
        return static_cast< IPoolMinerObserver*>(this);
    if (!strcmp(_clname, "IDonationManagerObserver"))
        return static_cast< IDonationManagerObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::MiningManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::MiningManager::minersLoadedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGui::MiningManager::minersUnloadedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::MiningManager::miningStartedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletGui::MiningManager::miningStoppedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WalletGui::MiningManager::activeMinerChangedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::MiningManager::schedulePolicyChangedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGui::MiningManager::cpuCoreCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGui::MiningManager::minerAddedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGui::MiningManager::minerRemovedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGui::MiningManager::stateChangedSignal(quintptr _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletGui::MiningManager::hashRateChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WalletGui::MiningManager::alternateHashRateChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WalletGui::MiningManager::difficultyChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WalletGui::MiningManager::goodShareCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WalletGui::MiningManager::goodAlternateShareCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void WalletGui::MiningManager::badShareCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WalletGui::MiningManager::connectionErrorCountChangedSignal(quintptr _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WalletGui::MiningManager::lastConnectionErrorTimeChangedSignal(quintptr _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
