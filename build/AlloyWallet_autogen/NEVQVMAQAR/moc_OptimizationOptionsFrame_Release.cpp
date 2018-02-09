/****************************************************************************
** Meta object code from reading C++ file 'OptimizationOptionsFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/Options/OptimizationOptionsFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptimizationOptionsFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__OptimizationOptionsFrame_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__OptimizationOptionsFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__OptimizationOptionsFrame_t qt_meta_stringdata_WalletGui__OptimizationOptionsFrame = {
    {
QT_MOC_LITERAL(0, 0, 35), // "WalletGui::OptimizationOption..."
QT_MOC_LITERAL(1, 36, 24), // "showRestartWarningSignal"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 5), // "_show"
QT_MOC_LITERAL(4, 68, 25), // "disableAcceptButtonSignal"
QT_MOC_LITERAL(5, 94, 8), // "_disable"
QT_MOC_LITERAL(6, 103, 16), // "thresholdChanged"
QT_MOC_LITERAL(7, 120, 6), // "_value"
QT_MOC_LITERAL(8, 127, 12), // "mixinChanged"
QT_MOC_LITERAL(9, 140, 6) // "_mixin"

    },
    "WalletGui::OptimizationOptionsFrame\0"
    "showRestartWarningSignal\0\0_show\0"
    "disableAcceptButtonSignal\0_disable\0"
    "thresholdChanged\0_value\0mixinChanged\0"
    "_mixin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__OptimizationOptionsFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void WalletGui::OptimizationOptionsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptimizationOptionsFrame *_t = static_cast<OptimizationOptionsFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showRestartWarningSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->disableAcceptButtonSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->thresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->mixinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OptimizationOptionsFrame::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptimizationOptionsFrame::showRestartWarningSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OptimizationOptionsFrame::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptimizationOptionsFrame::disableAcceptButtonSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::OptimizationOptionsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__OptimizationOptionsFrame.data,
      qt_meta_data_WalletGui__OptimizationOptionsFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::OptimizationOptionsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::OptimizationOptionsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__OptimizationOptionsFrame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IOptionsPage"))
        return static_cast< IOptionsPage*>(this);
    if (!strcmp(_clname, "IWalletUiItem"))
        return static_cast< IWalletUiItem*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::OptimizationOptionsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::OptimizationOptionsFrame::showRestartWarningSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::OptimizationOptionsFrame::disableAcceptButtonSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
