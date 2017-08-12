/****************************************************************************
** Meta object code from reading C++ file 'stusystem.h'
**
** Created: Fri Aug 11 17:05:37 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../studentSystem/stusystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stusystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_stuSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      20,   10,   10,   10, 0x0a,
      26,   10,   10,   10, 0x0a,
      34,   10,   10,   10, 0x0a,
      43,   10,   10,   10, 0x0a,
      51,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_stuSystem[] = {
    "stuSystem\0\0insert()\0del()\0alter()\0"
    "search()\0order()\0exit()\0"
};

void stuSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        stuSystem *_t = static_cast<stuSystem *>(_o);
        switch (_id) {
        case 0: _t->insert(); break;
        case 1: _t->del(); break;
        case 2: _t->alter(); break;
        case 3: _t->search(); break;
        case 4: _t->order(); break;
        case 5: _t->exit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData stuSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject stuSystem::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_stuSystem,
      qt_meta_data_stuSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &stuSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *stuSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *stuSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_stuSystem))
        return static_cast<void*>(const_cast< stuSystem*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int stuSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
