/****************************************************************************
** Meta object code from reading C++ file 'TransactionPoolModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/TransactionPoolModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionPoolModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransactionPoolModel_t {
    QByteArrayData data[35];
    char stringdata0[564];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransactionPoolModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransactionPoolModel_t qt_meta_stringdata_WalletGui__TransactionPoolModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "WalletGui::TransactionPoolModel"
QT_MOC_LITERAL(1, 32, 13), // "initCompleted"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "blockChainUpdated"
QT_MOC_LITERAL(4, 65, 33), // "QVector<CryptoNote::BlockDeta..."
QT_MOC_LITERAL(5, 99, 10), // "_newBlocks"
QT_MOC_LITERAL(6, 110, 15), // "_orphanedBlocks"
QT_MOC_LITERAL(7, 126, 11), // "poolUpdated"
QT_MOC_LITERAL(8, 138, 39), // "QVector<CryptoNote::Transacti..."
QT_MOC_LITERAL(9, 178, 16), // "_newTransactions"
QT_MOC_LITERAL(10, 195, 21), // "QVector<Crypto::Hash>"
QT_MOC_LITERAL(11, 217, 20), // "_removedTransactions"
QT_MOC_LITERAL(12, 238, 22), // "blockchainSynchronized"
QT_MOC_LITERAL(13, 261, 24), // "CryptoNote::BlockDetails"
QT_MOC_LITERAL(14, 286, 9), // "_topBlock"
QT_MOC_LITERAL(15, 296, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(16, 327, 7), // "_status"
QT_MOC_LITERAL(17, 335, 32), // "cryptoNoteAdapterDeinitCompleted"
QT_MOC_LITERAL(18, 368, 7), // "Columns"
QT_MOC_LITERAL(19, 376, 11), // "COLUMN_TIME"
QT_MOC_LITERAL(20, 388, 11), // "COLUMN_HASH"
QT_MOC_LITERAL(21, 400, 13), // "COLUMN_AMOUNT"
QT_MOC_LITERAL(22, 414, 10), // "COLUMN_FEE"
QT_MOC_LITERAL(23, 425, 11), // "COLUMN_SIZE"
QT_MOC_LITERAL(24, 437, 12), // "COLUMN_MIXIN"
QT_MOC_LITERAL(25, 450, 17), // "COLUMN_PAYMENT_ID"
QT_MOC_LITERAL(26, 468, 5), // "Roles"
QT_MOC_LITERAL(27, 474, 9), // "ROLE_TIME"
QT_MOC_LITERAL(28, 484, 11), // "ROLE_AMOUNT"
QT_MOC_LITERAL(29, 496, 8), // "ROLE_FEE"
QT_MOC_LITERAL(30, 505, 9), // "ROLE_SIZE"
QT_MOC_LITERAL(31, 515, 9), // "ROLE_HASH"
QT_MOC_LITERAL(32, 525, 10), // "ROLE_MIXIN"
QT_MOC_LITERAL(33, 536, 15), // "ROLE_PAYMENT_ID"
QT_MOC_LITERAL(34, 552, 11) // "ROLE_COLUMN"

    },
    "WalletGui::TransactionPoolModel\0"
    "initCompleted\0\0blockChainUpdated\0"
    "QVector<CryptoNote::BlockDetails>\0"
    "_newBlocks\0_orphanedBlocks\0poolUpdated\0"
    "QVector<CryptoNote::TransactionDetails>\0"
    "_newTransactions\0QVector<Crypto::Hash>\0"
    "_removedTransactions\0blockchainSynchronized\0"
    "CryptoNote::BlockDetails\0_topBlock\0"
    "cryptoNoteAdapterInitCompleted\0_status\0"
    "cryptoNoteAdapterDeinitCompleted\0"
    "Columns\0COLUMN_TIME\0COLUMN_HASH\0"
    "COLUMN_AMOUNT\0COLUMN_FEE\0COLUMN_SIZE\0"
    "COLUMN_MIXIN\0COLUMN_PAYMENT_ID\0Roles\0"
    "ROLE_TIME\0ROLE_AMOUNT\0ROLE_FEE\0ROLE_SIZE\0"
    "ROLE_HASH\0ROLE_MIXIN\0ROLE_PAYMENT_ID\0"
    "ROLE_COLUMN"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransactionPoolModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   45,    2, 0x0a /* Public */,
       7,    2,   50,    2, 0x0a /* Public */,
      12,    1,   55,    2, 0x0a /* Public */,
      15,    1,   58,    2, 0x0a /* Public */,
      17,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

 // enums: name, flags, count, data
      18, 0x0,    7,   70,
      26, 0x0,    8,   84,

 // enum data: key, value
      19, uint(WalletGui::TransactionPoolModel::COLUMN_TIME),
      20, uint(WalletGui::TransactionPoolModel::COLUMN_HASH),
      21, uint(WalletGui::TransactionPoolModel::COLUMN_AMOUNT),
      22, uint(WalletGui::TransactionPoolModel::COLUMN_FEE),
      23, uint(WalletGui::TransactionPoolModel::COLUMN_SIZE),
      24, uint(WalletGui::TransactionPoolModel::COLUMN_MIXIN),
      25, uint(WalletGui::TransactionPoolModel::COLUMN_PAYMENT_ID),
      27, uint(WalletGui::TransactionPoolModel::ROLE_TIME),
      28, uint(WalletGui::TransactionPoolModel::ROLE_AMOUNT),
      29, uint(WalletGui::TransactionPoolModel::ROLE_FEE),
      30, uint(WalletGui::TransactionPoolModel::ROLE_SIZE),
      31, uint(WalletGui::TransactionPoolModel::ROLE_HASH),
      32, uint(WalletGui::TransactionPoolModel::ROLE_MIXIN),
      33, uint(WalletGui::TransactionPoolModel::ROLE_PAYMENT_ID),
      34, uint(WalletGui::TransactionPoolModel::ROLE_COLUMN),

       0        // eod
};

void WalletGui::TransactionPoolModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionPoolModel *_t = static_cast<TransactionPoolModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCompleted(); break;
        case 1: _t->blockChainUpdated((*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[2]))); break;
        case 2: _t->poolUpdated((*reinterpret_cast< const QVector<CryptoNote::TransactionDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<Crypto::Hash>(*)>(_a[2]))); break;
        case 3: _t->blockchainSynchronized((*reinterpret_cast< const CryptoNote::BlockDetails(*)>(_a[1]))); break;
        case 4: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cryptoNoteAdapterDeinitCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TransactionPoolModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionPoolModel::initCompleted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::TransactionPoolModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__TransactionPoolModel.data,
      qt_meta_data_WalletGui__TransactionPoolModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransactionPoolModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransactionPoolModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransactionPoolModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IBlockChainExplorerAdapterObserver"))
        return static_cast< IBlockChainExplorerAdapterObserver*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::TransactionPoolModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::TransactionPoolModel::initCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
