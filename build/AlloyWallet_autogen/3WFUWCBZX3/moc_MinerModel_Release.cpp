/****************************************************************************
** Meta object code from reading C++ file 'MinerModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/MinerModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MinerModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__MinerModel_t {
    QByteArrayData data[55];
    char stringdata0[980];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__MinerModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__MinerModel_t qt_meta_stringdata_WalletGui__MinerModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WalletGui::MinerModel"
QT_MOC_LITERAL(1, 22, 12), // "minersLoaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "minersUnloaded"
QT_MOC_LITERAL(4, 51, 13), // "miningStarted"
QT_MOC_LITERAL(5, 65, 13), // "miningStopped"
QT_MOC_LITERAL(6, 79, 18), // "activeMinerChanged"
QT_MOC_LITERAL(7, 98, 8), // "quintptr"
QT_MOC_LITERAL(8, 107, 11), // "_minerIndex"
QT_MOC_LITERAL(9, 119, 21), // "schedulePolicyChanged"
QT_MOC_LITERAL(10, 141, 15), // "_schedulePolicy"
QT_MOC_LITERAL(11, 157, 19), // "cpuCoreCountChanged"
QT_MOC_LITERAL(12, 177, 13), // "_cpuCoreCount"
QT_MOC_LITERAL(13, 191, 10), // "minerAdded"
QT_MOC_LITERAL(14, 202, 12), // "minerRemoved"
QT_MOC_LITERAL(15, 215, 12), // "stateChanged"
QT_MOC_LITERAL(16, 228, 9), // "_newState"
QT_MOC_LITERAL(17, 238, 15), // "hashRateChanged"
QT_MOC_LITERAL(18, 254, 9), // "_hashRate"
QT_MOC_LITERAL(19, 264, 24), // "alternateHashRateChanged"
QT_MOC_LITERAL(20, 289, 17), // "difficultyChanged"
QT_MOC_LITERAL(21, 307, 11), // "_difficulty"
QT_MOC_LITERAL(22, 319, 21), // "goodShareCountChanged"
QT_MOC_LITERAL(23, 341, 15), // "_goodShareCount"
QT_MOC_LITERAL(24, 357, 30), // "goodAlternateShareCountChanged"
QT_MOC_LITERAL(25, 388, 20), // "badShareCountChanged"
QT_MOC_LITERAL(26, 409, 14), // "_badShareCount"
QT_MOC_LITERAL(27, 424, 27), // "connectionErrorCountChanged"
QT_MOC_LITERAL(28, 452, 21), // "_connectionErrorCount"
QT_MOC_LITERAL(29, 474, 30), // "lastConnectionErrorTimeChanged"
QT_MOC_LITERAL(30, 505, 24), // "_lastConnectionErrorTime"
QT_MOC_LITERAL(31, 530, 7), // "Columns"
QT_MOC_LITERAL(32, 538, 15), // "COLUMN_POOL_URL"
QT_MOC_LITERAL(33, 554, 17), // "COLUMN_DIFFICULTY"
QT_MOC_LITERAL(34, 572, 18), // "COLUMN_GOOD_SHARES"
QT_MOC_LITERAL(35, 591, 17), // "COLUMN_BAD_SHARES"
QT_MOC_LITERAL(36, 609, 21), // "COLUMN_DONATED_SHARES"
QT_MOC_LITERAL(37, 631, 29), // "COLUMN_CONNECTION_ERROR_COUNT"
QT_MOC_LITERAL(38, 661, 33), // "COLUMN_LAST_CONNECTION_ERROR_..."
QT_MOC_LITERAL(39, 695, 13), // "COLUMN_REMOVE"
QT_MOC_LITERAL(40, 709, 15), // "COLUMN_HASHRATE"
QT_MOC_LITERAL(41, 725, 24), // "COLUMN_DONATION_HASHRATE"
QT_MOC_LITERAL(42, 750, 5), // "Roles"
QT_MOC_LITERAL(43, 756, 14), // "ROLE_POOL_HOST"
QT_MOC_LITERAL(44, 771, 14), // "ROLE_POOL_PORT"
QT_MOC_LITERAL(45, 786, 15), // "ROLE_DIFFICULTY"
QT_MOC_LITERAL(46, 802, 16), // "ROLE_GOOD_SHARES"
QT_MOC_LITERAL(47, 819, 15), // "ROLE_BAD_SHARES"
QT_MOC_LITERAL(48, 835, 19), // "ROLE_DONATED_SHARES"
QT_MOC_LITERAL(49, 855, 27), // "ROLE_CONNECTION_ERROR_COUNT"
QT_MOC_LITERAL(50, 883, 31), // "ROLE_LAST_CONNECTION_ERROR_TIME"
QT_MOC_LITERAL(51, 915, 10), // "ROLE_STATE"
QT_MOC_LITERAL(52, 926, 16), // "ROLE_START_MINER"
QT_MOC_LITERAL(53, 943, 13), // "ROLE_HASHRATE"
QT_MOC_LITERAL(54, 957, 22) // "ROLE_DONATION_HASHRATE"

    },
    "WalletGui::MinerModel\0minersLoaded\0\0"
    "minersUnloaded\0miningStarted\0miningStopped\0"
    "activeMinerChanged\0quintptr\0_minerIndex\0"
    "schedulePolicyChanged\0_schedulePolicy\0"
    "cpuCoreCountChanged\0_cpuCoreCount\0"
    "minerAdded\0minerRemoved\0stateChanged\0"
    "_newState\0hashRateChanged\0_hashRate\0"
    "alternateHashRateChanged\0difficultyChanged\0"
    "_difficulty\0goodShareCountChanged\0"
    "_goodShareCount\0goodAlternateShareCountChanged\0"
    "badShareCountChanged\0_badShareCount\0"
    "connectionErrorCountChanged\0"
    "_connectionErrorCount\0"
    "lastConnectionErrorTimeChanged\0"
    "_lastConnectionErrorTime\0Columns\0"
    "COLUMN_POOL_URL\0COLUMN_DIFFICULTY\0"
    "COLUMN_GOOD_SHARES\0COLUMN_BAD_SHARES\0"
    "COLUMN_DONATED_SHARES\0"
    "COLUMN_CONNECTION_ERROR_COUNT\0"
    "COLUMN_LAST_CONNECTION_ERROR_TIME\0"
    "COLUMN_REMOVE\0COLUMN_HASHRATE\0"
    "COLUMN_DONATION_HASHRATE\0Roles\0"
    "ROLE_POOL_HOST\0ROLE_POOL_PORT\0"
    "ROLE_DIFFICULTY\0ROLE_GOOD_SHARES\0"
    "ROLE_BAD_SHARES\0ROLE_DONATED_SHARES\0"
    "ROLE_CONNECTION_ERROR_COUNT\0"
    "ROLE_LAST_CONNECTION_ERROR_TIME\0"
    "ROLE_STATE\0ROLE_START_MINER\0ROLE_HASHRATE\0"
    "ROLE_DONATION_HASHRATE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__MinerModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       2,  168, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    1,  108,    2, 0x0a /* Public */,
       9,    1,  111,    2, 0x0a /* Public */,
      11,    1,  114,    2, 0x0a /* Public */,
      13,    1,  117,    2, 0x0a /* Public */,
      14,    1,  120,    2, 0x0a /* Public */,
      15,    2,  123,    2, 0x0a /* Public */,
      17,    2,  128,    2, 0x0a /* Public */,
      19,    2,  133,    2, 0x0a /* Public */,
      20,    2,  138,    2, 0x0a /* Public */,
      22,    2,  143,    2, 0x0a /* Public */,
      24,    2,  148,    2, 0x0a /* Public */,
      25,    2,  153,    2, 0x0a /* Public */,
      27,    2,  158,    2, 0x0a /* Public */,
      29,    2,  163,    2, 0x0a /* Public */,

 // slots: parameters
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

 // enums: name, flags, count, data
      31, 0x0,   10,  176,
      42, 0x0,   12,  196,

 // enum data: key, value
      32, uint(WalletGui::MinerModel::COLUMN_POOL_URL),
      33, uint(WalletGui::MinerModel::COLUMN_DIFFICULTY),
      34, uint(WalletGui::MinerModel::COLUMN_GOOD_SHARES),
      35, uint(WalletGui::MinerModel::COLUMN_BAD_SHARES),
      36, uint(WalletGui::MinerModel::COLUMN_DONATED_SHARES),
      37, uint(WalletGui::MinerModel::COLUMN_CONNECTION_ERROR_COUNT),
      38, uint(WalletGui::MinerModel::COLUMN_LAST_CONNECTION_ERROR_TIME),
      39, uint(WalletGui::MinerModel::COLUMN_REMOVE),
      40, uint(WalletGui::MinerModel::COLUMN_HASHRATE),
      41, uint(WalletGui::MinerModel::COLUMN_DONATION_HASHRATE),
      43, uint(WalletGui::MinerModel::ROLE_POOL_HOST),
      44, uint(WalletGui::MinerModel::ROLE_POOL_PORT),
      45, uint(WalletGui::MinerModel::ROLE_DIFFICULTY),
      46, uint(WalletGui::MinerModel::ROLE_GOOD_SHARES),
      47, uint(WalletGui::MinerModel::ROLE_BAD_SHARES),
      48, uint(WalletGui::MinerModel::ROLE_DONATED_SHARES),
      49, uint(WalletGui::MinerModel::ROLE_CONNECTION_ERROR_COUNT),
      50, uint(WalletGui::MinerModel::ROLE_LAST_CONNECTION_ERROR_TIME),
      51, uint(WalletGui::MinerModel::ROLE_STATE),
      52, uint(WalletGui::MinerModel::ROLE_START_MINER),
      53, uint(WalletGui::MinerModel::ROLE_HASHRATE),
      54, uint(WalletGui::MinerModel::ROLE_DONATION_HASHRATE),

       0        // eod
};

void WalletGui::MinerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MinerModel *_t = static_cast<MinerModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minersLoaded(); break;
        case 1: _t->minersUnloaded(); break;
        case 2: _t->miningStarted(); break;
        case 3: _t->miningStopped(); break;
        case 4: _t->activeMinerChanged((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 5: _t->schedulePolicyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cpuCoreCountChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->minerAdded((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 8: _t->minerRemoved((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 9: _t->stateChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->hashRateChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 11: _t->alternateHashRateChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 12: _t->difficultyChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 13: _t->goodShareCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 14: _t->goodAlternateShareCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 15: _t->badShareCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 16: _t->connectionErrorCountChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 17: _t->lastConnectionErrorTimeChanged((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::MinerModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__MinerModel.data,
      qt_meta_data_WalletGui__MinerModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::MinerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::MinerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__MinerModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IMinerManagerObserver"))
        return static_cast< IMinerManagerObserver*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::MinerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
