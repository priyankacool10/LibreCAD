/****************************************************************************
** Meta object code from reading C++ file 'qg_layerdialog.h'
**
** Created: Tue Jun 18 04:11:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_layerdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_layerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_LayerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x0a,
      38,   15,   15,   15, 0x0a,
      52,   15,   15,   15, 0x0a,
      66,   63,   15,   15, 0x0a,
      97,   94,   15,   15, 0x0a,
     127,   15,  116,   15, 0x0a,
     142,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_LayerDialog[] = {
    "QG_LayerDialog\0\0l\0setLayer(RS_Layer*)\0"
    "updateLayer()\0validate()\0ll\0"
    "setLayerList(RS_LayerList*)\0el\0"
    "setEditLayer(bool)\0QLineEdit*\0"
    "getQLineEdit()\0languageChange()\0"
};

void QG_LayerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_LayerDialog *_t = static_cast<QG_LayerDialog *>(_o);
        switch (_id) {
        case 0: _t->setLayer((*reinterpret_cast< RS_Layer*(*)>(_a[1]))); break;
        case 1: _t->updateLayer(); break;
        case 2: _t->validate(); break;
        case 3: _t->setLayerList((*reinterpret_cast< RS_LayerList*(*)>(_a[1]))); break;
        case 4: _t->setEditLayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { QLineEdit* _r = _t->getQLineEdit();
            if (_a[0]) *reinterpret_cast< QLineEdit**>(_a[0]) = _r; }  break;
        case 6: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_LayerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_LayerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_LayerDialog,
      qt_meta_data_QG_LayerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_LayerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_LayerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_LayerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_LayerDialog))
        return static_cast<void*>(const_cast< QG_LayerDialog*>(this));
    if (!strcmp(_clname, "Ui::QG_LayerDialog"))
        return static_cast< Ui::QG_LayerDialog*>(const_cast< QG_LayerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_LayerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
