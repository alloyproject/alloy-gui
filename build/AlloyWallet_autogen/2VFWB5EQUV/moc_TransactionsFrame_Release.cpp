/****************************************************************************
** Meta object code from reading C++ file 'TransactionsFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/Transactions/TransactionsFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionsFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransactionsFrame_t {
    QByteArrayData data[15];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransactionsFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransactionsFrame_t qt_meta_stringdata_WalletGui__TransactionsFrame = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGui::TransactionsFrame"
QT_MOC_LITERAL(1, 29, 11), // "exportToCsv"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "transactionDoubleClicked"
QT_MOC_LITERAL(4, 67, 6), // "_index"
QT_MOC_LITERAL(5, 74, 18), // "transactionClicked"
QT_MOC_LITERAL(6, 93, 13), // "filterChanged"
QT_MOC_LITERAL(7, 107, 19), // "filterPeriodChanged"
QT_MOC_LITERAL(8, 127, 9), // "_dateTime"
QT_MOC_LITERAL(9, 137, 17), // "filterHashChanged"
QT_MOC_LITERAL(10, 155, 5), // "_hash"
QT_MOC_LITERAL(11, 161, 20), // "filterAddressChanged"
QT_MOC_LITERAL(12, 182, 10), // "showFilter"
QT_MOC_LITERAL(13, 193, 3), // "_on"
QT_MOC_LITERAL(14, 197, 12) // "resetClicked"

    },
    "WalletGui::TransactionsFrame\0exportToCsv\0"
    "\0transactionDoubleClicked\0_index\0"
    "transactionClicked\0filterChanged\0"
    "filterPeriodChanged\0_dateTime\0"
    "filterHashChanged\0_hash\0filterAddressChanged\0"
    "showFilter\0_on\0resetClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransactionsFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QDateTime,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void WalletGui::TransactionsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionsFrame *_t = static_cast<TransactionsFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exportToCsv(); break;
        case 1: _t->transactionDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->filterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->filterPeriodChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 5: _t->filterHashChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->filterAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->showFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->resetClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::TransactionsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__TransactionsFrame.data,
      qt_meta_data_WalletGui__TransactionsFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransactionsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransactionsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransactionsFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletUiItem"))
        return static_cast< IWalletUiItem*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::TransactionsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
