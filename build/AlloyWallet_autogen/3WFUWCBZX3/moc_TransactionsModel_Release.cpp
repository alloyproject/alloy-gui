/****************************************************************************
** Meta object code from reading C++ file 'TransactionsModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/TransactionsModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransactionsModel_t {
    QByteArrayData data[57];
    char stringdata0[925];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransactionsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransactionsModel_t qt_meta_stringdata_WalletGui__TransactionsModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGui::TransactionsModel"
QT_MOC_LITERAL(1, 29, 12), // "walletOpened"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "walletOpenError"
QT_MOC_LITERAL(4, 59, 11), // "_initStatus"
QT_MOC_LITERAL(5, 71, 12), // "walletClosed"
QT_MOC_LITERAL(6, 84, 15), // "passwordChanged"
QT_MOC_LITERAL(7, 100, 30), // "synchronizationProgressUpdated"
QT_MOC_LITERAL(8, 131, 8), // "_current"
QT_MOC_LITERAL(9, 140, 6), // "_total"
QT_MOC_LITERAL(10, 147, 24), // "synchronizationCompleted"
QT_MOC_LITERAL(11, 172, 14), // "balanceUpdated"
QT_MOC_LITERAL(12, 187, 14), // "_actualBalance"
QT_MOC_LITERAL(13, 202, 15), // "_pendingBalance"
QT_MOC_LITERAL(14, 218, 26), // "externalTransactionCreated"
QT_MOC_LITERAL(15, 245, 8), // "quintptr"
QT_MOC_LITERAL(16, 254, 17), // "_transactionIndex"
QT_MOC_LITERAL(17, 272, 19), // "FullTransactionInfo"
QT_MOC_LITERAL(18, 292, 12), // "_transaction"
QT_MOC_LITERAL(19, 305, 18), // "transactionUpdated"
QT_MOC_LITERAL(20, 324, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(21, 355, 7), // "_status"
QT_MOC_LITERAL(22, 363, 32), // "cryptoNoteAdapterDeinitCompleted"
QT_MOC_LITERAL(23, 396, 35), // "fusionTransactionsVisibilityC..."
QT_MOC_LITERAL(24, 432, 10), // "_isVisible"
QT_MOC_LITERAL(25, 443, 25), // "showAllCachedTransactions"
QT_MOC_LITERAL(26, 469, 17), // "updateTransaction"
QT_MOC_LITERAL(27, 487, 7), // "Columns"
QT_MOC_LITERAL(28, 495, 22), // "COLUMN_NEW_TRANSACTION"
QT_MOC_LITERAL(29, 518, 11), // "COLUMN_TIME"
QT_MOC_LITERAL(30, 530, 11), // "COLUMN_HASH"
QT_MOC_LITERAL(31, 542, 13), // "COLUMN_AMOUNT"
QT_MOC_LITERAL(32, 556, 16), // "COLUMN_TRANSFERS"
QT_MOC_LITERAL(33, 573, 17), // "COLUMN_PAYMENT_ID"
QT_MOC_LITERAL(34, 591, 11), // "COLUMN_TYPE"
QT_MOC_LITERAL(35, 603, 13), // "COLUMN_HEIGHT"
QT_MOC_LITERAL(36, 617, 10), // "COLUMN_FEE"
QT_MOC_LITERAL(37, 628, 12), // "COLUMN_STATE"
QT_MOC_LITERAL(38, 641, 21), // "COLUMN_SHOW_TRANSFERS"
QT_MOC_LITERAL(39, 663, 5), // "Roles"
QT_MOC_LITERAL(40, 669, 9), // "ROLE_TIME"
QT_MOC_LITERAL(41, 679, 13), // "ROLE_RAW_TIME"
QT_MOC_LITERAL(42, 693, 9), // "ROLE_TYPE"
QT_MOC_LITERAL(43, 703, 9), // "ROLE_HASH"
QT_MOC_LITERAL(44, 713, 19), // "ROLE_TRANSFER_COUNT"
QT_MOC_LITERAL(45, 733, 11), // "ROLE_AMOUNT"
QT_MOC_LITERAL(46, 745, 15), // "ROLE_PAYMENT_ID"
QT_MOC_LITERAL(47, 761, 19), // "ROLE_TRANSACTION_ID"
QT_MOC_LITERAL(48, 781, 11), // "ROLE_HEIGHT"
QT_MOC_LITERAL(49, 793, 8), // "ROLE_FEE"
QT_MOC_LITERAL(50, 802, 28), // "ROLE_NUMBER_OF_CONFIRMATIONS"
QT_MOC_LITERAL(51, 831, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(52, 843, 8), // "ROLE_ROW"
QT_MOC_LITERAL(53, 852, 10), // "ROLE_STATE"
QT_MOC_LITERAL(54, 863, 26), // "ROLE_IS_FUSION_TRANSACTION"
QT_MOC_LITERAL(55, 890, 19), // "ROLE_SHOW_TRANSFERS"
QT_MOC_LITERAL(56, 910, 14) // "ROLE_TRANSFERS"

    },
    "WalletGui::TransactionsModel\0walletOpened\0"
    "\0walletOpenError\0_initStatus\0walletClosed\0"
    "passwordChanged\0synchronizationProgressUpdated\0"
    "_current\0_total\0synchronizationCompleted\0"
    "balanceUpdated\0_actualBalance\0"
    "_pendingBalance\0externalTransactionCreated\0"
    "quintptr\0_transactionIndex\0"
    "FullTransactionInfo\0_transaction\0"
    "transactionUpdated\0cryptoNoteAdapterInitCompleted\0"
    "_status\0cryptoNoteAdapterDeinitCompleted\0"
    "fusionTransactionsVisibilityChanged\0"
    "_isVisible\0showAllCachedTransactions\0"
    "updateTransaction\0Columns\0"
    "COLUMN_NEW_TRANSACTION\0COLUMN_TIME\0"
    "COLUMN_HASH\0COLUMN_AMOUNT\0COLUMN_TRANSFERS\0"
    "COLUMN_PAYMENT_ID\0COLUMN_TYPE\0"
    "COLUMN_HEIGHT\0COLUMN_FEE\0COLUMN_STATE\0"
    "COLUMN_SHOW_TRANSFERS\0Roles\0ROLE_TIME\0"
    "ROLE_RAW_TIME\0ROLE_TYPE\0ROLE_HASH\0"
    "ROLE_TRANSFER_COUNT\0ROLE_AMOUNT\0"
    "ROLE_PAYMENT_ID\0ROLE_TRANSACTION_ID\0"
    "ROLE_HEIGHT\0ROLE_FEE\0ROLE_NUMBER_OF_CONFIRMATIONS\0"
    "ROLE_COLUMN\0ROLE_ROW\0ROLE_STATE\0"
    "ROLE_IS_FUSION_TRANSACTION\0"
    "ROLE_SHOW_TRANSFERS\0ROLE_TRANSFERS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransactionsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       2,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x0a /* Public */,
       5,    0,   88,    2, 0x0a /* Public */,
       6,    0,   89,    2, 0x0a /* Public */,
       7,    2,   90,    2, 0x0a /* Public */,
      10,    0,   95,    2, 0x0a /* Public */,
      11,    2,   96,    2, 0x0a /* Public */,
      14,    2,  101,    2, 0x0a /* Public */,
      19,    2,  106,    2, 0x0a /* Public */,
      20,    1,  111,    2, 0x0a /* Public */,
      22,    0,  114,    2, 0x0a /* Public */,
      23,    1,  115,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      25,    0,  118,    2, 0x00 /* Private */,
      26,    2,  119,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,

 // enums: name, flags, count, data
      27, 0x0,   11,  132,
      39, 0x0,   17,  154,

 // enum data: key, value
      28, uint(WalletGui::TransactionsModel::COLUMN_NEW_TRANSACTION),
      29, uint(WalletGui::TransactionsModel::COLUMN_TIME),
      30, uint(WalletGui::TransactionsModel::COLUMN_HASH),
      31, uint(WalletGui::TransactionsModel::COLUMN_AMOUNT),
      32, uint(WalletGui::TransactionsModel::COLUMN_TRANSFERS),
      33, uint(WalletGui::TransactionsModel::COLUMN_PAYMENT_ID),
      34, uint(WalletGui::TransactionsModel::COLUMN_TYPE),
      35, uint(WalletGui::TransactionsModel::COLUMN_HEIGHT),
      36, uint(WalletGui::TransactionsModel::COLUMN_FEE),
      37, uint(WalletGui::TransactionsModel::COLUMN_STATE),
      38, uint(WalletGui::TransactionsModel::COLUMN_SHOW_TRANSFERS),
      40, uint(WalletGui::TransactionsModel::ROLE_TIME),
      41, uint(WalletGui::TransactionsModel::ROLE_RAW_TIME),
      42, uint(WalletGui::TransactionsModel::ROLE_TYPE),
      43, uint(WalletGui::TransactionsModel::ROLE_HASH),
      44, uint(WalletGui::TransactionsModel::ROLE_TRANSFER_COUNT),
      45, uint(WalletGui::TransactionsModel::ROLE_AMOUNT),
      46, uint(WalletGui::TransactionsModel::ROLE_PAYMENT_ID),
      47, uint(WalletGui::TransactionsModel::ROLE_TRANSACTION_ID),
      48, uint(WalletGui::TransactionsModel::ROLE_HEIGHT),
      49, uint(WalletGui::TransactionsModel::ROLE_FEE),
      50, uint(WalletGui::TransactionsModel::ROLE_NUMBER_OF_CONFIRMATIONS),
      51, uint(WalletGui::TransactionsModel::ROLE_COLUMN),
      52, uint(WalletGui::TransactionsModel::ROLE_ROW),
      53, uint(WalletGui::TransactionsModel::ROLE_STATE),
      54, uint(WalletGui::TransactionsModel::ROLE_IS_FUSION_TRANSACTION),
      55, uint(WalletGui::TransactionsModel::ROLE_SHOW_TRANSFERS),
      56, uint(WalletGui::TransactionsModel::ROLE_TRANSFERS),

       0        // eod
};

void WalletGui::TransactionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionsModel *_t = static_cast<TransactionsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletOpened(); break;
        case 1: _t->walletOpenError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->walletClosed(); break;
        case 3: _t->passwordChanged(); break;
        case 4: _t->synchronizationProgressUpdated((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 5: _t->synchronizationCompleted(); break;
        case 6: _t->balanceUpdated((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 7: _t->externalTransactionCreated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 8: _t->transactionUpdated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 9: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->cryptoNoteAdapterDeinitCompleted(); break;
        case 11: _t->fusionTransactionsVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->showAllCachedTransactions(); break;
        case 13: _t->updateTransaction((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::TransactionsModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__TransactionsModel.data,
      qt_meta_data_WalletGui__TransactionsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransactionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransactionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransactionsModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletAdapterObserver"))
        return static_cast< IWalletAdapterObserver*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    if (!strcmp(_clname, "IOptimizationManagerObserver"))
        return static_cast< IOptimizationManagerObserver*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::TransactionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
