/****************************************************************************
** Meta object code from reading C++ file 'AddressBookModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/AddressBookModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__AddressBookModel_t {
    QByteArrayData data[20];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__AddressBookModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__AddressBookModel_t qt_meta_stringdata_WalletGui__AddressBookModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGui::AddressBookModel"
QT_MOC_LITERAL(1, 28, 17), // "addressBookOpened"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "addressBookClosed"
QT_MOC_LITERAL(4, 65, 12), // "addressAdded"
QT_MOC_LITERAL(5, 78, 8), // "quintptr"
QT_MOC_LITERAL(6, 87, 13), // "_addressIndex"
QT_MOC_LITERAL(7, 101, 13), // "addressEdited"
QT_MOC_LITERAL(8, 115, 14), // "addressRemoved"
QT_MOC_LITERAL(9, 130, 7), // "Columns"
QT_MOC_LITERAL(10, 138, 12), // "COLUMN_LABEL"
QT_MOC_LITERAL(11, 151, 14), // "COLUMN_ADDRESS"
QT_MOC_LITERAL(12, 166, 15), // "COLUMN_DONATION"
QT_MOC_LITERAL(13, 182, 13), // "COLUMN_ACTION"
QT_MOC_LITERAL(14, 196, 5), // "Roles"
QT_MOC_LITERAL(15, 202, 10), // "ROLE_LABEL"
QT_MOC_LITERAL(16, 213, 12), // "ROLE_ADDRESS"
QT_MOC_LITERAL(17, 226, 24), // "ROLE_IS_DONATION_ADDRESS"
QT_MOC_LITERAL(18, 251, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(19, 263, 8) // "ROLE_ROW"

    },
    "WalletGui::AddressBookModel\0"
    "addressBookOpened\0\0addressBookClosed\0"
    "addressAdded\0quintptr\0_addressIndex\0"
    "addressEdited\0addressRemoved\0Columns\0"
    "COLUMN_LABEL\0COLUMN_ADDRESS\0COLUMN_DONATION\0"
    "COLUMN_ACTION\0Roles\0ROLE_LABEL\0"
    "ROLE_ADDRESS\0ROLE_IS_DONATION_ADDRESS\0"
    "ROLE_COLUMN\0ROLE_ROW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AddressBookModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // enums: name, flags, count, data
       9, 0x0,    4,   58,
      14, 0x0,    5,   66,

 // enum data: key, value
      10, uint(WalletGui::AddressBookModel::COLUMN_LABEL),
      11, uint(WalletGui::AddressBookModel::COLUMN_ADDRESS),
      12, uint(WalletGui::AddressBookModel::COLUMN_DONATION),
      13, uint(WalletGui::AddressBookModel::COLUMN_ACTION),
      15, uint(WalletGui::AddressBookModel::ROLE_LABEL),
      16, uint(WalletGui::AddressBookModel::ROLE_ADDRESS),
      17, uint(WalletGui::AddressBookModel::ROLE_IS_DONATION_ADDRESS),
      18, uint(WalletGui::AddressBookModel::ROLE_COLUMN),
      19, uint(WalletGui::AddressBookModel::ROLE_ROW),

       0        // eod
};

void WalletGui::AddressBookModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookModel *_t = static_cast<AddressBookModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBookOpened(); break;
        case 1: _t->addressBookClosed(); break;
        case 2: _t->addressAdded((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 3: _t->addressEdited((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 4: _t->addressRemoved((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::AddressBookModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__AddressBookModel.data,
      qt_meta_data_WalletGui__AddressBookModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::AddressBookModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AddressBookModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AddressBookModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IAddressBookManagerObserver"))
        return static_cast< IAddressBookManagerObserver*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::AddressBookModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
