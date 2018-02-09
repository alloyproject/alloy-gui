/****************************************************************************
** Meta object code from reading C++ file 'OptimizationManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Application/OptimizationManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptimizationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__OptimizationManager_t {
    QByteArrayData data[25];
    char stringdata0[448];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__OptimizationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__OptimizationManager_t qt_meta_stringdata_WalletGui__OptimizationManager = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WalletGui::OptimizationManager"
QT_MOC_LITERAL(1, 31, 41), // "fusionTransactionsVisibilityC..."
QT_MOC_LITERAL(2, 73, 0), // ""
QT_MOC_LITERAL(3, 74, 10), // "_isVisible"
QT_MOC_LITERAL(4, 85, 12), // "walletOpened"
QT_MOC_LITERAL(5, 98, 15), // "walletOpenError"
QT_MOC_LITERAL(6, 114, 11), // "_initStatus"
QT_MOC_LITERAL(7, 126, 12), // "walletClosed"
QT_MOC_LITERAL(8, 139, 15), // "passwordChanged"
QT_MOC_LITERAL(9, 155, 30), // "synchronizationProgressUpdated"
QT_MOC_LITERAL(10, 186, 8), // "_current"
QT_MOC_LITERAL(11, 195, 6), // "_total"
QT_MOC_LITERAL(12, 202, 24), // "synchronizationCompleted"
QT_MOC_LITERAL(13, 227, 14), // "balanceUpdated"
QT_MOC_LITERAL(14, 242, 14), // "_actualBalance"
QT_MOC_LITERAL(15, 257, 15), // "_pendingBalance"
QT_MOC_LITERAL(16, 273, 26), // "externalTransactionCreated"
QT_MOC_LITERAL(17, 300, 8), // "quintptr"
QT_MOC_LITERAL(18, 309, 14), // "_transactionId"
QT_MOC_LITERAL(19, 324, 19), // "FullTransactionInfo"
QT_MOC_LITERAL(20, 344, 12), // "_transaction"
QT_MOC_LITERAL(21, 357, 18), // "transactionUpdated"
QT_MOC_LITERAL(22, 376, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(23, 407, 7), // "_status"
QT_MOC_LITERAL(24, 415, 32) // "cryptoNoteAdapterDeinitCompleted"

    },
    "WalletGui::OptimizationManager\0"
    "fusionTransactionsVisibilityChangedSignal\0"
    "\0_isVisible\0walletOpened\0walletOpenError\0"
    "_initStatus\0walletClosed\0passwordChanged\0"
    "synchronizationProgressUpdated\0_current\0"
    "_total\0synchronizationCompleted\0"
    "balanceUpdated\0_actualBalance\0"
    "_pendingBalance\0externalTransactionCreated\0"
    "quintptr\0_transactionId\0FullTransactionInfo\0"
    "_transaction\0transactionUpdated\0"
    "cryptoNoteAdapterInitCompleted\0_status\0"
    "cryptoNoteAdapterDeinitCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__OptimizationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    2,   83,    2, 0x0a /* Public */,
      12,    0,   88,    2, 0x0a /* Public */,
      13,    2,   89,    2, 0x0a /* Public */,
      16,    2,   94,    2, 0x0a /* Public */,
      21,    2,   99,    2, 0x0a /* Public */,
      22,    1,  104,    2, 0x0a /* Public */,
      24,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   14,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,

       0        // eod
};

void WalletGui::OptimizationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptimizationManager *_t = static_cast<OptimizationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fusionTransactionsVisibilityChangedSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->walletOpened(); break;
        case 2: _t->walletOpenError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->walletClosed(); break;
        case 4: _t->passwordChanged(); break;
        case 5: _t->synchronizationProgressUpdated((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 6: _t->synchronizationCompleted(); break;
        case 7: _t->balanceUpdated((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->externalTransactionCreated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 9: _t->transactionUpdated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 10: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->cryptoNoteAdapterDeinitCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OptimizationManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptimizationManager::fusionTransactionsVisibilityChangedSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::OptimizationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__OptimizationManager.data,
      qt_meta_data_WalletGui__OptimizationManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::OptimizationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::OptimizationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__OptimizationManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IOptimizationManager"))
        return static_cast< IOptimizationManager*>(this);
    if (!strcmp(_clname, "IWalletAdapterObserver"))
        return static_cast< IWalletAdapterObserver*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::OptimizationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WalletGui::OptimizationManager::fusionTransactionsVisibilityChangedSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
