/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgoptionsdrawing.h'
**
** Created: Tue Jun 18 04:11:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgoptionsdrawing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgoptionsdrawing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgOptionsDrawing[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x0a,
      48,   21,   21,   21, 0x0a,
      59,   21,   21,   21, 0x0a,
      83,   21,   21,   21, 0x0a,
     106,   21,   21,   21, 0x0a,
     122,   21,   21,   21, 0x0a,
     140,   21,   21,   21, 0x0a,
     159,   21,   21,   21, 0x09,
     176,   21,   21,   21, 0x08,
     213,  205,   21,   21, 0x08,
     246,  205,   21,   21, 0x08,
     278,  205,   21,   21, 0x08,
     312,   21,   21,   21, 0x08,
     342,  205,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgOptionsDrawing[] = {
    "QG_DlgOptionsDrawing\0\0g\0setGraphic(RS_Graphic*)\0"
    "validate()\0updateLengthPrecision()\0"
    "updateAnglePrecision()\0updatePreview()\0"
    "updatePaperSize()\0updateUnitLabels()\0"
    "languageChange()\0on_rbIsometricGrid_clicked()\0"
    "checked\0on_rbCrosshairLeft_toggled(bool)\0"
    "on_rbCrosshairTop_toggled(bool)\0"
    "on_rbCrosshairRight_toggled(bool)\0"
    "on_rbOrthogonalGrid_clicked()\0"
    "on_cbGridOn_toggled(bool)\0"
};

void QG_DlgOptionsDrawing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgOptionsDrawing *_t = static_cast<QG_DlgOptionsDrawing *>(_o);
        switch (_id) {
        case 0: _t->setGraphic((*reinterpret_cast< RS_Graphic*(*)>(_a[1]))); break;
        case 1: _t->validate(); break;
        case 2: _t->updateLengthPrecision(); break;
        case 3: _t->updateAnglePrecision(); break;
        case 4: _t->updatePreview(); break;
        case 5: _t->updatePaperSize(); break;
        case 6: _t->updateUnitLabels(); break;
        case 7: _t->languageChange(); break;
        case 8: _t->on_rbIsometricGrid_clicked(); break;
        case 9: _t->on_rbCrosshairLeft_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_rbCrosshairTop_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_rbCrosshairRight_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_rbOrthogonalGrid_clicked(); break;
        case 13: _t->on_cbGridOn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgOptionsDrawing::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgOptionsDrawing::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgOptionsDrawing,
      qt_meta_data_QG_DlgOptionsDrawing, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgOptionsDrawing::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgOptionsDrawing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgOptionsDrawing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgOptionsDrawing))
        return static_cast<void*>(const_cast< QG_DlgOptionsDrawing*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgOptionsDrawing"))
        return static_cast< Ui::QG_DlgOptionsDrawing*>(const_cast< QG_DlgOptionsDrawing*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgOptionsDrawing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
