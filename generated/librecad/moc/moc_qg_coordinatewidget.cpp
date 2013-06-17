/****************************************************************************
** Meta object code from reading C++ file 'qg_coordinatewidget.h'
**
** Created: Tue Jun 18 04:10:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_coordinatewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_coordinatewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CoordinateWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      36,   28,   20,   20, 0x0a,
      81,   60,   20,   20, 0x0a,
     145,  122,   20,   20, 0x0a,
     194,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_CoordinateWidget[] = {
    "QG_CoordinateWidget\0\0init()\0graphic\0"
    "setGraphic(RS_Graphic*)\0abs,rel,updateFormat\0"
    "setCoordinates(RS_Vector,RS_Vector,bool)\0"
    "x,y,rx,ry,updateFormat\0"
    "setCoordinates(double,double,double,double,bool)\0"
    "languageChange()\0"
};

void QG_CoordinateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CoordinateWidget *_t = static_cast<QG_CoordinateWidget *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->setGraphic((*reinterpret_cast< RS_Graphic*(*)>(_a[1]))); break;
        case 2: _t->setCoordinates((*reinterpret_cast< const RS_Vector(*)>(_a[1])),(*reinterpret_cast< const RS_Vector(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->setCoordinates((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CoordinateWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CoordinateWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CoordinateWidget,
      qt_meta_data_QG_CoordinateWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CoordinateWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CoordinateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CoordinateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CoordinateWidget))
        return static_cast<void*>(const_cast< QG_CoordinateWidget*>(this));
    if (!strcmp(_clname, "Ui::QG_CoordinateWidget"))
        return static_cast< Ui::QG_CoordinateWidget*>(const_cast< QG_CoordinateWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CoordinateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
