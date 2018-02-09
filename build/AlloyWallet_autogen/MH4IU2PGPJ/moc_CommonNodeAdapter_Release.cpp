/****************************************************************************
** Meta object code from reading C++ file 'CommonNodeAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/CommonNodeAdapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommonNodeAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__CommonNodeAdapter_t {
    QByteArrayData data[21];
    char stringdata0[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__CommonNodeAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__CommonNodeAdapter_t qt_meta_stringdata_WalletGui__CommonNodeAdapter = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGui::CommonNodeAdapter"
QT_MOC_LITERAL(1, 29, 19), // "initCompletedSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "_status"
QT_MOC_LITERAL(4, 58, 21), // "deinitCompletedSignal"
QT_MOC_LITERAL(5, 80, 22), // "peerCountUpdatedSignal"
QT_MOC_LITERAL(6, 103, 8), // "quintptr"
QT_MOC_LITERAL(7, 112, 6), // "_count"
QT_MOC_LITERAL(8, 119, 28), // "localBlockchainUpdatedSignal"
QT_MOC_LITERAL(9, 148, 27), // "CryptoNote::BlockHeaderInfo"
QT_MOC_LITERAL(10, 176, 19), // "_lastLocalBlockinfo"
QT_MOC_LITERAL(11, 196, 33), // "lastKnownBlockHeightUpdatedSi..."
QT_MOC_LITERAL(12, 230, 7), // "_height"
QT_MOC_LITERAL(13, 238, 29), // "connectionStatusUpdatedSignal"
QT_MOC_LITERAL(14, 268, 10), // "_connected"
QT_MOC_LITERAL(15, 279, 13), // "initCompleted"
QT_MOC_LITERAL(16, 293, 15), // "deinitCompleted"
QT_MOC_LITERAL(17, 309, 16), // "peerCountUpdated"
QT_MOC_LITERAL(18, 326, 22), // "localBlockchainUpdated"
QT_MOC_LITERAL(19, 349, 27), // "lastKnownBlockHeightUpdated"
QT_MOC_LITERAL(20, 377, 23) // "connectionStatusUpdated"

    },
    "WalletGui::CommonNodeAdapter\0"
    "initCompletedSignal\0\0_status\0"
    "deinitCompletedSignal\0peerCountUpdatedSignal\0"
    "quintptr\0_count\0localBlockchainUpdatedSignal\0"
    "CryptoNote::BlockHeaderInfo\0"
    "_lastLocalBlockinfo\0"
    "lastKnownBlockHeightUpdatedSignal\0"
    "_height\0connectionStatusUpdatedSignal\0"
    "_connected\0initCompleted\0deinitCompleted\0"
    "peerCountUpdated\0localBlockchainUpdated\0"
    "lastKnownBlockHeightUpdated\0"
    "connectionStatusUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__CommonNodeAdapter[] = {

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
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       8,    1,   81,    2, 0x06 /* Public */,
      11,    1,   84,    2, 0x06 /* Public */,
      13,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   90,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x0a /* Public */,
      17,    1,   94,    2, 0x0a /* Public */,
      18,    1,   97,    2, 0x0a /* Public */,
      19,    1,  100,    2, 0x0a /* Public */,
      20,    1,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void WalletGui::CommonNodeAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommonNodeAdapter *_t = static_cast<CommonNodeAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCompletedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deinitCompletedSignal(); break;
        case 2: _t->peerCountUpdatedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->localBlockchainUpdatedSignal((*reinterpret_cast< CryptoNote::BlockHeaderInfo(*)>(_a[1]))); break;
        case 4: _t->lastKnownBlockHeightUpdatedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->connectionStatusUpdatedSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->initCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->deinitCompleted(); break;
        case 8: _t->peerCountUpdated((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 9: _t->localBlockchainUpdated((*reinterpret_cast< CryptoNote::BlockHeaderInfo(*)>(_a[1]))); break;
        case 10: _t->lastKnownBlockHeightUpdated((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 11: _t->connectionStatusUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CommonNodeAdapter::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonNodeAdapter::initCompletedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CommonNodeAdapter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonNodeAdapter::deinitCompletedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CommonNodeAdapter::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonNodeAdapter::peerCountUpdatedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CommonNodeAdapter::*_t)(CryptoNote::BlockHeaderInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonNodeAdapter::localBlockchainUpdatedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CommonNodeAdapter::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonNodeAdapter::lastKnownBlockHeightUpdatedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CommonNodeAdapter::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommonNodeAdapter::connectionStatusUpdatedSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::CommonNodeAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__CommonNodeAdapter.data,
      qt_meta_data_WalletGui__CommonNodeAdapter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::CommonNodeAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::CommonNodeAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__CommonNodeAdapter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INodeAdapter"))
        return static_cast< INodeAdapter*>(this);
    if (!strcmp(_clname, "INodeAdapterObserver"))
        return static_cast< INodeAdapterObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::CommonNodeAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::CommonNodeAdapter::initCompletedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::CommonNodeAdapter::deinitCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::CommonNodeAdapter::peerCountUpdatedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGui::CommonNodeAdapter::localBlockchainUpdatedSignal(CryptoNote::BlockHeaderInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::CommonNodeAdapter::lastKnownBlockHeightUpdatedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::CommonNodeAdapter::connectionStatusUpdatedSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
