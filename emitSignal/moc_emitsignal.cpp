/****************************************************************************
** Meta object code from reading C++ file 'emitsignal.h'
**
** Created: Tue Aug 8 17:40:01 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "emitsignal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emitsignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmitSignal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   11,   11,   11, 0x0a,
      46,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EmitSignal[] = {
    "EmitSignal\0\0qs\0emitSig(QString)\0"
    "changeLabel()\0change1(QString)\0"
};

void EmitSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmitSignal *_t = static_cast<EmitSignal *>(_o);
        switch (_id) {
        case 0: _t->emitSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->changeLabel(); break;
        case 2: _t->change1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EmitSignal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EmitSignal::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EmitSignal,
      qt_meta_data_EmitSignal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmitSignal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmitSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmitSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmitSignal))
        return static_cast<void*>(const_cast< EmitSignal*>(this));
    return QWidget::qt_metacast(_clname);
}

int EmitSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EmitSignal::emitSig(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE