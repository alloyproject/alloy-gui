/****************************************************************************
** Meta object code from reading C++ file 'ProxyRpcNodeWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/ProxyRpcNodeWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProxyRpcNodeWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__ProxyRpcNodeWorker_t {
    QByteArrayData data[17];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__ProxyRpcNodeWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__ProxyRpcNodeWorker_t qt_meta_stringdata_WalletGui__ProxyRpcNodeWorker = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WalletGui::ProxyRpcNodeWorker"
QT_MOC_LITERAL(1, 30, 19), // "initCompletedSignal"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "_status"
QT_MOC_LITERAL(4, 59, 21), // "deinitCompletedSignal"
QT_MOC_LITERAL(5, 81, 22), // "peerCountUpdatedSignal"
QT_MOC_LITERAL(6, 104, 8), // "quintptr"
QT_MOC_LITERAL(7, 113, 6), // "_count"
QT_MOC_LITERAL(8, 120, 28), // "localBlockchainUpdatedSignal"
QT_MOC_LITERAL(9, 149, 27), // "CryptoNote::BlockHeaderInfo"
QT_MOC_LITERAL(10, 177, 19), // "_lastLocalBlockInfo"
QT_MOC_LITERAL(11, 197, 33), // "lastKnownBlockHeightUpdatedSi..."
QT_MOC_LITERAL(12, 231, 7), // "_height"
QT_MOC_LITERAL(13, 239, 29), // "connectionStatusUpdatedSignal"
QT_MOC_LITERAL(14, 269, 10), // "_connected"
QT_MOC_LITERAL(15, 280, 8), // "initImpl"
QT_MOC_LITERAL(16, 289, 10) // "deinitImpl"

    },
    "WalletGui::ProxyRpcNodeWorker\0"
    "initCompletedSignal\0\0_status\0"
    "deinitCompletedSignal\0peerCountUpdatedSignal\0"
    "quintptr\0_count\0localBlockchainUpdatedSignal\0"
    "CryptoNote::BlockHeaderInfo\0"
    "_lastLocalBlockInfo\0"
    "lastKnownBlockHeightUpdatedSignal\0"
    "_height\0connectionStatusUpdatedSignal\0"
    "_connected\0initImpl\0deinitImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__ProxyRpcNodeWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
      11,    1,   64,    2, 0x06 /* Public */,
      13,    1,   67,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   70,    2, 0x00 /* Private */,
      16,    0,   71,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGui::ProxyRpcNodeWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProxyRpcNodeWorker *_t = static_cast<ProxyRpcNodeWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCompletedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deinitCompletedSignal(); break;
        case 2: _t->peerCountUpdatedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->localBlockchainUpdatedSignal((*reinterpret_cast< CryptoNote::BlockHeaderInfo(*)>(_a[1]))); break;
        case 4: _t->lastKnownBlockHeightUpdatedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->connectionStatusUpdatedSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->initImpl(); break;
        case 7: _t->deinitImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ProxyRpcNodeWorker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxyRpcNodeWorker::initCompletedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProxyRpcNodeWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxyRpcNodeWorker::deinitCompletedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProxyRpcNodeWorker::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxyRpcNodeWorker::peerCountUpdatedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProxyRpcNodeWorker::*_t)(CryptoNote::BlockHeaderInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxyRpcNodeWorker::localBlockchainUpdatedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProxyRpcNodeWorker::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxyRpcNodeWorker::lastKnownBlockHeightUpdatedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ProxyRpcNodeWorker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProxyRpcNodeWorker::connectionStatusUpdatedSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::ProxyRpcNodeWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__ProxyRpcNodeWorker.data,
      qt_meta_data_WalletGui__ProxyRpcNodeWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::ProxyRpcNodeWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::ProxyRpcNodeWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__ProxyRpcNodeWorker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INodeAdapter"))
        return static_cast< INodeAdapter*>(this);
    if (!strcmp(_clname, "CryptoNote::INodeObserver"))
        return static_cast< CryptoNote::INodeObserver*>(this);
    if (!strcmp(_clname, "CryptoNote::INodeRpcProxyObserver"))
        return static_cast< CryptoNote::INodeRpcProxyObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::ProxyRpcNodeWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WalletGui::ProxyRpcNodeWorker::initCompletedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::ProxyRpcNodeWorker::deinitCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::ProxyRpcNodeWorker::peerCountUpdatedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGui::ProxyRpcNodeWorker::localBlockchainUpdatedSignal(CryptoNote::BlockHeaderInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::ProxyRpcNodeWorker::lastKnownBlockHeightUpdatedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::ProxyRpcNodeWorker::connectionStatusUpdatedSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
