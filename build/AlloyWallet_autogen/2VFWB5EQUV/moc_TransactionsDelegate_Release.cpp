/****************************************************************************
** Meta object code from reading C++ file 'TransactionsDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/Transactions/TransactionsDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionsDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransactionsDelegate_t {
    QByteArrayData data[23];
    char stringdata0[396];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransactionsDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransactionsDelegate_t qt_meta_stringdata_WalletGui__TransactionsDelegate = {
    {
QT_MOC_LITERAL(0, 0, 31), // "WalletGui::TransactionsDelegate"
QT_MOC_LITERAL(1, 32, 12), // "walletOpened"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 15), // "walletOpenError"
QT_MOC_LITERAL(4, 62, 11), // "_initStatus"
QT_MOC_LITERAL(5, 74, 12), // "walletClosed"
QT_MOC_LITERAL(6, 87, 15), // "passwordChanged"
QT_MOC_LITERAL(7, 103, 30), // "synchronizationProgressUpdated"
QT_MOC_LITERAL(8, 134, 8), // "_current"
QT_MOC_LITERAL(9, 143, 6), // "_total"
QT_MOC_LITERAL(10, 150, 24), // "synchronizationCompleted"
QT_MOC_LITERAL(11, 175, 14), // "balanceUpdated"
QT_MOC_LITERAL(12, 190, 14), // "_actualBalance"
QT_MOC_LITERAL(13, 205, 15), // "_pendingBalance"
QT_MOC_LITERAL(14, 221, 26), // "externalTransactionCreated"
QT_MOC_LITERAL(15, 248, 8), // "quintptr"
QT_MOC_LITERAL(16, 257, 14), // "_transactionId"
QT_MOC_LITERAL(17, 272, 19), // "FullTransactionInfo"
QT_MOC_LITERAL(18, 292, 12), // "_transaction"
QT_MOC_LITERAL(19, 305, 18), // "transactionUpdated"
QT_MOC_LITERAL(20, 324, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(21, 355, 7), // "_status"
QT_MOC_LITERAL(22, 363, 32) // "cryptoNoteAdapterDeinitCompleted"

    },
    "WalletGui::TransactionsDelegate\0"
    "walletOpened\0\0walletOpenError\0_initStatus\0"
    "walletClosed\0passwordChanged\0"
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

static const uint qt_meta_data_WalletGui__TransactionsDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    2,   75,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    2,   81,    2, 0x0a /* Public */,
      14,    2,   86,    2, 0x0a /* Public */,
      19,    2,   91,    2, 0x0a /* Public */,
      20,    1,   96,    2, 0x0a /* Public */,
      22,    0,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

void WalletGui::TransactionsDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionsDelegate *_t = static_cast<TransactionsDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletOpened(); break;
        case 1: _t->walletOpenError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->walletClosed(); break;
        case 3: _t->passwordChanged(); break;
        case 4: _t->synchronizationProgressUpdated((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 5: _t->synchronizationCompleted(); break;
        case 6: _t->balanceUpdated((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 7: _t->externalTransactionCreated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 8: _t->transactionUpdated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 9: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->cryptoNoteAdapterDeinitCompleted(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::TransactionsDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_WalletGui__TransactionsDelegate.data,
      qt_meta_data_WalletGui__TransactionsDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransactionsDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransactionsDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransactionsDelegate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletAdapterObserver"))
        return static_cast< IWalletAdapterObserver*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int WalletGui::TransactionsDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
