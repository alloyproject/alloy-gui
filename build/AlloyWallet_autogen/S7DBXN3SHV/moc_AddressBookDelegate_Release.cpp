/****************************************************************************
** Meta object code from reading C++ file 'AddressBookDelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/AddressBook/AddressBookDelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookDelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__AddressBookDelegate_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__AddressBookDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__AddressBookDelegate_t qt_meta_stringdata_WalletGui__AddressBookDelegate = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WalletGui::AddressBookDelegate"
QT_MOC_LITERAL(1, 31, 12), // "sendToSignal"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "_address"
QT_MOC_LITERAL(4, 54, 10), // "editSignal"
QT_MOC_LITERAL(5, 65, 6), // "_index"
QT_MOC_LITERAL(6, 72, 12) // "deleteSignal"

    },
    "WalletGui::AddressBookDelegate\0"
    "sendToSignal\0\0_address\0editSignal\0"
    "_index\0deleteSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AddressBookDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QPersistentModelIndex,    5,
    QMetaType::Void, QMetaType::QPersistentModelIndex,    5,

       0        // eod
};

void WalletGui::AddressBookDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookDelegate *_t = static_cast<AddressBookDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editSignal((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        case 2: _t->deleteSignal((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddressBookDelegate::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookDelegate::sendToSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddressBookDelegate::*_t)(const QPersistentModelIndex & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookDelegate::editSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddressBookDelegate::*_t)(const QPersistentModelIndex & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookDelegate::deleteSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::AddressBookDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_WalletGui__AddressBookDelegate.data,
      qt_meta_data_WalletGui__AddressBookDelegate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::AddressBookDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AddressBookDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AddressBookDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int WalletGui::AddressBookDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::AddressBookDelegate::sendToSignal(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WalletGui::AddressBookDelegate *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::AddressBookDelegate::editSignal(const QPersistentModelIndex & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WalletGui::AddressBookDelegate *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGui::AddressBookDelegate::deleteSignal(const QPersistentModelIndex & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< WalletGui::AddressBookDelegate *>(this), &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
