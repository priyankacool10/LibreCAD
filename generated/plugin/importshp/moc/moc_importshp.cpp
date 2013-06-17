/****************************************************************************
** Meta object code from reading C++ file 'importshp.h'
**
** Created: Tue Jun 18 04:12:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/importshp/importshp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importshp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImportShp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ImportShp[] = {
    "ImportShp\0"
};

void ImportShp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ImportShp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImportShp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImportShp,
      qt_meta_data_ImportShp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImportShp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImportShp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImportShp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImportShp))
        return static_cast<void*>(const_cast< ImportShp*>(this));
    if (!strcmp(_clname, "QC_PluginInterface"))
        return static_cast< QC_PluginInterface*>(const_cast< ImportShp*>(this));
    if (!strcmp(_clname, "org.librecad.PluginInterface/1.0"))
        return static_cast< QC_PluginInterface*>(const_cast< ImportShp*>(this));
    return QObject::qt_metacast(_clname);
}

int ImportShp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_dibSHP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      18,    7,    7,    7, 0x0a,
      32,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dibSHP[] = {
    "dibSHP\0\0getFile()\0checkAccept()\0"
    "updateFile()\0"
};

void dibSHP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dibSHP *_t = static_cast<dibSHP *>(_o);
        switch (_id) {
        case 0: _t->getFile(); break;
        case 1: _t->checkAccept(); break;
        case 2: _t->updateFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData dibSHP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dibSHP::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dibSHP,
      qt_meta_data_dibSHP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dibSHP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dibSHP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dibSHP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dibSHP))
        return static_cast<void*>(const_cast< dibSHP*>(this));
    return QDialog::qt_metacast(_clname);
}

int dibSHP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
