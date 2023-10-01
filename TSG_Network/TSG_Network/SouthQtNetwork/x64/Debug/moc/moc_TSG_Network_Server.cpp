/****************************************************************************
** Meta object code from reading C++ file 'TSG_Network_Server.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Api/TSG_Network_Server.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TSG_Network_Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS = QtMocHelpers::stringData(
    "TSG_Netwrok_Server",
    "Sig_NewConn",
    "",
    "clnAddr",
    "clnPort",
    "port",
    "Sig_NewDisConn",
    "Sig_NewDisConnEx",
    "errString",
    "Sig_Warning",
    "FT_Warning",
    "warining",
    "contain",
    "Sig_Info",
    "FT_Info",
    "info",
    "Sig_RecvClnMsg",
    "bytes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[19];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[5];
    char stringdata6[15];
    char stringdata7[17];
    char stringdata8[10];
    char stringdata9[12];
    char stringdata10[11];
    char stringdata11[9];
    char stringdata12[8];
    char stringdata13[9];
    char stringdata14[8];
    char stringdata15[5];
    char stringdata16[15];
    char stringdata17[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS_t qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "TSG_Netwrok_Server"
        QT_MOC_LITERAL(19, 11),  // "Sig_NewConn"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 7),  // "clnAddr"
        QT_MOC_LITERAL(40, 7),  // "clnPort"
        QT_MOC_LITERAL(48, 4),  // "port"
        QT_MOC_LITERAL(53, 14),  // "Sig_NewDisConn"
        QT_MOC_LITERAL(68, 16),  // "Sig_NewDisConnEx"
        QT_MOC_LITERAL(85, 9),  // "errString"
        QT_MOC_LITERAL(95, 11),  // "Sig_Warning"
        QT_MOC_LITERAL(107, 10),  // "FT_Warning"
        QT_MOC_LITERAL(118, 8),  // "warining"
        QT_MOC_LITERAL(127, 7),  // "contain"
        QT_MOC_LITERAL(135, 8),  // "Sig_Info"
        QT_MOC_LITERAL(144, 7),  // "FT_Info"
        QT_MOC_LITERAL(152, 4),  // "info"
        QT_MOC_LITERAL(157, 14),  // "Sig_RecvClnMsg"
        QT_MOC_LITERAL(172, 5)   // "bytes"
    },
    "TSG_Netwrok_Server",
    "Sig_NewConn",
    "",
    "clnAddr",
    "clnPort",
    "port",
    "Sig_NewDisConn",
    "Sig_NewDisConnEx",
    "errString",
    "Sig_Warning",
    "FT_Warning",
    "warining",
    "contain",
    "Sig_Info",
    "FT_Info",
    "info",
    "Sig_RecvClnMsg",
    "bytes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTSG_Netwrok_ServerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,
       6,    2,   57,    2, 0x06,    5 /* Public */,
       7,    3,   62,    2, 0x06,    8 /* Public */,
       9,    2,   69,    2, 0x06,   12 /* Public */,
      13,    2,   74,    2, 0x06,   15 /* Public */,
      16,    3,   79,    2, 0x06,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QString,    3,    4,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QByteArray,    3,    4,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject TSG_Netwrok_Server::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTSG_Netwrok_ServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TSG_Netwrok_Server, std::true_type>,
        // method 'Sig_NewConn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        // method 'Sig_NewDisConn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        // method 'Sig_NewDisConnEx'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Sig_Warning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FT_Warning, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Sig_Info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FT_Info, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Sig_RecvClnMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>
    >,
    nullptr
} };

void TSG_Netwrok_Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TSG_Netwrok_Server *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Sig_NewConn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[3]))); break;
        case 1: _t->Sig_NewDisConn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 2: _t->Sig_NewDisConnEx((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->Sig_Warning((*reinterpret_cast< std::add_pointer_t<FT_Warning>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->Sig_Info((*reinterpret_cast< std::add_pointer_t<FT_Info>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->Sig_RecvClnMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 , const quint16 );
            if (_t _q_method = &TSG_Netwrok_Server::Sig_NewConn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 );
            if (_t _q_method = &TSG_Netwrok_Server::Sig_NewDisConn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 , QString );
            if (_t _q_method = &TSG_Netwrok_Server::Sig_NewDisConnEx; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(FT_Warning , const QString & );
            if (_t _q_method = &TSG_Netwrok_Server::Sig_Warning; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(FT_Info , const QString & );
            if (_t _q_method = &TSG_Netwrok_Server::Sig_Info; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TSG_Netwrok_Server::*)(const QString & , const quint16 , const QByteArray & );
            if (_t _q_method = &TSG_Netwrok_Server::Sig_RecvClnMsg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *TSG_Netwrok_Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TSG_Netwrok_Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTSG_Netwrok_ServerENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
