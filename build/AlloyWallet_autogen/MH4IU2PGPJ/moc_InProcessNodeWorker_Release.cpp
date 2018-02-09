/****************************************************************************
** Meta object code from reading C++ file 'InProcessNodeWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/InProcessNodeWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InProcessNodeWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__InProcessNodeWorker_t {
    QByteArrayData data[20];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__InProcessNodeWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__InProcessNodeWorker_t qt_meta_stringdata_WalletGui__InProcessNodeWorker = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WalletGui::InProcessNodeWorker"
QT_MOC_LITERAL(1, 31, 19), // "initCompletedSignal"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 7), // "_status"
QT_MOC_LITERAL(4, 60, 21), // "deinitCompletedSignal"
QT_MOC_LITERAL(5, 82, 22), // "peerCountUpdatedSignal"
QT_MOC_LITERAL(6, 105, 8), // "quintptr"
QT_MOC_LITERAL(7, 114, 6), // "_count"
QT_MOC_LITERAL(8, 121, 28), // "localBlockchainUpdatedSignal"
QT_MOC_LITERAL(9, 150, 27), // "CryptoNote::BlockHeaderInfo"
QT_MOC_LITERAL(10, 178, 19), // "_lastLocalBlockInfo"
QT_MOC_LITERAL(11, 198, 33), // "lastKnownBlockHeightUpdatedSi..."
QT_MOC_LITERAL(12, 232, 7), // "_height"
QT_MOC_LITERAL(13, 240, 29), // "connectionStatusUpdatedSignal"
QT_MOC_LITERAL(14, 270, 10), // "_connected"
QT_MOC_LITERAL(15, 281, 23), // "nodeInitCompletedSignal"
QT_MOC_LITERAL(16, 305, 10), // "_errorCode"
QT_MOC_LITERAL(17, 316, 16), // "readyToRunSignal"
QT_MOC_LITERAL(18, 333, 8), // "initImpl"
QT_MOC_LITERAL(19, 342, 10) // "deinitImpl"

    },
    "WalletGui::InProcessNodeWorker\0"
    "initCompletedSignal\0\0_status\0"
    "deinitCompletedSignal\0peerCountUpdatedSignal\0"
    "quintptr\0_count\0localBlockchainUpdatedSignal\0"
    "CryptoNote::BlockHeaderInfo\0"
    "_lastLocalBlockInfo\0"
    "lastKnownBlockHeightUpdatedSignal\0"
    "_height\0connectionStatusUpdatedSignal\0"
    "_connected\0nodeInitCompletedSignal\0"
    "_errorCode\0readyToRunSignal\0initImpl\0"
    "deinitImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__InProcessNodeWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       8,    1,   71,    2, 0x06 /* Public */,
      11,    1,   74,    2, 0x06 /* Public */,
      13,    1,   77,    2, 0x06 /* Public */,
      15,    1,   80,    2, 0x06 /* Public */,
      17,    1,   83,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      18,    0,   86,    2, 0x00 /* Private */,
      19,    0,   87,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGui::InProcessNodeWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InProcessNodeWorker *_t = static_cast<InProcessNodeWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCompletedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deinitCompletedSignal(); break;
        case 2: _t->peerCountUpdatedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->localBlockchainUpdatedSignal((*reinterpret_cast< CryptoNote::BlockHeaderInfo(*)>(_a[1]))); break;
        case 4: _t->lastKnownBlockHeightUpdatedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->connectionStatusUpdatedSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->nodeInitCompletedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->readyToRunSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->initImpl(); break;
        case 9: _t->deinitImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InProcessNodeWorker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::initCompletedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::deinitCompletedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::peerCountUpdatedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)(CryptoNote::BlockHeaderInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::localBlockchainUpdatedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::lastKnownBlockHeightUpdatedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::connectionStatusUpdatedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::nodeInitCompletedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (InProcessNodeWorker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InProcessNodeWorker::readyToRunSignal)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::InProcessNodeWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__InProcessNodeWorker.data,
      qt_meta_data_WalletGui__InProcessNodeWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::InProcessNodeWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::InProcessNodeWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__InProcessNodeWorker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INodeAdapter"))
        return static_cast< INodeAdapter*>(this);
    if (!strcmp(_clname, "CryptoNote::INodeObserver"))
        return static_cast< CryptoNote::INodeObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::InProcessNodeWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::InProcessNodeWorker::initCompletedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::InProcessNodeWorker::deinitCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::InProcessNodeWorker::peerCountUpdatedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGui::InProcessNodeWorker::localBlockchainUpdatedSignal(CryptoNote::BlockHeaderInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::InProcessNodeWorker::lastKnownBlockHeightUpdatedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::InProcessNodeWorker::connectionStatusUpdatedSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGui::InProcessNodeWorker::nodeInitCompletedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGui::InProcessNodeWorker::readyToRunSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
