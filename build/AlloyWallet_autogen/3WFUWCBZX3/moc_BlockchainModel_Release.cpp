/****************************************************************************
** Meta object code from reading C++ file 'BlockchainModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/BlockchainModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlockchainModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__BlockchainModel_t {
    QByteArrayData data[67];
    char stringdata0[1565];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__BlockchainModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__BlockchainModel_t qt_meta_stringdata_WalletGui__BlockchainModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "WalletGui::BlockchainModel"
QT_MOC_LITERAL(1, 27, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 7), // "_status"
QT_MOC_LITERAL(4, 67, 32), // "cryptoNoteAdapterDeinitCompleted"
QT_MOC_LITERAL(5, 100, 4), // "Type"
QT_MOC_LITERAL(6, 105, 10), // "TYPE_BLOCK"
QT_MOC_LITERAL(7, 116, 16), // "TYPE_TRANSACTION"
QT_MOC_LITERAL(8, 133, 7), // "Columns"
QT_MOC_LITERAL(9, 141, 17), // "COLUMN_BLOCK_TIME"
QT_MOC_LITERAL(10, 159, 19), // "COLUMN_BLOCK_HEIGHT"
QT_MOC_LITERAL(11, 179, 17), // "COLUMN_BLOCK_SIZE"
QT_MOC_LITERAL(12, 197, 30), // "COLUMN_BLOCK_TRANSACTION_COUNT"
QT_MOC_LITERAL(13, 228, 17), // "COLUMN_BLOCK_HASH"
QT_MOC_LITERAL(14, 246, 30), // "COLUMN_BLOCK_TRANSACTIONS_SIZE"
QT_MOC_LITERAL(15, 277, 23), // "COLUMN_BLOCK_DIFFICULTY"
QT_MOC_LITERAL(16, 301, 24), // "COLUMN_BLOCK_IS_ORPHANED"
QT_MOC_LITERAL(17, 326, 27), // "COLUMN_BLOCK_REWARD_PENALTY"
QT_MOC_LITERAL(18, 354, 24), // "COLUMN_BLOCK_BASE_REWARD"
QT_MOC_LITERAL(19, 379, 19), // "COLUMN_BLOCK_REWARD"
QT_MOC_LITERAL(20, 399, 29), // "COLUMN_BLOCK_TOTAL_COIN_COUNT"
QT_MOC_LITERAL(21, 429, 36), // "COLUMN_BLOCK_TOTAL_TRANSACTIO..."
QT_MOC_LITERAL(22, 466, 20), // "COLUMN_BLOCK_VERSION"
QT_MOC_LITERAL(23, 487, 16), // "COLUMN_BLOCK_FEE"
QT_MOC_LITERAL(24, 504, 32), // "COLUMN_TRANSACTION_OUTPUT_AMOUNT"
QT_MOC_LITERAL(25, 537, 23), // "COLUMN_TRANSACTION_HASH"
QT_MOC_LITERAL(26, 561, 23), // "COLUMN_TRANSACTION_SIZE"
QT_MOC_LITERAL(27, 585, 22), // "COLUMN_TRANSACTION_FEE"
QT_MOC_LITERAL(28, 608, 29), // "COLUMN_TRANSACTION_PAYMENT_ID"
QT_MOC_LITERAL(29, 638, 31), // "COLUMN_TRANSACTION_INPUT_AMOUNT"
QT_MOC_LITERAL(30, 670, 24), // "COLUMN_TRANSACTION_MIXIN"
QT_MOC_LITERAL(31, 695, 30), // "COLUMN_TRANSACTION_UNLOCK_TIME"
QT_MOC_LITERAL(32, 726, 23), // "COLUMN_TRANSACTION_TIME"
QT_MOC_LITERAL(33, 750, 35), // "COLUMN_TRANSACTION_IS_IN_BLOC..."
QT_MOC_LITERAL(34, 786, 29), // "COLUMN_TRANSACTION_BLOCK_HASH"
QT_MOC_LITERAL(35, 816, 31), // "COLUMN_TRANSACTION_BLOCK_HEIGHT"
QT_MOC_LITERAL(36, 848, 5), // "Roles"
QT_MOC_LITERAL(37, 854, 14), // "ROLE_ITEM_TYPE"
QT_MOC_LITERAL(38, 869, 17), // "ROLE_BLOCK_HEIGHT"
QT_MOC_LITERAL(39, 887, 15), // "ROLE_BLOCK_HASH"
QT_MOC_LITERAL(40, 903, 15), // "ROLE_BLOCK_TIME"
QT_MOC_LITERAL(41, 919, 21), // "ROLE_BLOCK_DIFFICULTY"
QT_MOC_LITERAL(42, 941, 22), // "ROLE_BLOCK_IS_ORPHANED"
QT_MOC_LITERAL(43, 964, 28), // "ROLE_BLOCK_TRANSACTION_COUNT"
QT_MOC_LITERAL(44, 993, 28), // "ROLE_BLOCK_TRANSACTIONS_SIZE"
QT_MOC_LITERAL(45, 1022, 15), // "ROLE_BLOCK_SIZE"
QT_MOC_LITERAL(46, 1038, 24), // "ROLE_BLOCK_MAJOR_VERSION"
QT_MOC_LITERAL(47, 1063, 24), // "ROLE_BLOCK_MINOR_VERSION"
QT_MOC_LITERAL(48, 1088, 27), // "ROLE_BLOCK_TOTAL_COIN_COUNT"
QT_MOC_LITERAL(49, 1116, 34), // "ROLE_BLOCK_TOTAL_TRANSACTION_..."
QT_MOC_LITERAL(50, 1151, 22), // "ROLE_BLOCK_BASE_REWARD"
QT_MOC_LITERAL(51, 1174, 25), // "ROLE_BLOCK_REWARD_PENALTY"
QT_MOC_LITERAL(52, 1200, 17), // "ROLE_BLOCK_REWARD"
QT_MOC_LITERAL(53, 1218, 14), // "ROLE_BLOCK_FEE"
QT_MOC_LITERAL(54, 1233, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(55, 1245, 21), // "ROLE_TRANSACTION_HASH"
QT_MOC_LITERAL(56, 1267, 21), // "ROLE_TRANSACTION_SIZE"
QT_MOC_LITERAL(57, 1289, 20), // "ROLE_TRANSACTION_FEE"
QT_MOC_LITERAL(58, 1310, 29), // "ROLE_TRANSACTION_INPUT_AMOUNT"
QT_MOC_LITERAL(59, 1340, 30), // "ROLE_TRANSACTION_OUTPUT_AMOUNT"
QT_MOC_LITERAL(60, 1371, 22), // "ROLE_TRANSACTION_MIXIN"
QT_MOC_LITERAL(61, 1394, 28), // "ROLE_TRANSACTION_UNLOCK_TIME"
QT_MOC_LITERAL(62, 1423, 21), // "ROLE_TRANSACTION_TIME"
QT_MOC_LITERAL(63, 1445, 27), // "ROLE_TRANSACTION_PAYMENT_ID"
QT_MOC_LITERAL(64, 1473, 33), // "ROLE_TRANSACTION_IS_IN_BLOCKC..."
QT_MOC_LITERAL(65, 1507, 27), // "ROLE_TRANSACTION_BLOCK_HASH"
QT_MOC_LITERAL(66, 1535, 29) // "ROLE_TRANSACTION_BLOCK_HEIGHT"

    },
    "WalletGui::BlockchainModel\0"
    "cryptoNoteAdapterInitCompleted\0\0_status\0"
    "cryptoNoteAdapterDeinitCompleted\0Type\0"
    "TYPE_BLOCK\0TYPE_TRANSACTION\0Columns\0"
    "COLUMN_BLOCK_TIME\0COLUMN_BLOCK_HEIGHT\0"
    "COLUMN_BLOCK_SIZE\0COLUMN_BLOCK_TRANSACTION_COUNT\0"
    "COLUMN_BLOCK_HASH\0COLUMN_BLOCK_TRANSACTIONS_SIZE\0"
    "COLUMN_BLOCK_DIFFICULTY\0"
    "COLUMN_BLOCK_IS_ORPHANED\0"
    "COLUMN_BLOCK_REWARD_PENALTY\0"
    "COLUMN_BLOCK_BASE_REWARD\0COLUMN_BLOCK_REWARD\0"
    "COLUMN_BLOCK_TOTAL_COIN_COUNT\0"
    "COLUMN_BLOCK_TOTAL_TRANSACTION_COUNT\0"
    "COLUMN_BLOCK_VERSION\0COLUMN_BLOCK_FEE\0"
    "COLUMN_TRANSACTION_OUTPUT_AMOUNT\0"
    "COLUMN_TRANSACTION_HASH\0COLUMN_TRANSACTION_SIZE\0"
    "COLUMN_TRANSACTION_FEE\0"
    "COLUMN_TRANSACTION_PAYMENT_ID\0"
    "COLUMN_TRANSACTION_INPUT_AMOUNT\0"
    "COLUMN_TRANSACTION_MIXIN\0"
    "COLUMN_TRANSACTION_UNLOCK_TIME\0"
    "COLUMN_TRANSACTION_TIME\0"
    "COLUMN_TRANSACTION_IS_IN_BLOCKCHAIN\0"
    "COLUMN_TRANSACTION_BLOCK_HASH\0"
    "COLUMN_TRANSACTION_BLOCK_HEIGHT\0Roles\0"
    "ROLE_ITEM_TYPE\0ROLE_BLOCK_HEIGHT\0"
    "ROLE_BLOCK_HASH\0ROLE_BLOCK_TIME\0"
    "ROLE_BLOCK_DIFFICULTY\0ROLE_BLOCK_IS_ORPHANED\0"
    "ROLE_BLOCK_TRANSACTION_COUNT\0"
    "ROLE_BLOCK_TRANSACTIONS_SIZE\0"
    "ROLE_BLOCK_SIZE\0ROLE_BLOCK_MAJOR_VERSION\0"
    "ROLE_BLOCK_MINOR_VERSION\0"
    "ROLE_BLOCK_TOTAL_COIN_COUNT\0"
    "ROLE_BLOCK_TOTAL_TRANSACTION_COUNT\0"
    "ROLE_BLOCK_BASE_REWARD\0ROLE_BLOCK_REWARD_PENALTY\0"
    "ROLE_BLOCK_REWARD\0ROLE_BLOCK_FEE\0"
    "ROLE_COLUMN\0ROLE_TRANSACTION_HASH\0"
    "ROLE_TRANSACTION_SIZE\0ROLE_TRANSACTION_FEE\0"
    "ROLE_TRANSACTION_INPUT_AMOUNT\0"
    "ROLE_TRANSACTION_OUTPUT_AMOUNT\0"
    "ROLE_TRANSACTION_MIXIN\0"
    "ROLE_TRANSACTION_UNLOCK_TIME\0"
    "ROLE_TRANSACTION_TIME\0ROLE_TRANSACTION_PAYMENT_ID\0"
    "ROLE_TRANSACTION_IS_IN_BLOCKCHAIN\0"
    "ROLE_TRANSACTION_BLOCK_HASH\0"
    "ROLE_TRANSACTION_BLOCK_HEIGHT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__BlockchainModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       3,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // enums: name, flags, count, data
       5, 0x0,    2,   40,
       8, 0x0,   27,   44,
      36, 0x0,   30,   98,

 // enum data: key, value
       6, uint(WalletGui::BlockchainModel::TYPE_BLOCK),
       7, uint(WalletGui::BlockchainModel::TYPE_TRANSACTION),
       9, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_TIME),
      10, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_HEIGHT),
      11, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_SIZE),
      12, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_TRANSACTION_COUNT),
      13, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_HASH),
      14, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_TRANSACTIONS_SIZE),
      15, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_DIFFICULTY),
      16, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_IS_ORPHANED),
      17, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_REWARD_PENALTY),
      18, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_BASE_REWARD),
      19, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_REWARD),
      20, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_TOTAL_COIN_COUNT),
      21, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_TOTAL_TRANSACTION_COUNT),
      22, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_VERSION),
      23, uint(WalletGui::BlockchainModel::COLUMN_BLOCK_FEE),
      24, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_OUTPUT_AMOUNT),
      25, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_HASH),
      26, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_SIZE),
      27, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_FEE),
      28, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_PAYMENT_ID),
      29, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_INPUT_AMOUNT),
      30, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_MIXIN),
      31, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_UNLOCK_TIME),
      32, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_TIME),
      33, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_IS_IN_BLOCKCHAIN),
      34, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_BLOCK_HASH),
      35, uint(WalletGui::BlockchainModel::COLUMN_TRANSACTION_BLOCK_HEIGHT),
      37, uint(WalletGui::BlockchainModel::ROLE_ITEM_TYPE),
      38, uint(WalletGui::BlockchainModel::ROLE_BLOCK_HEIGHT),
      39, uint(WalletGui::BlockchainModel::ROLE_BLOCK_HASH),
      40, uint(WalletGui::BlockchainModel::ROLE_BLOCK_TIME),
      41, uint(WalletGui::BlockchainModel::ROLE_BLOCK_DIFFICULTY),
      42, uint(WalletGui::BlockchainModel::ROLE_BLOCK_IS_ORPHANED),
      43, uint(WalletGui::BlockchainModel::ROLE_BLOCK_TRANSACTION_COUNT),
      44, uint(WalletGui::BlockchainModel::ROLE_BLOCK_TRANSACTIONS_SIZE),
      45, uint(WalletGui::BlockchainModel::ROLE_BLOCK_SIZE),
      46, uint(WalletGui::BlockchainModel::ROLE_BLOCK_MAJOR_VERSION),
      47, uint(WalletGui::BlockchainModel::ROLE_BLOCK_MINOR_VERSION),
      48, uint(WalletGui::BlockchainModel::ROLE_BLOCK_TOTAL_COIN_COUNT),
      49, uint(WalletGui::BlockchainModel::ROLE_BLOCK_TOTAL_TRANSACTION_COUNT),
      50, uint(WalletGui::BlockchainModel::ROLE_BLOCK_BASE_REWARD),
      51, uint(WalletGui::BlockchainModel::ROLE_BLOCK_REWARD_PENALTY),
      52, uint(WalletGui::BlockchainModel::ROLE_BLOCK_REWARD),
      53, uint(WalletGui::BlockchainModel::ROLE_BLOCK_FEE),
      54, uint(WalletGui::BlockchainModel::ROLE_COLUMN),
      55, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_HASH),
      56, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_SIZE),
      57, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_FEE),
      58, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_INPUT_AMOUNT),
      59, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_OUTPUT_AMOUNT),
      60, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_MIXIN),
      61, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_UNLOCK_TIME),
      62, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_TIME),
      63, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_PAYMENT_ID),
      64, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_IS_IN_BLOCKCHAIN),
      65, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_BLOCK_HASH),
      66, uint(WalletGui::BlockchainModel::ROLE_TRANSACTION_BLOCK_HEIGHT),

       0        // eod
};

void WalletGui::BlockchainModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockchainModel *_t = static_cast<BlockchainModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cryptoNoteAdapterDeinitCompleted(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::BlockchainModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__BlockchainModel.data,
      qt_meta_data_WalletGui__BlockchainModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::BlockchainModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::BlockchainModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__BlockchainModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::BlockchainModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
