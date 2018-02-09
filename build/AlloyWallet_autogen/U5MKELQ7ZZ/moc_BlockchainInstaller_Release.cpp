/****************************************************************************
** Meta object code from reading C++ file 'BlockchainInstaller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Gui/Common/BlockchainInstaller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlockchainInstaller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__BlockchainInstaller_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__BlockchainInstaller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__BlockchainInstaller_t qt_meta_stringdata_WalletGui__BlockchainInstaller = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WalletGui::BlockchainInstaller"
QT_MOC_LITERAL(1, 31, 14), // "copyFileSignal"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "_sourcePath"
QT_MOC_LITERAL(4, 59, 11), // "_targetPath"
QT_MOC_LITERAL(5, 71, 17), // "showMessageSignal"
QT_MOC_LITERAL(6, 89, 8) // "_message"

    },
    "WalletGui::BlockchainInstaller\0"
    "copyFileSignal\0\0_sourcePath\0_targetPath\0"
    "showMessageSignal\0_message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__BlockchainInstaller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void WalletGui::BlockchainInstaller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockchainInstaller *_t = static_cast<BlockchainInstaller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyFileSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->showMessageSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BlockchainInstaller::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockchainInstaller::copyFileSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BlockchainInstaller::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlockchainInstaller::showMessageSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::BlockchainInstaller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__BlockchainInstaller.data,
      qt_meta_data_WalletGui__BlockchainInstaller,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::BlockchainInstaller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::BlockchainInstaller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__BlockchainInstaller.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::BlockchainInstaller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::BlockchainInstaller::copyFileSignal(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::BlockchainInstaller::showMessageSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WalletGui__AsyncFileProcessor_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__AsyncFileProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__AsyncFileProcessor_t qt_meta_stringdata_WalletGui__AsyncFileProcessor = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WalletGui::AsyncFileProcessor"
QT_MOC_LITERAL(1, 30, 18), // "copyProgressSignal"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "_copied"
QT_MOC_LITERAL(4, 58, 6), // "_total"
QT_MOC_LITERAL(5, 65, 12), // "copyFinished"
QT_MOC_LITERAL(6, 78, 11), // "errorSignal"
QT_MOC_LITERAL(7, 90, 6) // "_error"

    },
    "WalletGui::AsyncFileProcessor\0"
    "copyProgressSignal\0\0_copied\0_total\0"
    "copyFinished\0errorSignal\0_error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AsyncFileProcessor[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void WalletGui::AsyncFileProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncFileProcessor *_t = static_cast<AsyncFileProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copyProgressSignal((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 1: _t->copyFinished(); break;
        case 2: _t->errorSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AsyncFileProcessor::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncFileProcessor::copyProgressSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AsyncFileProcessor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncFileProcessor::copyFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AsyncFileProcessor::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncFileProcessor::errorSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::AsyncFileProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__AsyncFileProcessor.data,
      qt_meta_data_WalletGui__AsyncFileProcessor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::AsyncFileProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AsyncFileProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AsyncFileProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::AsyncFileProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WalletGui::AsyncFileProcessor::copyProgressSignal(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::AsyncFileProcessor::copyFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::AsyncFileProcessor::errorSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
