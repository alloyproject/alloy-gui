/****************************************************************************
** Meta object code from reading C++ file 'BlockChainExplorerWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/BlockChainExplorerWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlockChainExplorerWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__BlockChainExplorerWorker_t {
    QByteArrayData data[29];
    char stringdata0[545];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__BlockChainExplorerWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__BlockChainExplorerWorker_t qt_meta_stringdata_WalletGui__BlockChainExplorerWorker = {
    {
QT_MOC_LITERAL(0, 0, 35), // "WalletGui::BlockChainExplorer..."
QT_MOC_LITERAL(1, 36, 23), // "blockChainUpdatedSignal"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 33), // "QVector<CryptoNote::BlockDeta..."
QT_MOC_LITERAL(4, 95, 10), // "_newBlocks"
QT_MOC_LITERAL(5, 106, 15), // "_orphanedBlocks"
QT_MOC_LITERAL(6, 122, 17), // "poolUpdatedSignal"
QT_MOC_LITERAL(7, 140, 39), // "QVector<CryptoNote::Transacti..."
QT_MOC_LITERAL(8, 180, 16), // "_newTransactions"
QT_MOC_LITERAL(9, 197, 21), // "QVector<Crypto::Hash>"
QT_MOC_LITERAL(10, 219, 20), // "_removedTransactions"
QT_MOC_LITERAL(11, 240, 28), // "blockchainSynchronizedSignal"
QT_MOC_LITERAL(12, 269, 24), // "CryptoNote::BlockDetails"
QT_MOC_LITERAL(13, 294, 9), // "_topBlock"
QT_MOC_LITERAL(14, 304, 19), // "initCompletedSignal"
QT_MOC_LITERAL(15, 324, 7), // "_status"
QT_MOC_LITERAL(16, 332, 28), // "blocksPreloadCompletedSignal"
QT_MOC_LITERAL(17, 361, 14), // "_minBlockIndex"
QT_MOC_LITERAL(18, 376, 14), // "_maxBlockIndex"
QT_MOC_LITERAL(19, 391, 21), // "getPoolStateCompleted"
QT_MOC_LITERAL(20, 413, 13), // "_transactions"
QT_MOC_LITERAL(21, 427, 8), // "initImpl"
QT_MOC_LITERAL(22, 436, 17), // "preloadBlocksImpl"
QT_MOC_LITERAL(23, 454, 16), // "QVector<quint32>"
QT_MOC_LITERAL(24, 471, 13), // "_blockIndexes"
QT_MOC_LITERAL(25, 485, 15), // "_timestampBegin"
QT_MOC_LITERAL(26, 501, 13), // "_timestampEnd"
QT_MOC_LITERAL(27, 515, 12), // "_blockHashes"
QT_MOC_LITERAL(28, 528, 16) // "getPoolStateImpl"

    },
    "WalletGui::BlockChainExplorerWorker\0"
    "blockChainUpdatedSignal\0\0"
    "QVector<CryptoNote::BlockDetails>\0"
    "_newBlocks\0_orphanedBlocks\0poolUpdatedSignal\0"
    "QVector<CryptoNote::TransactionDetails>\0"
    "_newTransactions\0QVector<Crypto::Hash>\0"
    "_removedTransactions\0blockchainSynchronizedSignal\0"
    "CryptoNote::BlockDetails\0_topBlock\0"
    "initCompletedSignal\0_status\0"
    "blocksPreloadCompletedSignal\0"
    "_minBlockIndex\0_maxBlockIndex\0"
    "getPoolStateCompleted\0_transactions\0"
    "initImpl\0preloadBlocksImpl\0QVector<quint32>\0"
    "_blockIndexes\0_timestampBegin\0"
    "_timestampEnd\0_blockHashes\0getPoolStateImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__BlockChainExplorerWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       6,    2,   79,    2, 0x06 /* Public */,
      11,    1,   84,    2, 0x06 /* Public */,
      14,    1,   87,    2, 0x06 /* Public */,
      16,    3,   90,    2, 0x06 /* Public */,
      19,    2,   97,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  102,    2, 0x00 /* Private */,
      22,    2,  103,    2, 0x00 /* Private */,
      22,    1,  108,    2, 0x00 /* Private */,
      22,    2,  111,    2, 0x00 /* Private */,
      22,    1,  116,    2, 0x00 /* Private */,
      28,    0,  119,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::UInt,   15,   17,   18,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,   15,   20,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   17,   18,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,   25,   26,
    QMetaType::Void, 0x80000000 | 9,   27,
    QMetaType::Void,

       0        // eod
};

