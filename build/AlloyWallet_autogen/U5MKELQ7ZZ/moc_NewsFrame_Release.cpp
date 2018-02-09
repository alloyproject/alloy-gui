/****************************************************************************
** Meta object code from reading C++ file 'NewsFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/Common/NewsFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NewsFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__NewsFrame_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__NewsFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__NewsFrame_t qt_meta_stringdata_WalletGui__NewsFrame = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WalletGui::NewsFrame"
QT_MOC_LITERAL(1, 21, 19), // "linkActivatedSignal"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "_title"
QT_MOC_LITERAL(4, 49, 10), // "newMessage"
QT_MOC_LITERAL(5, 60, 9), // "upClicked"
QT_MOC_LITERAL(6, 70, 11), // "downClicked"
QT_MOC_LITERAL(7, 82, 10) // "updateText"

    },
    "WalletGui::NewsFrame\0linkActivatedSignal\0"
    "\0_title\0newMessage\0upClicked\0downClicked\0"
    "updateText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__NewsFrame[] = {

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
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void WalletGui::NewsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NewsFrame *_t = static_cast<NewsFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkActivatedSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newMessage(); break;
        case 2: _t->upClicked(); break;
        case 3: _t->downClicked(); break;
        case 4: _t->updateText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NewsFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NewsFrame::linkActivatedSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::NewsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__NewsFrame.data,
      qt_meta_data_WalletGui__NewsFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::NewsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::NewsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__NewsFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INewsReaderObserver"))
        return static_cast< INewsReaderObserver*>(this);
    if (!strcmp(_clname, "IWalletUiItem"))
        return static_cast< IWalletUiItem*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::NewsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WalletGui::NewsFrame::linkActivatedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
