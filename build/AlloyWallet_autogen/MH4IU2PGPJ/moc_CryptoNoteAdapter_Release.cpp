/****************************************************************************
** Meta object code from reading C++ file 'CryptoNoteAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/CryptoNoteAdapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CryptoNoteAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__CryptoNoteAdapter_t {
    QByteArrayData data[18];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__CryptoNoteAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__CryptoNoteAdapter_t qt_meta_stringdata_WalletGui__CryptoNoteAdapter = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGui::CryptoNoteAdapter"
QT_MOC_LITERAL(1, 29, 19), // "initCompletedSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "_initStatus"
QT_MOC_LITERAL(4, 62, 21), // "deinitCompletedSignal"
QT_MOC_LITERAL(5, 84, 13), // "initCompleted"
QT_MOC_LITERAL(6, 98, 7), // "_status"
QT_MOC_LITERAL(7, 106, 15), // "deinitCompleted"
QT_MOC_LITERAL(8, 122, 16), // "peerCountUpdated"
QT_MOC_LITERAL(9, 139, 8), // "quintptr"
QT_MOC_LITERAL(10, 148, 6), // "_count"
QT_MOC_LITERAL(11, 155, 22), // "localBlockchainUpdated"
QT_MOC_LITERAL(12, 178, 27), // "CryptoNote::BlockHeaderInfo"
QT_MOC_LITERAL(13, 206, 19), // "_lastLocalBlockInfo"
QT_MOC_LITERAL(14, 226, 27), // "lastKnownBlockHeightUpdated"
QT_MOC_LITERAL(15, 254, 7), // "_height"
QT_MOC_LITERAL(16, 262, 23), // "connectionStatusUpdated"
QT_MOC_LITERAL(17, 286, 10) // "_connected"

    },
    "WalletGui::CryptoNoteAdapter\0"
    "initCompletedSignal\0\0_initStatus\0"
    "deinitCompletedSignal\0initCompleted\0"
    "_status\0deinitCompleted\0peerCountUpdated\0"
    "quintptr\0_count\0localBlockchainUpdated\0"
    "CryptoNote::BlockHeaderInfo\0"
    "_lastLocalBlockInfo\0lastKnownBlockHeightUpdated\0"
    "_height\0connectionStatusUpdated\0"
    "_connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__CryptoNoteAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,
      14,    1,   68,    2, 0x0a /* Public */,
      16,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void WalletGui::CryptoNoteAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CryptoNoteAdapter *_t = static_cast<CryptoNoteAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCompletedSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->deinitCompletedSignal(); break;
        case 2: _t->initCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->deinitCompleted(); break;
        case 4: _t->peerCountUpdated((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 5: _t->localBlockchainUpdated((*reinterpret_cast< CryptoNote::BlockHeaderInfo(*)>(_a[1]))); break;
        case 6: _t->lastKnownBlockHeightUpdated((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->connectionStatusUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CryptoNoteAdapter::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CryptoNoteAdapter::initCompletedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CryptoNoteAdapter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CryptoNoteAdapter::deinitCompletedSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::CryptoNoteAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__CryptoNoteAdapter.data,
      qt_meta_data_WalletGui__CryptoNoteAdapter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::CryptoNoteAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::CryptoNoteAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__CryptoNoteAdapter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapter"))
        return static_cast< ICryptoNoteAdapter*>(this);
    if (!strcmp(_clname, "INodeAdapterObserver"))
        return static_cast< INodeAdapterObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::CryptoNoteAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WalletGui::CryptoNoteAdapter::initCompletedSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::CryptoNoteAdapter::deinitCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
