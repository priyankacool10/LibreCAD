/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgellipse.h'
**
** Created: Tue Jun 18 04:10:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgellipse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgellipse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgEllipse[] = {

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
      17,   15,   14,   14, 0x0a,
      41,   14,   14,   14, 0x0a,
      57,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgEllipse[] = {
    "QG_DlgEllipse\0\0e\0setEllipse(RS_Ellipse&)\0"
    "updateEllipse()\0languageChange()\0"
};

void QG_DlgEllipse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgEllipse *_t = static_cast<QG_DlgEllipse *>(_o);
        switch (_id) {
        case 0: _t->setEllipse((*reinterpret_cast< RS_Ellipse(*)>(_a[1]))); break;
        case 1: _t->updateEllipse(); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgEllipse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgEllipse::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgEllipse,
      qt_meta_data_QG_DlgEllipse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgEllipse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgEllipse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgEllipse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgEllipse))
        return static_cast<void*>(const_cast< QG_DlgEllipse*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgEllipse"))
        return static_cast< Ui::QG_DlgEllipse*>(const_cast< QG_DlgEllipse*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgEllipse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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