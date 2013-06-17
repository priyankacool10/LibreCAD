/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgimageoptions.h'
**
** Created: Tue Jun 18 04:10:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgimageoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgimageoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_ImageOptionsDialog[] = {

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
      25,   23,   22,   22, 0x0a,
      51,   22,   22,   22, 0x0a,
      56,   22,   22,   22, 0x0a,
      70,   22,   22,   22, 0x0a,
      90,   22,   22,   22, 0x0a,
     111,   22,   22,   22, 0x0a,
     127,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_ImageOptionsDialog[] = {
    "QG_ImageOptionsDialog\0\0s\0"
    "setGraphicSize(RS_Vector)\0ok()\0"
    "sizeChanged()\0resolutionChanged()\0"
    "sameBordersChanged()\0borderChanged()\0"
    "languageChange()\0"
};

void QG_ImageOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_ImageOptionsDialog *_t = static_cast<QG_ImageOptionsDialog *>(_o);
        switch (_id) {
        case 0: _t->setGraphicSize((*reinterpret_cast< const RS_Vector(*)>(_a[1]))); break;
        case 1: _t->ok(); break;
        case 2: _t->sizeChanged(); break;
        case 3: _t->resolutionChanged(); break;
        case 4: _t->sameBordersChanged(); break;
        case 5: _t->borderChanged(); break;
        case 6: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_ImageOptionsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_ImageOptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_ImageOptionsDialog,
      qt_meta_data_QG_ImageOptionsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_ImageOptionsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_ImageOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_ImageOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_ImageOptionsDialog))
        return static_cast<void*>(const_cast< QG_ImageOptionsDialog*>(this));
    if (!strcmp(_clname, "Ui::QG_ImageOptionsDialog"))
        return static_cast< Ui::QG_ImageOptionsDialog*>(const_cast< QG_ImageOptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_ImageOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
