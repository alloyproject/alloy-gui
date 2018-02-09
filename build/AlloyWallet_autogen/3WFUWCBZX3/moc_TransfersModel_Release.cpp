/****************************************************************************
** Meta object code from reading C++ file 'TransfersModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Models/TransfersModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransfersModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransfersModel_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransfersModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransfersModel_t qt_meta_stringdata_WalletGui__TransfersModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WalletGui::TransfersModel"
QT_MOC_LITERAL(1, 26, 7), // "Columns"
QT_MOC_LITERAL(2, 34, 14), // "COLUMN_ADDRESS"
QT_MOC_LITERAL(3, 49, 13) // "COLUMN_AMOUNT"

    },
    "WalletGui::TransfersModel\0Columns\0"
    "COLUMN_ADDRESS\0COLUMN_AMOUNT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransfersModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(WalletGui::TransfersModel::COLUMN_ADDRESS),
       3, uint(WalletGui::TransfersModel::COLUMN_AMOUNT),

       0        // eod
};

void WalletGui::TransfersModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WalletGui::TransfersModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__TransfersModel.data,
      qt_meta_data_WalletGui__TransfersModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransfersModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransfersModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransfersModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::TransfersModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
