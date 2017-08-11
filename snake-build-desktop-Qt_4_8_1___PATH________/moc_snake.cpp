/****************************************************************************
** Meta object code from reading C++ file 'snake.h'
**
** Created: Thu Aug 10 20:42:25 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../snake/snake.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snake.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_snake[] = {

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
       7,    6,    6,    6, 0x08,
      28,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_snake[] = {
    "snake\0\0on_m_start_clicked()\0"
    "on_m_restart_clicked()\0"
};

void snake::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        snake *_t = static_cast<snake *>(_o);
        switch (_id) {
        case 0: _t->on_m_start_clicked(); break;
        case 1: _t->on_m_restart_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData snake::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject snake::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_snake,
      qt_meta_data_snake, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &snake::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *snake::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *snake::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_snake))
        return static_cast<void*>(const_cast< snake*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int snake::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
