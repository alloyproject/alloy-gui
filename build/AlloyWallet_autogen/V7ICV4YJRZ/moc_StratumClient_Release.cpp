/****************************************************************************
** Meta object code from reading C++ file 'StratumClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Miner/StratumClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StratumClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__StratumClient_t {
    QByteArrayData data[20];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__StratumClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__StratumClient_t qt_meta_stringdata_WalletGui__StratumClient = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::StratumClient"
QT_MOC_LITERAL(1, 25, 13), // "startedSignal"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "stoppedSignal"
QT_MOC_LITERAL(4, 54, 17), // "socketErrorSignal"
QT_MOC_LITERAL(5, 72, 23), // "difficultyChangedSignal"
QT_MOC_LITERAL(6, 96, 11), // "_difficulty"
QT_MOC_LITERAL(7, 108, 27), // "goodShareCountChangedSignal"
QT_MOC_LITERAL(8, 136, 15), // "_goodShareCount"
QT_MOC_LITERAL(9, 152, 26), // "badShareCountChangedSignal"
QT_MOC_LITERAL(10, 179, 14), // "_badShareCount"
QT_MOC_LITERAL(11, 194, 33), // "connectionErrorCountChangedSi..."
QT_MOC_LITERAL(12, 228, 21), // "_connectionErrorCount"
QT_MOC_LITERAL(13, 250, 36), // "lastConnectionErrorTimeChange..."
QT_MOC_LITERAL(14, 287, 20), // "_connectionErrorTime"
QT_MOC_LITERAL(15, 308, 10), // "shareFound"
QT_MOC_LITERAL(16, 319, 6), // "_jobId"
QT_MOC_LITERAL(17, 326, 6), // "_nonce"
QT_MOC_LITERAL(18, 333, 7), // "_result"
QT_MOC_LITERAL(19, 341, 11) // "submitShare"

    },
    "WalletGui::StratumClient\0startedSignal\0"
    "\0stoppedSignal\0socketErrorSignal\0"
    "difficultyChangedSignal\0_difficulty\0"
    "goodShareCountChangedSignal\0_goodShareCount\0"
    "badShareCountChangedSignal\0_badShareCount\0"
    "connectionErrorCountChangedSignal\0"
    "_connectionErrorCount\0"
    "lastConnectionErrorTimeChangedSignal\0"
    "_connectionErrorTime\0shareFound\0_jobId\0"
    "_nonce\0_result\0submitShare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__StratumClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    3,   82,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    3,   89,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::QDateTime,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QByteArray,   16,   17,   18,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QByteArray,   16,   17,   18,

       0        // eod
};

void WalletGui::StratumClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StratumClient *_t = static_cast<StratumClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startedSignal(); break;
        case 1: _t->stoppedSignal(); break;
        case 2: _t->socketErrorSignal(); break;
        case 3: _t->difficultyChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 4: _t->goodShareCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->badShareCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->connectionErrorCountChangedSignal((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 7: _t->lastConnectionErrorTimeChangedSignal((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 8: _t->shareFound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 9: _t->submitShare((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (StratumClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::startedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::stoppedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::socketErrorSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::difficultyChangedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::goodShareCountChangedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::badShareCountChangedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::connectionErrorCountChangedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (StratumClient::*_t)(const QDateTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StratumClient::lastConnectionErrorTimeChangedSignal)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::StratumClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__StratumClient.data,
      qt_meta_data_WalletGui__StratumClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::StratumClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::StratumClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__StratumClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IPoolClient"))
        return static_cast< IPoolClient*>(this);
    if (!strcmp(_clname, "IMinerWorkerObserver"))
        return static_cast< IMinerWorkerObserver*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::StratumClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::StratumClient::startedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGui::StratumClient::stoppedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::StratumClient::socketErrorSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletGui::StratumClient::difficultyChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::StratumClient::goodShareCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::StratumClient::badShareCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGui::StratumClient::connectionErrorCountChangedSignal(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGui::StratumClient::lastConnectionErrorTimeChangedSignal(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
