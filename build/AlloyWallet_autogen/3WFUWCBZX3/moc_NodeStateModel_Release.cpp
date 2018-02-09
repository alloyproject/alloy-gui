/****************************************************************************
** Meta object code from reading C++ file 'NodeStateModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/NodeStateModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeStateModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__NodeStateModel_t {
    QByteArrayData data[26];
    char stringdata0[514];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__NodeStateModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__NodeStateModel_t qt_meta_stringdata_WalletGui__NodeStateModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WalletGui::NodeStateModel"
QT_MOC_LITERAL(1, 26, 13), // "initCompleted"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "_status"
QT_MOC_LITERAL(4, 49, 15), // "deinitCompleted"
QT_MOC_LITERAL(5, 65, 16), // "peerCountUpdated"
QT_MOC_LITERAL(6, 82, 8), // "quintptr"
QT_MOC_LITERAL(7, 91, 6), // "_count"
QT_MOC_LITERAL(8, 98, 22), // "localBlockchainUpdated"
QT_MOC_LITERAL(9, 121, 27), // "CryptoNote::BlockHeaderInfo"
QT_MOC_LITERAL(10, 149, 19), // "_lastLocalBlockInfo"
QT_MOC_LITERAL(11, 169, 27), // "lastKnownBlockHeightUpdated"
QT_MOC_LITERAL(12, 197, 7), // "_height"
QT_MOC_LITERAL(13, 205, 23), // "connectionStatusUpdated"
QT_MOC_LITERAL(14, 229, 10), // "_connected"
QT_MOC_LITERAL(15, 240, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(16, 271, 32), // "cryptoNoteAdapterDeinitCompleted"
QT_MOC_LITERAL(17, 304, 7), // "Columns"
QT_MOC_LITERAL(18, 312, 16), // "COLUMN_NODE_TYPE"
QT_MOC_LITERAL(19, 329, 17), // "COLUMN_PEER_COUNT"
QT_MOC_LITERAL(20, 347, 23), // "COLUMN_CONNECTION_STATE"
QT_MOC_LITERAL(21, 371, 24), // "COLUMN_LOCAL_BLOCK_COUNT"
QT_MOC_LITERAL(22, 396, 24), // "COLUMN_KNOWN_BLOCK_COUNT"
QT_MOC_LITERAL(23, 421, 33), // "COLUMN_LAST_LOCAL_BLOCK_TIMES..."
QT_MOC_LITERAL(24, 455, 34), // "COLUMN_LAST_LOCAL_BLOCK_DIFFI..."
QT_MOC_LITERAL(25, 490, 23) // "COLUMN_NETWORK_HASHRATE"

    },
    "WalletGui::NodeStateModel\0initCompleted\0"
    "\0_status\0deinitCompleted\0peerCountUpdated\0"
    "quintptr\0_count\0localBlockchainUpdated\0"
    "CryptoNote::BlockHeaderInfo\0"
    "_lastLocalBlockInfo\0lastKnownBlockHeightUpdated\0"
    "_height\0connectionStatusUpdated\0"
    "_connected\0cryptoNoteAdapterInitCompleted\0"
    "cryptoNoteAdapterDeinitCompleted\0"
    "Columns\0COLUMN_NODE_TYPE\0COLUMN_PEER_COUNT\0"
    "COLUMN_CONNECTION_STATE\0"
    "COLUMN_LOCAL_BLOCK_COUNT\0"
    "COLUMN_KNOWN_BLOCK_COUNT\0"
    "COLUMN_LAST_LOCAL_BLOCK_TIMESTAMP\0"
    "COLUMN_LAST_LOCAL_BLOCK_DIFFICULTY\0"
    "COLUMN_NETWORK_HASHRATE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__NodeStateModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,
      13,    1,   67,    2, 0x0a /* Public */,
      15,    1,   70,    2, 0x0a /* Public */,
      16,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // enums: name, flags, count, data
      17, 0x0,    8,   78,

 // enum data: key, value
      18, uint(WalletGui::NodeStateModel::COLUMN_NODE_TYPE),
      19, uint(WalletGui::NodeStateModel::COLUMN_PEER_COUNT),
      20, uint(WalletGui::NodeStateModel::COLUMN_CONNECTION_STATE),
      21, uint(WalletGui::NodeStateModel::COLUMN_LOCAL_BLOCK_COUNT),
      22, uint(WalletGui::NodeStateModel::COLUMN_KNOWN_BLOCK_COUNT),
      23, uint(WalletGui::NodeStateModel::COLUMN_LAST_LOCAL_BLOCK_TIMESTAMP),
      24, uint(WalletGui::NodeStateModel::COLUMN_LAST_LOCAL_BLOCK_DIFFICULTY),
      25, uint(WalletGui::NodeStateModel::COLUMN_NETWORK_HASHRATE),

       0        // eod
};

void WalletGui::NodeStateModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NodeStateModel *_t = static_cast<NodeStateModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deinitCompleted(); break;
        case 2: _t->peerCountUpdated((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->localBlockchainUpdated((*reinterpret_cast< CryptoNote::BlockHeaderInfo(*)>(_a[1]))); break;
        case 4: _t->lastKnownBlockHeightUpdated((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->connectionStatusUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->cryptoNoteAdapterDeinitCompleted(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::NodeStateModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__NodeStateModel.data,
      qt_meta_data_WalletGui__NodeStateModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::NodeStateModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::NodeStateModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__NodeStateModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INodeAdapterObserver"))
        return static_cast< INodeAdapterObserver*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::NodeStateModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
