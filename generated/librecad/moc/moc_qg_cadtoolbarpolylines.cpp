/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbarpolylines.h'
**
** Created: Tue Jun 18 04:10:31 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbarpolylines.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbarpolylines.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarPolylines[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x0a,
      56,   24,   23,   23, 0x0a,
      96,   93,   23,   23, 0x0a,
     126,   23,   23,   23, 0x0a,
     141,   23,   23,   23, 0x0a,
     155,   23,   23,   23, 0x0a,
     172,   23,   23,   23, 0x0a,
     186,   23,   23,   23, 0x0a,
     207,   23,   23,   23, 0x0a,
     222,   23,   23,   23, 0x0a,
     244,   23,   23,   23, 0x0a,
     262,   23,   23,   23, 0x0a,
     269,   23,   23,   23, 0x0a,
     295,  284,   23,   23, 0x0a,
     327,   23,   23,   23, 0x09,
     344,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarPolylines[] = {
    "QG_CadToolBarPolylines\0\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "drawPolyline()\0polylineAdd()\0"
    "polylineAppend()\0polylineDel()\0"
    "polylineDelBetween()\0polylineTrim()\0"
    "polylineEquidistant()\0polylineSegment()\0"
    "back()\0resetToolBar()\0actionType\0"
    "showCadToolBar(RS2::ActionType)\0"
    "languageChange()\0on_bBack_clicked()\0"
};

void QG_CadToolBarPolylines::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarPolylines *_t = static_cast<QG_CadToolBarPolylines *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 2: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 3: _t->drawPolyline(); break;
        case 4: _t->polylineAdd(); break;
        case 5: _t->polylineAppend(); break;
        case 6: _t->polylineDel(); break;
        case 7: _t->polylineDelBetween(); break;
        case 8: _t->polylineTrim(); break;
        case 9: _t->polylineEquidistant(); break;
        case 10: _t->polylineSegment(); break;
        case 11: _t->back(); break;
        case 12: _t->resetToolBar(); break;
        case 13: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 14: _t->languageChange(); break;
        case 15: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarPolylines::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarPolylines::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarPolylines,
      qt_meta_data_QG_CadToolBarPolylines, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarPolylines::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarPolylines::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarPolylines::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarPolylines))
        return static_cast<void*>(const_cast< QG_CadToolBarPolylines*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarPolylines"))
        return static_cast< Ui::QG_CadToolBarPolylines*>(const_cast< QG_CadToolBarPolylines*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarPolylines::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
