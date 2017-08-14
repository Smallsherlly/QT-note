/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created: Mon Aug 14 14:45:44 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tcpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tcpserver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   10,   10,   10, 0x0a,
      50,   10,   10,   10, 0x0a,
      72,   10,   10,   10, 0x0a,
      95,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_tcpserver[] = {
    "tcpserver\0\0newMessage(QByteArray)\0"
    "socketConnect()\0on_m_create_clicked()\0"
    "socketReceiveMessage()\0sendMessage(QByteArray)\0"
};

void tcpserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tcpserver *_t = static_cast<tcpserver *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->socketConnect(); break;
        case 2: _t->on_m_create_clicked(); break;
        case 3: _t->socketReceiveMessage(); break;
        case 4: _t->sendMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tcpserver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tcpserver::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tcpserver,
      qt_meta_data_tcpserver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tcpserver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tcpserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tcpserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tcpserver))
        return static_cast<void*>(const_cast< tcpserver*>(this));
    return QDialog::qt_metacast(_clname);
}

int tcpserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void tcpserver::newMessage(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
