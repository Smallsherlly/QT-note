/****************************************************************************
** Meta object code from reading C++ file 'udpsocket.h'
**
** Created: Mon Aug 14 11:00:24 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "udpsocket.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_udpSocket[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      32,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_udpSocket[] = {
    "udpSocket\0\0on_m_start_clicked()\0"
    "on_m_send_clicked()\0"
};

void udpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        udpSocket *_t = static_cast<udpSocket *>(_o);
        switch (_id) {
        case 0: _t->on_m_start_clicked(); break;
        case 1: _t->on_m_send_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData udpSocket::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject udpSocket::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_udpSocket,
      qt_meta_data_udpSocket, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &udpSocket::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *udpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *udpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_udpSocket))
        return static_cast<void*>(const_cast< udpSocket*>(this));
    return QDialog::qt_metacast(_clname);
}

int udpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