void WalletGui::BlockChainExplorerWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockChainExplorerWorker *_t = static_cast<BlockChainExplorerWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockChainUpdatedSignal((*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<CryptoNote::BlockDetails>(*)>(_a[2]))); break;
        case 1: _t->poolUpdatedSignal((*reinterpret_cast< const QVector<CryptoNote::TransactionDetails>(*)>(_a[1])),(*reinterpret_cast< const QVector<Crypto::Hash>(*)>(_a[2]))); break;
        case 2: _t->blockchainSynchronizedSignal((*reinterpret_cast< const CryptoNote::BlockDetails(*)>(_a[1]))); break;
        case 3: _t->initCompletedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->blocksPreloadCompletedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 5: _t->getPoolStateCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVector<CryptoNote::TransactionDetails>(*)>(_a[2]))); break;
        case 6: _t->initImpl(); break;
        case 7: _t->preloadBlocksImpl((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 8: _t->preloadBlocksImpl((*reinterpret_cast< const QVector<quint32>(*)>(_a[1]))); break;
        case 9: _t->preloadBlocksImpl((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 10: _t->preloadBlocksImpl((*reinterpret_cast< const QVector<Crypto::Hash>(*)>(_a[1]))); break;
        case 11: _t->getPoolStateImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint32> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BlockChainExplorerWorker::*_t)(const QVector<CryptoNote::BlockDetails> & , const QVector<CryptoNote::BlockDetails> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerWorker::blockChainUpdatedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerWorker::*_t)(const QVector<CryptoNote::TransactionDetails> & , const QVector<Crypto::Hash> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerWorker::poolUpdatedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerWorker::*_t)(const CryptoNote::BlockDetails & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerWorker::blockchainSynchronizedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerWorker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerWorker::initCompletedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerWorker::*_t)(int , quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerWorker::blocksPreloadCompletedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BlockChainExplorerWorker::*_t)(int , const QVector<CryptoNote::TransactionDetails> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockChainExplorerWorker::getPoolStateCompleted)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::BlockChainExplorerWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__BlockChainExplorerWorker.data,
      qt_meta_data_WalletGui__BlockChainExplorerWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::BlockChainExplorerWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::BlockChainExplorerWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__BlockChainExplorerWorker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IBlockChainExplorerAdapter"))
        return static_cast< IBlockChainExplorerAdapter*>(this);
    if (!strcmp(_clname, "CryptoNote::IBlockchainObserver"))
        return static_cast< CryptoNote::IBlockchainObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::BlockChainExplorerWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::BlockChainExplorerWorker::blockChainUpdatedSignal(const QVector<CryptoNote::BlockDetails> & _t1, const QVector<CryptoNote::BlockDetails> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::BlockChainExplorerWorker::poolUpdatedSignal(const QVector<CryptoNote::TransactionDetails> & _t1, const QVector<Crypto::Hash> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGui::BlockChainExplorerWorker::blockchainSynchronizedSignal(const CryptoNote::BlockDetails & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGui::BlockChainExplorerWorker::initCompletedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::BlockChainExplorerWorker::blocksPreloadCompletedSignal(int _t1, quint32 _t2, quint32 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::BlockChainExplorerWorker::getPoolStateCompleted(int _t1, const QVector<CryptoNote::TransactionDetails> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
