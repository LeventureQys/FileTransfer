/****************************************************************************
** Meta object code from reading C++ file 'QtTcpClientHandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Api/QtTcpClientHandler.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtTcpClientHandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS = QtMocHelpers::stringData(
    "QtTcpClientHandler",
    "Sig_Connected",
    "",
    "qsServerAddr",
    "nServerPort",
    "Sig_Disconnect",
    "Sig_RecvTCP",
    "bytes",
    "ConnectedServer",
    "DisConnectedServer",
    "RecvMsg"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[19];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[19];
    char stringdata10[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS_t qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QtTcpClientHandler"
        QT_MOC_LITERAL(19, 13),  // "Sig_Connected"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 12),  // "qsServerAddr"
        QT_MOC_LITERAL(47, 11),  // "nServerPort"
        QT_MOC_LITERAL(59, 14),  // "Sig_Disconnect"
        QT_MOC_LITERAL(74, 11),  // "Sig_RecvTCP"
        QT_MOC_LITERAL(86, 5),  // "bytes"
        QT_MOC_LITERAL(92, 15),  // "ConnectedServer"
        QT_MOC_LITERAL(108, 18),  // "DisConnectedServer"
        QT_MOC_LITERAL(127, 7)   // "RecvMsg"
    },
    "QtTcpClientHandler",
    "Sig_Connected",
    "",
    "qsServerAddr",
    "nServerPort",
    "Sig_Disconnect",
    "Sig_RecvTCP",
    "bytes",
    "ConnectedServer",
    "DisConnectedServer",
    "RecvMsg"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtTcpClientHandlerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    2,   55,    2, 0x06,    4 /* Public */,
       6,    1,   60,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   63,    2, 0x08,    9 /* Private */,
       9,    0,   64,    2, 0x08,   10 /* Private */,
      10,    0,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QByteArray,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtTcpClientHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtTcpClientHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtTcpClientHandler, std::true_type>,
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
        // method 'ConnectedServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DisConnectedServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RecvMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QtTcpClientHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtTcpClientHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Sig_Connected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 1: _t->Sig_Disconnect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 2: _t->Sig_RecvTCP((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 3: _t->ConnectedServer(); break;
        case 4: _t->DisConnectedServer(); break;
        case 5: _t->RecvMsg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtTcpClientHandler::*)(const QString & , const quint16 );
            if (_t _q_method = &QtTcpClientHandler::Sig_Connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtTcpClientHandler::*)(const QString & , const quint16 );
            if (_t _q_method = &QtTcpClientHandler::Sig_Disconnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtTcpClientHandler::*)(const QByteArray & );
            if (_t _q_method = &QtTcpClientHandler::Sig_RecvTCP; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QtTcpClientHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTcpClientHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtTcpClientHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtTcpClientHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtTcpClientHandler::Sig_Connected(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtTcpClientHandler::Sig_Disconnect(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtTcpClientHandler::Sig_RecvTCP(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
