/****************************************************************************
** Meta object code from reading C++ file 'FileTransfer_Client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../SouthQtNetwork/Api/FileTransfer_Client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileTransfer_Client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileTransfer_Client_t {
    QByteArrayData data[25];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTransfer_Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTransfer_Client_t qt_meta_stringdata_FileTransfer_Client = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FileTransfer_Client"
QT_MOC_LITERAL(1, 20, 13), // "Sig_Connected"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "qsServerAddr"
QT_MOC_LITERAL(4, 48, 11), // "nServerPort"
QT_MOC_LITERAL(5, 60, 14), // "Sig_Disconnect"
QT_MOC_LITERAL(6, 75, 15), // "Sig_RecvNewFile"
QT_MOC_LITERAL(7, 91, 8), // "filePath"
QT_MOC_LITERAL(8, 100, 11), // "Sig_Warning"
QT_MOC_LITERAL(9, 112, 10), // "FT_Warning"
QT_MOC_LITERAL(10, 123, 8), // "warining"
QT_MOC_LITERAL(11, 132, 7), // "contain"
QT_MOC_LITERAL(12, 140, 8), // "Sig_Info"
QT_MOC_LITERAL(13, 149, 7), // "FT_Info"
QT_MOC_LITERAL(14, 157, 4), // "info"
QT_MOC_LITERAL(15, 162, 4), // "Open"
QT_MOC_LITERAL(16, 167, 10), // "serverPort"
QT_MOC_LITERAL(17, 178, 5), // "Close"
QT_MOC_LITERAL(18, 184, 11), // "SetSavePath"
QT_MOC_LITERAL(19, 196, 10), // "qsSavePath"
QT_MOC_LITERAL(20, 207, 15), // "SetSaveSubtitle"
QT_MOC_LITERAL(21, 223, 14), // "qsSaveSubtitle"
QT_MOC_LITERAL(22, 238, 8), // "RecvFile"
QT_MOC_LITERAL(23, 247, 5), // "bytes"
QT_MOC_LITERAL(24, 253, 15) // "CheckRecvFolder"

    },
    "FileTransfer_Client\0Sig_Connected\0\0"
    "qsServerAddr\0nServerPort\0Sig_Disconnect\0"
    "Sig_RecvNewFile\0filePath\0Sig_Warning\0"
    "FT_Warning\0warining\0contain\0Sig_Info\0"
    "FT_Info\0info\0Open\0serverPort\0Close\0"
    "SetSavePath\0qsSavePath\0SetSaveSubtitle\0"
    "qsSaveSubtitle\0RecvFile\0bytes\0"
    "CheckRecvFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTransfer_Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    2,   74,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       8,    2,   82,    2, 0x06 /* Public */,
      12,    2,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,   92,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x0a /* Public */,
      18,    1,   98,    2, 0x0a /* Public */,
      20,    1,  101,    2, 0x0a /* Public */,
      22,    1,  104,    2, 0x08 /* Private */,
      24,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,   16,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Bool,

       0        // eod
};

void FileTransfer_Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTransfer_Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_Connected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 1: _t->Sig_Disconnect((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 2: _t->Sig_RecvNewFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->Sig_Warning((*reinterpret_cast< FT_Warning(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->Sig_Info((*reinterpret_cast< FT_Info(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->Open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const quint16(*)>(_a[2]))); break;
        case 6: _t->Close(); break;
        case 7: { bool _r = _t->SetSavePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->SetSaveSubtitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->RecvFile((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: { bool _r = _t->CheckRecvFolder();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTransfer_Client::*)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Client::Sig_Connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Client::*)(const QString & , const quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Client::Sig_Disconnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Client::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Client::Sig_RecvNewFile)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Client::*)(FT_Warning , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Client::Sig_Warning)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileTransfer_Client::*)(FT_Info , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTransfer_Client::Sig_Info)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileTransfer_Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileTransfer_Client.data,
    qt_meta_data_FileTransfer_Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTransfer_Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTransfer_Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTransfer_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileTransfer_Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FileTransfer_Client::Sig_Connected(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileTransfer_Client::Sig_Disconnect(const QString & _t1, const quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileTransfer_Client::Sig_RecvNewFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileTransfer_Client::Sig_Warning(FT_Warning _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileTransfer_Client::Sig_Info(FT_Info _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
