/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgscale.h'
**
** Created: Tue Jun 18 04:11:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgscale.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgscale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgScale[] = {

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
      15,   13,   12,   12, 0x0a,
      38,   12,   12,   12, 0x0a,
      51,   12,   12,   12, 0x09,
      76,   68,   12,   12, 0x08,
     110,  105,   12,   12, 0x08,
     144,  105,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgScale[] = {
    "QG_DlgScale\0\0d\0setData(RS_ScaleData*)\0"
    "updateData()\0languageChange()\0checked\0"
    "on_cbIsotropic_toggled(bool)\0arg1\0"
    "on_leFactorX_textChanged(QString)\0"
    "on_leFactorY_textChanged(QString)\0"
};

void QG_DlgScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgScale *_t = static_cast<QG_DlgScale *>(_o);
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< RS_ScaleData*(*)>(_a[1]))); break;
        case 1: _t->updateData(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->on_cbIsotropic_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_leFactorX_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_leFactorY_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgScale::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgScale::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgScale,
      qt_meta_data_QG_DlgScale, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgScale::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgScale::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgScale))
        return static_cast<void*>(const_cast< QG_DlgScale*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgScale"))
        return static_cast< Ui::QG_DlgScale*>(const_cast< QG_DlgScale*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
