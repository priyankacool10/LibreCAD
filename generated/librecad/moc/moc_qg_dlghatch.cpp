/****************************************************************************
** Meta object code from reading C++ file 'qg_dlghatch.h'
**
** Created: Tue Jun 18 04:10:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlghatch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlghatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgHatch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      24,   22,   12,   12, 0x0a,
      55,   47,   12,   12, 0x0a,
      80,   12,   12,   12, 0x0a,
      96,   94,   12,   12, 0x0a,
     116,   12,   12,   12, 0x0a,
     143,   12,   12,   12, 0x0a,
     159,   12,   12,   12, 0x0a,
     186,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgHatch[] = {
    "QG_DlgHatch\0\0polish()\0e\0showEvent(QShowEvent*)\0"
    "h,isNew\0setHatch(RS_Hatch&,bool)\0"
    "updateHatch()\0p\0setPattern(QString)\0"
    "resizeEvent(QResizeEvent*)\0updatePreview()\0"
    "updatePreview(RS_Pattern*)\0languageChange()\0"
};

void QG_DlgHatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgHatch *_t = static_cast<QG_DlgHatch *>(_o);
        switch (_id) {
        case 0: _t->polish(); break;
        case 1: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 2: _t->setHatch((*reinterpret_cast< RS_Hatch(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->updateHatch(); break;
        case 4: _t->setPattern((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 6: _t->updatePreview(); break;
        case 7: _t->updatePreview((*reinterpret_cast< RS_Pattern*(*)>(_a[1]))); break;
        case 8: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgHatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgHatch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgHatch,
      qt_meta_data_QG_DlgHatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgHatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgHatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgHatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgHatch))
        return static_cast<void*>(const_cast< QG_DlgHatch*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgHatch"))
        return static_cast< Ui::QG_DlgHatch*>(const_cast< QG_DlgHatch*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgHatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
