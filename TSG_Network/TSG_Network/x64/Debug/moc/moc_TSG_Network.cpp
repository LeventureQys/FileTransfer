/****************************************************************************
** Meta object code from reading C++ file 'TSG_Network.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TSG_Network.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TSG_Network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TSG_Network_t {
    QByteArrayData data[16];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TSG_Network_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TSG_Network_t qt_meta_stringdata_TSG_Network = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TSG_Network"
QT_MOC_LITERAL(1, 12, 26), // "on_btn_startServer_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "on_btn_closeServer_clicked"
QT_MOC_LITERAL(4, 67, 30), // "on_btn_send_msg_server_clicked"
QT_MOC_LITERAL(5, 98, 31), // "on_btn_send_file_server_clicked"
QT_MOC_LITERAL(6, 130, 32), // "on_btn_sendfolder_server_clicked"
QT_MOC_LITERAL(7, 163, 32), // "on_btn_getClients_server_clicked"
QT_MOC_LITERAL(8, 196, 29), // "on_btn_connect_client_clicked"
QT_MOC_LITERAL(9, 226, 26), // "on_btn_stop_client_clicked"
QT_MOC_LITERAL(10, 253, 29), // "on_btn_sendMsg_client_clicked"
QT_MOC_LITERAL(11, 283, 35), // "on_btn_setRecvFolder_client_c..."
QT_MOC_LITERAL(12, 319, 29), // "on_btn_isStart_client_clicked"
QT_MOC_LITERAL(13, 349, 4), // "adds"
QT_MOC_LITERAL(14, 354, 10), // "strMessage"
QT_MOC_LITERAL(15, 365, 4) // "addc"

    },
    "TSG_Network\0on_btn_startServer_clicked\0"
    "\0on_btn_closeServer_clicked\0"
    "on_btn_send_msg_server_clicked\0"
    "on_btn_send_file_server_clicked\0"
    "on_btn_sendfolder_server_clicked\0"
    "on_btn_getClients_server_clicked\0"
    "on_btn_connect_client_clicked\0"
    "on_btn_stop_client_clicked\0"
    "on_btn_sendMsg_client_clicked\0"
    "on_btn_setRecvFolder_client_clicked\0"
    "on_btn_isStart_client_clicked\0adds\0"
    "strMessage\0addc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TSG_Network[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void TSG_Network::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TSG_Network *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_startServer_clicked(); break;
        case 1: _t->on_btn_closeServer_clicked(); break;
        case 2: _t->on_btn_send_msg_server_clicked(); break;
        case 3: _t->on_btn_send_file_server_clicked(); break;
        case 4: _t->on_btn_sendfolder_server_clicked(); break;
        case 5: _t->on_btn_getClients_server_clicked(); break;
        case 6: _t->on_btn_connect_client_clicked(); break;
        case 7: _t->on_btn_stop_client_clicked(); break;
        case 8: _t->on_btn_sendMsg_client_clicked(); break;
        case 9: _t->on_btn_setRecvFolder_client_clicked(); break;
        case 10: _t->on_btn_isStart_client_clicked(); break;
        case 11: _t->adds((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->addc((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TSG_Network::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TSG_Network.data,
    qt_meta_data_TSG_Network,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TSG_Network::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TSG_Network::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TSG_Network.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TSG_Network::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
