/****************************************************************************
** Meta object code from reading C++ file 'AddressBookFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/AddressBook/AddressBookFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__AddressBookFrame_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__AddressBookFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__AddressBookFrame_t qt_meta_stringdata_WalletGui__AddressBookFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGui::AddressBookFrame"
QT_MOC_LITERAL(1, 28, 12), // "sendToSignal"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "_address"
QT_MOC_LITERAL(4, 51, 10), // "addClicked"
QT_MOC_LITERAL(5, 62, 11), // "editClicked"
QT_MOC_LITERAL(6, 74, 6), // "_index"
QT_MOC_LITERAL(7, 81, 13), // "deleteClicked"
QT_MOC_LITERAL(8, 95, 11), // "contextMenu"
QT_MOC_LITERAL(9, 107, 4) // "_pos"

    },
    "WalletGui::AddressBookFrame\0sendToSignal\0"
    "\0_address\0addClicked\0editClicked\0"
    "_index\0deleteClicked\0contextMenu\0_pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AddressBookFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       8,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPersistentModelIndex,    6,
    QMetaType::Void, QMetaType::QPersistentModelIndex,    6,
    QMetaType::Void, QMetaType::QPoint,    9,

       0        // eod
};

void WalletGui::AddressBookFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookFrame *_t = static_cast<AddressBookFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addClicked(); break;
        case 2: _t->editClicked((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteClicked((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        case 4: _t->contextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddressBookFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressBookFrame::sendToSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::AddressBookFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__AddressBookFrame.data,
      qt_meta_data_WalletGui__AddressBookFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::AddressBookFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AddressBookFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AddressBookFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWalletUiItem"))
        return static_cast< IWalletUiItem*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::AddressBookFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WalletGui::AddressBookFrame::sendToSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
