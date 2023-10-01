/****************************************************************************
** Meta object code from reading C++ file 'FileTransfer_Server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../SouthQtNetwork/Api/FileTransfer_Server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTransfer_Server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileTransfer_Server_t {
    QByteArrayData data[27];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTransfer_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTransfer_Server_t qt_meta_stringdata_FileTransfer_Server = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FileTransfer_Server"
QT_MOC_LITERAL(1, 20, 11), // "Sig_NewConn"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "clnAddr"
QT_MOC_LITERAL(4, 41, 7), // "clnPort"
QT_MOC_LITERAL(5, 49, 4), // "port"
QT_MOC_LITERAL(6, 54, 14), // "Sig_NewDisConn"
QT_MOC_LITERAL(7, 69, 16), // "Sig_NewDisConnEx"
QT_MOC_LITERAL(8, 86, 9), // "errString"
QT_MOC_LITERAL(9, 96, 11), // "Sig_Warning"
QT_MOC_LITERAL(10, 108, 10), // "FT_Warning"
QT_MOC_LITERAL(11, 119, 8), // "warining"
QT_MOC_LITERAL(12, 128, 7), // "contain"
QT_MOC_LITERAL(13, 136, 8), // "Sig_Info"
QT_MOC_LITERAL(14, 145, 7), // "FT_Info"
QT_MOC_LITERAL(15, 153, 4), // "info"
QT_MOC_LITERAL(16, 158, 10), // "ServerPort"
QT_MOC_LITERAL(17, 169, 4), // "Open"
QT_MOC_LITERAL(18, 174, 5), // "Close"
QT_MOC_LITERAL(19, 180, 12), // "ConnectCount"
QT_MOC_LITERAL(20, 193, 12), // "CloseAllConn"
QT_MOC_LITERAL(21, 206, 10), // "AppendFile"
QT_MOC_LITERAL(22, 217, 8), // "filePath"
QT_MOC_LITERAL(23, 226, 10), // "RecvClnMsg"
QT_MOC_LITERAL(24, 237, 5), // "bytes"
QT_MOC_LITERAL(25, 243, 8), // "SendFile"
QT_MOC_LITERAL(26, 252, 13) // "CheckSendFile"

    },
    "FileTransfer_Server\0Sig_NewConn\0\0"
    "clnAddr\0clnPort\0port\0Sig_NewDisConn\0"
    "Sig_NewDisConnEx\0errString\0Sig_Warning\0"
    "FT_Warning\0warining\0contain\0Sig_Info\0"
    "FT_Info\0info\0ServerPort\0Open\0Close\0"
    "ConnectCount\0CloseAllConn\0AppendFile\0"
    "filePath\0RecvClnMsg\0bytes\0SendFile\0"
    "CheckSendFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTransfer_Server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  104,    2, 0x06 /* Public */,
       6,    2,  111,    2, 0x06 /* Public */,
       7,    3,  116,    2, 0x06 /* Public */,
       9,    2,  123,    2, 0x06 /* Public */,
      13,    2,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  133,    2, 0x0a /* Public */,
      17,    1,  134,    2, 0x0a /* Public */,
      18,    0,  137,    2, 0x0a /* Public */,
      19,    0,  138,    2, 0x0a /* Public */,
      20,    0,  139,    2, 0x0a /* Public */,
      21,    3,  140,    2, 0x0a /* Public */,
      21,    2,  147,    2, 0x2a /* Public | MethodCloned */,
      21,    1,  152,    2, 0x2a /* Public | MethodCloned */,
      23,    3,  155,    2, 0x08 /* Private */,
      25,    3,  162,    2, 0x08 /* Private */,
      25,    2,  169,    2, 0x28 /* Private | MethodCloned */,
      25,    1,  174,    2, 0x28 /* Private | MethodCloned */,
      26,    0,  177,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QString,    3,    4,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   12,

 // slots: parameters
    QMetaType::UShort,
    QMetaType::Bool, QMetaType::UShort,    5,
    QMetaType::Void,
    QMetaType::UShort,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UShort,   22,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,    3,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::QByteArray,    3,    4,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UShort,   22,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,    3,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,

       0        // eod
};

void FileTransfer_Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTransfer_Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_NewConn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const quint16(*)>(_a[3]))); break;
        case 1: _t->Sig_NewDisConn((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 2: _t->Sig_NewDisConnEx((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->Sig_Warning((*reinterpret_cast< FT_Warning(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->Sig_Info((*reinterpret_cast< FT_Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: { quint16 _r = _t->ServerPort();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->Open((*reinterpret_cast< const quint16(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->Close(); break;
        case 8: { quint16 _r = _t->ConnectCount();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->CloseAllConn(); break;
        case 10: _t->AppendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 11: _t->AppendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->AppendFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->RecvClnMsg((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 14: _t->SendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 15: _t->SendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->SendFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->CheckSendFile(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTransfer_Server::*)(const QString & , const quint16 , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Server::Sig_NewConn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Server::*)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Server::Sig_NewDisConn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Server::*)(const QString & , const quint16 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Server::Sig_NewDisConnEx)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Server::*)(FT_Warning , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Server::Sig_Warning)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Server::*)(FT_Info , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Server::Sig_Info)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileTransfer_Server::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileTransfer_Server.data,
    qt_meta_data_FileTransfer_Server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTransfer_Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTransfer_Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTransfer_Server.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileTransfer_Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FileTransfer_Server::Sig_NewConn(const QString & _t1, const quint16 _t2, const quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileTransfer_Server::Sig_NewDisConn(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileTransfer_Server::Sig_NewDisConnEx(const QString & _t1, const quint16 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileTransfer_Server::Sig_Warning(FT_Warning _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileTransfer_Server::Sig_Info(FT_Info _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
