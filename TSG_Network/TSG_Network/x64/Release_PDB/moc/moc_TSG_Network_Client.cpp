/****************************************************************************
** Meta object code from reading C++ file 'TSG_Network_Client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../SouthQtNetwork/Api/TSG_Network_Client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TSG_Network_Client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TSG_Network_Client_t {
    QByteArrayData data[17];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TSG_Network_Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TSG_Network_Client_t qt_meta_stringdata_TSG_Network_Client = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TSG_Network_Client"
QT_MOC_LITERAL(1, 19, 13), // "Sig_Connected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "qsServerAddr"
QT_MOC_LITERAL(4, 47, 11), // "nServerPort"
QT_MOC_LITERAL(5, 59, 14), // "Sig_Disconnect"
QT_MOC_LITERAL(6, 74, 11), // "Sig_RecvTCP"
QT_MOC_LITERAL(7, 86, 5), // "bytes"
QT_MOC_LITERAL(8, 92, 15), // "Sig_RecvNewFile"
QT_MOC_LITERAL(9, 108, 8), // "filePath"
QT_MOC_LITERAL(10, 117, 11), // "Sig_Warning"
QT_MOC_LITERAL(11, 129, 10), // "FT_Warning"
QT_MOC_LITERAL(12, 140, 8), // "warining"
QT_MOC_LITERAL(13, 149, 7), // "contain"
QT_MOC_LITERAL(14, 157, 8), // "Sig_Info"
QT_MOC_LITERAL(15, 166, 7), // "FT_Info"
QT_MOC_LITERAL(16, 174, 4) // "info"

    },
    "TSG_Network_Client\0Sig_Connected\0\0"
    "qsServerAddr\0nServerPort\0Sig_Disconnect\0"
    "Sig_RecvTCP\0bytes\0Sig_RecvNewFile\0"
    "filePath\0Sig_Warning\0FT_Warning\0"
    "warining\0contain\0Sig_Info\0FT_Info\0"
    "info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TSG_Network_Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       8,    1,   57,    2, 0x06 /* Public */,
      10,    2,   60,    2, 0x06 /* Public */,
      14,    2,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString,   16,   13,

       0        // eod
};

void TSG_Network_Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TSG_Network_Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_Connected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 1: _t->Sig_Disconnect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 2: _t->Sig_RecvTCP((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->Sig_RecvNewFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Sig_Warning((*reinterpret_cast< FT_Warning(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->Sig_Info((*reinterpret_cast< FT_Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TSG_Network_Client::*)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Network_Client::Sig_Connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Network_Client::Sig_Disconnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Network_Client::Sig_RecvTCP)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Network_Client::Sig_RecvNewFile)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(FT_Warning , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Network_Client::Sig_Warning)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(FT_Info , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Network_Client::Sig_Info)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TSG_Network_Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TSG_Network_Client.data,
    qt_meta_data_TSG_Network_Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TSG_Network_Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TSG_Network_Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TSG_Network_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TSG_Network_Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TSG_Network_Client::Sig_Connected(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TSG_Network_Client::Sig_Disconnect(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TSG_Network_Client::Sig_RecvTCP(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TSG_Network_Client::Sig_RecvNewFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TSG_Network_Client::Sig_Warning(FT_Warning _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TSG_Network_Client::Sig_Info(FT_Info _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
