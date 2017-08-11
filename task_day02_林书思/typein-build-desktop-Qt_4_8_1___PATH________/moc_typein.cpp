/****************************************************************************
** Meta object code from reading C++ file 'typein.h'
**
** Created: Wed Aug 9 20:34:00 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../typein/typein.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'typein.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_typein[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      18,    7,    7,    7, 0x0a,
      26,    7,    7,    7, 0x0a,
      35,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_typein[] = {
    "typein\0\0showStr()\0timeD()\0result()\0"
    "restTime()\0"
};

void typein::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        typein *_t = static_cast<typein *>(_o);
        switch (_id) {
        case 0: _t->showStr(); break;
        case 1: _t->timeD(); break;
        case 2: _t->result(); break;
        case 3: _t->restTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData typein::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject typein::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_typein,
      qt_meta_data_typein, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &typein::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *typein::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *typein::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_typein))
        return static_cast<void*>(const_cast< typein*>(this));
    return QWidget::qt_metacast(_clname);
}

int typein::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
