/****************************************************************************
** Meta object code from reading C++ file 'BlockChainExplorerAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/BlockChainExplorerAdapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlockChainExplorerAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__BlockChainExplorerAdapter_t {
    QByteArrayData data[17];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__BlockChainExplorerAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__BlockChainExplorerAdapter_t qt_meta_stringdata_WalletGui__BlockChainExplorerAdapter = {
    {
QT_MOC_LITERAL(0, 0, 36), // "WalletGui::BlockChainExplorer..."
QT_MOC_LITERAL(1, 37, 23), // "blockChainUpdatedSignal"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 33), // "QVector<CryptoNote::BlockDeta..."
QT_MOC_LITERAL(4, 96, 10), // "_newBlocks"
QT_MOC_LITERAL(5, 107, 15), // "_orphanedBlocks"
QT_MOC_LITERAL(6, 123, 17), // "poolUpdatedSignal"
QT_MOC_LITERAL(7, 141, 39), // "QVector<CryptoNote::Transacti..."
QT_MOC_LITERAL(8, 181, 16), // "_newTransactions"
QT_MOC_LITERAL(9, 198, 21), // "QVector<Crypto::Hash>"
QT_MOC_LITERAL(10, 220, 20), // "_removedTransactions"
QT_MOC_LITERAL(11, 241, 28), // "blockchainSynchronizedSignal"
QT_MOC_LITERAL(12, 270, 24), // "CryptoNote::BlockDetails"
QT_MOC_LITERAL(13, 295, 9), // "_topBlock"
QT_MOC_LITERAL(14, 305, 17), // "blockChainUpdated"
QT_MOC_LITERAL(15, 323, 11), // "poolUpdated"
QT_MOC_LITERAL(16, 335, 22) // "blockchainSynchronized"

    },
    "WalletGui::BlockChainExplorerAdapter\0"
    "blockChainUpdatedSignal\0\0"
    "QVector<CryptoNote::BlockDetails>\0"
    "_newBlocks\0_orphanedBlocks\0poolUpdatedSignal\0"
    "QVector<CryptoNote::TransactionDetails>\0"
    "_newTransactions\0QVector<Crypto::Hash>\0"
    "_removedTransactions\0blockchainSynchronizedSignal\0"
    "CryptoNote::BlockDetails\0_topBlock\0"
    "blockChainUpdated\0poolUpdated\0"
    "blockchainSynchronized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__BlockChainExplorerAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,
      11,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,   57,    2, 0x0a /* Public */,
      15,    2,   62,    2, 0x0a /* Public */,
      16,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void WalletGui::BlockChainExplorerAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockChainExplorerAdapter *_t = static_cast<BlockChainExplorerAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockChainUpdatedSignal((*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[2]))); break;
        case 1: _t->poolUpdatedSignal((*reinterpret_cast< const QVector<CryptoNote::TransactionDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<Crypto::Hash>(*)>(_a[2]))); break;
        case 2: _t->blockchainSynchronizedSignal((*reinterpret_cast< const CryptoNote::BlockDetails(*)>(_a[1]))); break;
        case 3: _t->blockChainUpdated((*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[2]))); break;
        case 4: _t->poolUpdated((*reinterpret_cast< const QVector<CryptoNote::TransactionDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<Crypto::Hash>(*)>(_a[2]))); break;
        case 5: _t->blockchainSynchronized((*reinterpret_cast< const CryptoNote::BlockDetails(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BlockChainExplorerAdapter::*_t)(const QVector<CryptoNote::BlockDetails> & , const QVector<CryptoNote::BlockDetails> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerAdapter::blockChainUpdatedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerAdapter::*_t)(const QVector<CryptoNote::TransactionDetails> & , const QVector<Crypto::Hash> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerAdapter::poolUpdatedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerAdapter::*_t)(const CryptoNote::BlockDetails & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerAdapter::blockchainSynchronizedSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::BlockChainExplorerAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__BlockChainExplorerAdapter.data,
      qt_meta_data_WalletGui__BlockChainExplorerAdapter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::BlockChainExplorerAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::BlockChainExplorerAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__BlockChainExplorerAdapter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IBlockChainExplorerAdapter"))
        return static_cast< IBlockChainExplorerAdapter*>(this);
    if (!strcmp(_clname, "IBlockChainExplorerAdapterObserver"))
        return static_cast< IBlockChainExplorerAdapterObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::BlockChainExplorerAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WalletGui::BlockChainExplorerAdapter::blockChainUpdatedSignal(const QVector<CryptoNote::BlockDetails> & _t1, const QVector<CryptoNote::BlockDetails> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::BlockChainExplorerAdapter::poolUpdatedSignal(const QVector<CryptoNote::TransactionDetails> & _t1, const QVector<Crypto::Hash> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGui::BlockChainExplorerAdapter::blockchainSynchronizedSignal(const CryptoNote::BlockDetails & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
