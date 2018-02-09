/****************************************************************************
** Meta object code from reading C++ file 'BlockExplorerFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/BlockchainExplorer/BlockExplorerFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlockExplorerFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__BlockExplorerFrame_t {
    QByteArrayData data[16];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__BlockExplorerFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__BlockExplorerFrame_t qt_meta_stringdata_WalletGui__BlockExplorerFrame = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WalletGui::BlockExplorerFrame"
QT_MOC_LITERAL(1, 30, 30), // "cryptoNoteAdapterInitCompleted"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 7), // "_status"
QT_MOC_LITERAL(4, 70, 32), // "cryptoNoteAdapterDeinitCompleted"
QT_MOC_LITERAL(5, 103, 8), // "nextPage"
QT_MOC_LITERAL(6, 112, 8), // "prevPage"
QT_MOC_LITERAL(7, 121, 8), // "lastPage"
QT_MOC_LITERAL(8, 130, 16), // "showBlockDetails"
QT_MOC_LITERAL(9, 147, 6), // "_index"
QT_MOC_LITERAL(10, 154, 22), // "showTransactionDetails"
QT_MOC_LITERAL(11, 177, 10), // "showSearch"
QT_MOC_LITERAL(12, 188, 3), // "_on"
QT_MOC_LITERAL(13, 192, 11), // "applyFilter"
QT_MOC_LITERAL(14, 204, 18), // "resetFilterClicked"
QT_MOC_LITERAL(15, 223, 13) // "filterChanged"

    },
    "WalletGui::BlockExplorerFrame\0"
    "cryptoNoteAdapterInitCompleted\0\0_status\0"
    "cryptoNoteAdapterDeinitCompleted\0"
    "nextPage\0prevPage\0lastPage\0showBlockDetails\0"
    "_index\0showTransactionDetails\0showSearch\0"
    "_on\0applyFilter\0resetFilterClicked\0"
    "filterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__BlockExplorerFrame[] = {

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
       1,    1,   69,    2, 0x0a /* Public */,
       4,    0,   72,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      11,    1,   82,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void WalletGui::BlockExplorerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockExplorerFrame *_t = static_cast<BlockExplorerFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cryptoNoteAdapterInitCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cryptoNoteAdapterDeinitCompleted(); break;
        case 2: _t->nextPage(); break;
        case 3: _t->prevPage(); break;
        case 4: _t->lastPage(); break;
        case 5: _t->showBlockDetails((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->showTransactionDetails((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->showSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->applyFilter(); break;
        case 9: _t->resetFilterClicked(); break;
        case 10: _t->filterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::BlockExplorerFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__BlockExplorerFrame.data,
      qt_meta_data_WalletGui__BlockExplorerFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::BlockExplorerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::BlockExplorerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__BlockExplorerFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletUiItem"))
        return static_cast< IWalletUiItem*>(this);
    if (!strcmp(_clname, "ICryptoNoteAdapterObserver"))
        return static_cast< ICryptoNoteAdapterObserver*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::BlockExplorerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
