/****************************************************************************
** Meta object code from reading C++ file 'Worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Miner/Worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__Worker_t {
    QByteArrayData data[8];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__Worker_t qt_meta_stringdata_WalletGui__Worker = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WalletGui::Worker"
QT_MOC_LITERAL(1, 18, 16), // "shareFoundSignal"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "_jobId"
QT_MOC_LITERAL(4, 43, 6), // "_nonce"
QT_MOC_LITERAL(5, 50, 7), // "_result"
QT_MOC_LITERAL(6, 58, 25), // "alternateShareFoundSignal"
QT_MOC_LITERAL(7, 84, 3) // "run"

    },
    "WalletGui::Worker\0shareFoundSignal\0\0"
    "_jobId\0_nonce\0_result\0alternateShareFoundSignal\0"
    "run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__Worker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    3,   36,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   43,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QByteArray,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QByteArray,    3,    4,    5,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void WalletGui::Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Worker *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shareFoundSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->alternateShareFoundSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 2: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Worker::*_t)(const QString & , quint32 , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::shareFoundSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Worker::*_t)(const QString & , quint32 , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::alternateShareFoundSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::Worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__Worker.data,
      qt_meta_data_WalletGui__Worker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__Worker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IMinerWorker"))
        return static_cast< IMinerWorker*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WalletGui::Worker::shareFoundSignal(const QString & _t1, quint32 _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::Worker::alternateShareFoundSignal(const QString & _t1, quint32 _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
