/****************************************************************************
** Meta object code from reading C++ file 'WalletGreenWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/CryptoNoteWrapper/WalletGreenWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WalletGreenWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__WalletGreenWorker_t {
    QByteArrayData data[23];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__WalletGreenWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__WalletGreenWorker_t qt_meta_stringdata_WalletGui__WalletGreenWorker = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGui::WalletGreenWorker"
QT_MOC_LITERAL(1, 29, 18), // "walletOpenedSignal"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "walletOpenErrorSignal"
QT_MOC_LITERAL(4, 71, 11), // "_initStatus"
QT_MOC_LITERAL(5, 83, 18), // "walletClosedSignal"
QT_MOC_LITERAL(6, 102, 21), // "passwordChangedSignal"
QT_MOC_LITERAL(7, 124, 36), // "synchronizationProgressUpdate..."
QT_MOC_LITERAL(8, 161, 8), // "_current"
QT_MOC_LITERAL(9, 170, 6), // "_total"
QT_MOC_LITERAL(10, 177, 30), // "synchronizationCompletedSignal"
QT_MOC_LITERAL(11, 208, 20), // "balanceUpdatedSignal"
QT_MOC_LITERAL(12, 229, 14), // "_actualBalance"
QT_MOC_LITERAL(13, 244, 15), // "_pendingBalance"
QT_MOC_LITERAL(14, 260, 32), // "externalTransactionCreatedSignal"
QT_MOC_LITERAL(15, 293, 8), // "quintptr"
QT_MOC_LITERAL(16, 302, 14), // "_transactionId"
QT_MOC_LITERAL(17, 317, 19), // "FullTransactionInfo"
QT_MOC_LITERAL(18, 337, 12), // "_transaction"
QT_MOC_LITERAL(19, 350, 24), // "transactionUpdatedSignal"
QT_MOC_LITERAL(20, 375, 19), // "initCompletedSignal"
QT_MOC_LITERAL(21, 395, 21), // "deinitCompletedSignal"
QT_MOC_LITERAL(22, 417, 8) // "initImpl"

    },
    "WalletGui::WalletGreenWorker\0"
    "walletOpenedSignal\0\0walletOpenErrorSignal\0"
    "_initStatus\0walletClosedSignal\0"
    "passwordChangedSignal\0"
    "synchronizationProgressUpdatedSignal\0"
    "_current\0_total\0synchronizationCompletedSignal\0"
    "balanceUpdatedSignal\0_actualBalance\0"
    "_pendingBalance\0externalTransactionCreatedSignal\0"
    "quintptr\0_transactionId\0FullTransactionInfo\0"
    "_transaction\0transactionUpdatedSignal\0"
    "initCompletedSignal\0deinitCompletedSignal\0"
    "initImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__WalletGreenWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,
       7,    2,   80,    2, 0x06 /* Public */,
      10,    0,   85,    2, 0x06 /* Public */,
      11,    2,   86,    2, 0x06 /* Public */,
      14,    2,   91,    2, 0x06 /* Public */,
      19,    2,   96,    2, 0x06 /* Public */,
      20,    0,  101,    2, 0x06 /* Public */,
      21,    0,  102,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      22,    0,  103,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void WalletGui::WalletGreenWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletGreenWorker *_t = static_cast<WalletGreenWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletOpenedSignal(); break;
        case 1: _t->walletOpenErrorSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->walletClosedSignal(); break;
        case 3: _t->passwordChangedSignal(); break;
        case 4: _t->synchronizationProgressUpdatedSignal((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 5: _t->synchronizationCompletedSignal(); break;
        case 6: _t->balanceUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 7: _t->externalTransactionCreatedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 8: _t->transactionUpdatedSignal((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 9: _t->initCompletedSignal(); break;
        case 10: _t->deinitCompletedSignal(); break;
        case 11: _t->initImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WalletGreenWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::walletOpenedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::walletOpenErrorSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::walletClosedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::passwordChangedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)(quint32 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::synchronizationProgressUpdatedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::synchronizationCompletedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::balanceUpdatedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)(quintptr , const FullTransactionInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::externalTransactionCreatedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)(quintptr , const FullTransactionInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::transactionUpdatedSignal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::initCompletedSignal)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (WalletGreenWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletGreenWorker::deinitCompletedSignal)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::WalletGreenWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__WalletGreenWorker.data,
      qt_meta_data_WalletGui__WalletGreenWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::WalletGreenWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::WalletGreenWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__WalletGreenWorker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletAdapter"))
        return static_cast< IWalletAdapter*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::WalletGreenWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WalletGui::WalletGreenWorker::walletOpenedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGui::WalletGreenWorker::walletOpenErrorSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGui::WalletGreenWorker::walletClosedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletGui::WalletGreenWorker::passwordChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WalletGui::WalletGreenWorker::synchronizationProgressUpdatedSignal(quint32 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::WalletGreenWorker::synchronizationCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WalletGui::WalletGreenWorker::balanceUpdatedSignal(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGui::WalletGreenWorker::externalTransactionCreatedSignal(quintptr _t1, const FullTransactionInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGui::WalletGreenWorker::transactionUpdatedSignal(quintptr _t1, const FullTransactionInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGui::WalletGreenWorker::initCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void WalletGui::WalletGreenWorker::deinitCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
