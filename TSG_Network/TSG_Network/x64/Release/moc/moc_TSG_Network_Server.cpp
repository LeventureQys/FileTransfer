/****************************************************************************
** Meta object code from reading C++ file 'TSG_Network_Server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../SouthQtNetwork/Api/TSG_Network_Server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TSG_Network_Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TSG_Netwrok_Server_t {
    QByteArrayData data[18];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TSG_Netwrok_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TSG_Netwrok_Server_t qt_meta_stringdata_TSG_Netwrok_Server = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TSG_Netwrok_Server"
QT_MOC_LITERAL(1, 19, 11), // "Sig_NewConn"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "clnAddr"
QT_MOC_LITERAL(4, 40, 7), // "clnPort"
QT_MOC_LITERAL(5, 48, 4), // "port"
QT_MOC_LITERAL(6, 53, 14), // "Sig_NewDisConn"
QT_MOC_LITERAL(7, 68, 16), // "Sig_NewDisConnEx"
QT_MOC_LITERAL(8, 85, 9), // "errString"
QT_MOC_LITERAL(9, 95, 11), // "Sig_Warning"
QT_MOC_LITERAL(10, 107, 10), // "FT_Warning"
QT_MOC_LITERAL(11, 118, 8), // "warining"
QT_MOC_LITERAL(12, 127, 7), // "contain"
QT_MOC_LITERAL(13, 135, 8), // "Sig_Info"
QT_MOC_LITERAL(14, 144, 7), // "FT_Info"
QT_MOC_LITERAL(15, 152, 4), // "info"
QT_MOC_LITERAL(16, 157, 14), // "Sig_RecvClnMsg"
QT_MOC_LITERAL(17, 172, 5) // "bytes"

    },
    "TSG_Netwrok_Server\0Sig_NewConn\0\0clnAddr\0"
    "clnPort\0port\0Sig_NewDisConn\0"
    "Sig_NewDisConnEx\0errString\0Sig_Warning\0"
    "FT_Warning\0warining\0contain\0Sig_Info\0"
    "FT_Info\0info\0Sig_RecvClnMsg\0bytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TSG_Netwrok_Server[] = {

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
       1,    3,   44,    2, 0x06 /* Public */,
       6,    2,   51,    2, 0x06 /* Public */,
       7,    3,   56,    2, 0x06 /* Public */,
       9,    2,   63,    2, 0x06 /* Public */,
      13,    2,   68,    2, 0x06 /* Public */,
      16,    3,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QString,    3,    4,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QByteArray,    3,    4,   17,

       0        // eod
};

void TSG_Netwrok_Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TSG_Netwrok_Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_NewConn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const quint16(*)>(_a[3]))); break;
        case 1: _t->Sig_NewDisConn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 2: _t->Sig_NewDisConnEx((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->Sig_Warning((*reinterpret_cast< FT_Warning(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->Sig_Info((*reinterpret_cast< FT_Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->Sig_RecvClnMsg((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Netwrok_Server::Sig_NewConn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Netwrok_Server::Sig_NewDisConn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Netwrok_Server::Sig_NewDisConnEx)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(FT_Warning , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Netwrok_Server::Sig_Warning)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(FT_Info , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Netwrok_Server::Sig_Info)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TSG_Netwrok_Server::Sig_RecvClnMsg)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TSG_Netwrok_Server::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TSG_Netwrok_Server.data,
    qt_meta_data_TSG_Netwrok_Server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TSG_Netwrok_Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TSG_Netwrok_Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TSG_Netwrok_Server.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TSG_Netwrok_Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TSG_Netwrok_Server::Sig_NewConn(const QString & _t1, const quint16 _t2, const quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TSG_Netwrok_Server::Sig_NewDisConn(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TSG_Netwrok_Server::Sig_NewDisConnEx(const QString & _t1, const quint16 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TSG_Netwrok_Server::Sig_Warning(FT_Warning _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TSG_Netwrok_Server::Sig_Info(FT_Info _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TSG_Netwrok_Server::Sig_RecvClnMsg(const QString & _t1, const quint16 _t2, const QByteArray & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
