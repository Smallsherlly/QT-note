/****************************************************************************
** Meta object code from reading C++ file 'calc.h'
**
** Created: Wed Aug 9 23:13:14 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calc/calc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_calc[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      17,    5,    5,    5, 0x0a,
      25,    5,    5,    5, 0x0a,
      33,    5,    5,    5, 0x0a,
      41,    5,    5,    5, 0x0a,
      49,    5,    5,    5, 0x0a,
      58,    5,    5,    5, 0x0a,
      65,    5,    5,    5, 0x0a,
      72,    5,    5,    5, 0x0a,
      79,    5,    5,    5, 0x0a,
      86,    5,    5,    5, 0x0a,
      93,    5,    5,    5, 0x0a,
     100,    5,    5,    5, 0x0a,
     107,    5,    5,    5, 0x0a,
     114,    5,    5,    5, 0x0a,
     121,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_calc[] = {
    "calc\0\0setClear()\0set_a()\0set_s()\0"
    "set_p()\0set_d()\0result()\0get0()\0get1()\0"
    "get2()\0get3()\0get4()\0get5()\0get6()\0"
    "get7()\0get8()\0get9()\0"
};

void calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        calc *_t = static_cast<calc *>(_o);
        switch (_id) {
        case 0: _t->setClear(); break;
        case 1: _t->set_a(); break;
        case 2: _t->set_s(); break;
        case 3: _t->set_p(); break;
        case 4: _t->set_d(); break;
        case 5: _t->result(); break;
        case 6: _t->get0(); break;
        case 7: _t->get1(); break;
        case 8: _t->get2(); break;
        case 9: _t->get3(); break;
        case 10: _t->get4(); break;
        case 11: _t->get5(); break;
        case 12: _t->get6(); break;
        case 13: _t->get7(); break;
        case 14: _t->get8(); break;
        case 15: _t->get9(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData calc::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject calc::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_calc,
      qt_meta_data_calc, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &calc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *calc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_calc))
        return static_cast<void*>(const_cast< calc*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
