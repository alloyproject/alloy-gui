/****************************************************************************
** Meta object code from reading C++ file 'NoWalletFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/NoWallet/NoWalletFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NoWalletFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__NoWalletFrame_t {
    QByteArrayData data[29];
    char stringdata0[485];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__NoWalletFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__NoWalletFrame_t qt_meta_stringdata_WalletGui__NoWalletFrame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::NoWalletFrame"
QT_MOC_LITERAL(1, 25, 25), // "createWalletClickedSignal"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 23), // "openWalletClickedSignal"
QT_MOC_LITERAL(4, 76, 12), // "walletOpened"
QT_MOC_LITERAL(5, 89, 15), // "walletOpenError"
QT_MOC_LITERAL(6, 105, 11), // "_initStatus"
QT_MOC_LITERAL(7, 117, 12), // "walletClosed"
QT_MOC_LITERAL(8, 130, 15), // "passwordChanged"
QT_MOC_LITERAL(9, 146, 30), // "synchronizationProgressUpdated"
QT_MOC_LITERAL(10, 177, 8), // "_current"
QT_MOC_LITERAL(11, 186, 6), // "_total"
QT_MOC_LITERAL(12, 193, 24), // "synchronizationCompleted"
QT_MOC_LITERAL(13, 218, 14), // "balanceUpdated"
QT_MOC_LITERAL(14, 233, 14), // "_actualBalance"
QT_MOC_LITERAL(15, 248, 15), // "_pendingBalance"
QT_MOC_LITERAL(16, 264, 26), // "externalTransactionCreated"
QT_MOC_LITERAL(17, 291, 8), // "quintptr"
QT_MOC_LITERAL(18, 300, 14), // "_transactionId"
QT_MOC_LITERAL(19, 315, 19), // "FullTransactionInfo"
QT_MOC_LITERAL(20, 335, 12), // "_transaction"
QT_MOC_LITERAL(21, 348, 18), // "transactionUpdated"
QT_MOC_LITERAL(22, 367, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(23, 398, 7), // "_status"
QT_MOC_LITERAL(24, 406, 32), // "cryptoNoteAdapterDeinitCompleted"
QT_MOC_LITERAL(25, 439, 9), // "okClicked"
QT_MOC_LITERAL(26, 449, 9), // "_password"
QT_MOC_LITERAL(27, 459, 10), // "loadWallet"
QT_MOC_LITERAL(28, 470, 14) // "loadLegacyKeys"

    },
    "WalletGui::NoWalletFrame\0"
    "createWalletClickedSignal\0\0"
    "openWalletClickedSignal\0walletOpened\0"
    "walletOpenError\0_initStatus\0walletClosed\0"
    "passwordChanged\0synchronizationProgressUpdated\0"
    "_current\0_total\0synchronizationCompleted\0"
    "balanceUpdated\0_actualBalance\0"
    "_pendingBalance\0externalTransactionCreated\0"
    "quintptr\0_transactionId\0FullTransactionInfo\0"
    "_transaction\0transactionUpdated\0"
    "cryptoNoteAdapterInitCompleted\0_status\0"
    "cryptoNoteAdapterDeinitCompleted\0"
    "okClicked\0_password\0loadWallet\0"
    "loadLegacyKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__NoWalletFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  101,    2, 0x0a /* Public */,
       5,    1,  102,    2, 0x0a /* Public */,
       7,    0,  105,    2, 0x0a /* Public */,
       8,    0,  106,    2, 0x0a /* Public */,
       9,    2,  107,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    2,  113,    2, 0x0a /* Public */,
      16,    2,  118,    2, 0x0a /* Public */,
      21,    2,  123,    2, 0x0a /* Public */,
      22,    1,  128,    2, 0x0a /* Public */,
      24,    0,  131,    2, 0x0a /* Public */,
      25,    0,  132,    2, 0x08 /* Private */,
       8,    1,  133,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      27,    1,  136,    2, 0x00 /* Private */,
      28,    1,  139,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   26,

       0        // eod
};

void WalletGui::NoWalletFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NoWalletFrame *_t = static_cast<NoWalletFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createWalletClickedSignal(); break;
        case 1: _t->openWalletClickedSignal(); break;
        case 2: _t->walletOpened(); break;
        case 3: _t->walletOpenError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->walletClosed(); break;
        case 5: _t->passwordChanged(); break;
        case 6: _t->synchronizationProgressUpdated((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 7: _t->synchronizationCompleted(); break;
        case 8: _t->balanceUpdated((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 9: _t->externalTransactionCreated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 10: _t->transactionUpdated((*reinterpret_cast< quintptr(*)>(_a[1])),(*reinterpret_cast< const FullTransactionInfo(*)>(_a[2]))); break;
        case 11: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->cryptoNoteAdapterDeinitCompleted(); break;
        case 13: _t->okClicked(); break;
        case 14: _t->passwordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->loadWallet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->loadLegacyKeys((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NoWalletFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoWalletFrame::createWalletClickedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NoWalletFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoWalletFrame::openWalletClickedSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::NoWalletFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__NoWalletFrame.data,
      qt_meta_data_WalletGui__NoWalletFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::NoWalletFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::NoWalletFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__NoWalletFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletUiItem"))
        return static_cast< IWalletUiItem*>(this);
    if (!strcmp(_clname, "IWalletAdapterObserver"))
        return static_cast< IWalletAdapterObserver*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::NoWalletFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::NoWalletFrame::createWalletClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGui::NoWalletFrame::openWalletClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
