/****************************************************************************
** Meta object code from reading C++ file 'TSG_Network_Client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Api/TSG_Network_Client.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TSG_Network_Client.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS = QtMocHelpers::stringData(
    "TSG_Network_Client",
    "Sig_Connected",
    "",
    "qsServerAddr",
    "nServerPort",
    "Sig_Disconnect",
    "Sig_RecvTCP",
    "bytes",
    "Sig_RecvNewFile",
    "filePath",
    "Sig_Warning",
    "FT_Warning",
    "warining",
    "contain",
    "Sig_Info",
    "FT_Info",
    "info"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[19];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[9];
    char stringdata10[12];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[8];
    char stringdata14[9];
    char stringdata15[8];
    char stringdata16[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS_t qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "TSG_Network_Client"
        QT_MOC_LITERAL(19, 13),  // "Sig_Connected"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 12),  // "qsServerAddr"
        QT_MOC_LITERAL(47, 11),  // "nServerPort"
        QT_MOC_LITERAL(59, 14),  // "Sig_Disconnect"
        QT_MOC_LITERAL(74, 11),  // "Sig_RecvTCP"
        QT_MOC_LITERAL(86, 5),  // "bytes"
        QT_MOC_LITERAL(92, 15),  // "Sig_RecvNewFile"
        QT_MOC_LITERAL(108, 8),  // "filePath"
        QT_MOC_LITERAL(117, 11),  // "Sig_Warning"
        QT_MOC_LITERAL(129, 10),  // "FT_Warning"
        QT_MOC_LITERAL(140, 8),  // "warining"
        QT_MOC_LITERAL(149, 7),  // "contain"
        QT_MOC_LITERAL(157, 8),  // "Sig_Info"
        QT_MOC_LITERAL(166, 7),  // "FT_Info"
        QT_MOC_LITERAL(174, 4)   // "info"
    },
    "TSG_Network_Client",
    "Sig_Connected",
    "",
    "qsServerAddr",
    "nServerPort",
    "Sig_Disconnect",
    "Sig_RecvTCP",
    "bytes",
    "Sig_RecvNewFile",
    "filePath",
    "Sig_Warning",
    "FT_Warning",
    "warining",
    "contain",
    "Sig_Info",
    "FT_Info",
    "info"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTSG_Network_ClientENDCLASS[] = {

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
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    2,   55,    2, 0x06,    4 /* Public */,
       6,    1,   60,    2, 0x06,    7 /* Public */,
       8,    1,   63,    2, 0x06,    9 /* Public */,
      10,    2,   66,    2, 0x06,   11 /* Public */,
      14,    2,   71,    2, 0x06,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString,   16,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject TSG_Network_Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTSG_Network_ClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TSG_Network_Client, std::true_type>,
        // method 'Sig_Connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        // method 'Sig_Disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const quint16, std::false_type>,
        // method 'Sig_RecvTCP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'Sig_RecvNewFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Sig_Warning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FT_Warning, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Sig_Info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FT_Info, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void TSG_Network_Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TSG_Network_Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Sig_Connected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 1: _t->Sig_Disconnect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 2: _t->Sig_RecvTCP((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->Sig_RecvNewFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->Sig_Warning((*reinterpret_cast< std::add_pointer_t<FT_Warning>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->Sig_Info((*reinterpret_cast< std::add_pointer_t<FT_Info>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TSG_Network_Client::*)(const QString & , const quint16 );
            if (_t _q_method = &TSG_Network_Client::Sig_Connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(const QString & , const quint16 );
            if (_t _q_method = &TSG_Network_Client::Sig_Disconnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(const QByteArray & );
            if (_t _q_method = &TSG_Network_Client::Sig_RecvTCP; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(const QString & );
            if (_t _q_method = &TSG_Network_Client::Sig_RecvNewFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(FT_Warning , const QString & );
            if (_t _q_method = &TSG_Network_Client::Sig_Warning; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TSG_Network_Client::*)(FT_Info , const QString & );
            if (_t _q_method = &TSG_Network_Client::Sig_Info; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *TSG_Network_Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TSG_Network_Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTSG_Network_ClientENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
