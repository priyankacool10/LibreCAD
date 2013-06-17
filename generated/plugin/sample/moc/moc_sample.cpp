/****************************************************************************
** Meta object code from reading C++ file 'sample.h'
**
** Created: Tue Jun 18 04:12:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/sample/sample.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sample.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LC_Sample[] = {

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

static const char qt_meta_stringdata_LC_Sample[] = {
    "LC_Sample\0"
};

void LC_Sample::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LC_Sample::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LC_Sample::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LC_Sample,
      qt_meta_data_LC_Sample, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LC_Sample::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LC_Sample::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LC_Sample::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LC_Sample))
        return static_cast<void*>(const_cast< LC_Sample*>(this));
    if (!strcmp(_clname, "QC_PluginInterface"))
        return static_cast< QC_PluginInterface*>(const_cast< LC_Sample*>(this));
    if (!strcmp(_clname, "org.librecad.PluginInterface/1.0"))
        return static_cast< QC_PluginInterface*>(const_cast< LC_Sample*>(this));
    return QObject::qt_metacast(_clname);
}

int LC_Sample::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_lc_Sampledlg[] = {

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
      18,   14,   13,   13, 0x0a,
      52,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_lc_Sampledlg[] = {
    "lc_Sampledlg\0\0doc\0procesAction(Document_Interface*)\0"
    "checkAccept()\0"
};

void lc_Sampledlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lc_Sampledlg *_t = static_cast<lc_Sampledlg *>(_o);
        switch (_id) {
        case 0: _t->procesAction((*reinterpret_cast< Document_Interface*(*)>(_a[1]))); break;
        case 1: _t->checkAccept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lc_Sampledlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lc_Sampledlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_lc_Sampledlg,
      qt_meta_data_lc_Sampledlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lc_Sampledlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lc_Sampledlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lc_Sampledlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lc_Sampledlg))
        return static_cast<void*>(const_cast< lc_Sampledlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int lc_Sampledlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
