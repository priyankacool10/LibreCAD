/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbardim.h'
**
** Created: Tue Jun 18 04:10:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbardim.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbardim.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarDim[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x0a,
      50,   18,   17,   17, 0x0a,
      90,   87,   17,   17, 0x0a,
     120,   17,   17,   17, 0x0a,
     137,   17,   17,   17, 0x0a,
     153,   17,   17,   17, 0x0a,
     172,   17,   17,   17, 0x0a,
     191,   17,   17,   17, 0x0a,
     207,   17,   17,   17, 0x0a,
     226,   17,   17,   17, 0x0a,
     243,   17,   17,   17, 0x0a,
     259,   17,   17,   17, 0x0a,
     285,  274,   17,   17, 0x0a,
     317,   17,   17,   17, 0x09,
     334,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarDim[] = {
    "QG_CadToolBarDim\0\0e\0mousePressEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "drawDimAligned()\0drawDimLinear()\0"
    "drawDimLinearHor()\0drawDimLinearVer()\0"
    "drawDimRadial()\0drawDimDiametric()\0"
    "drawDimAngular()\0drawDimLeader()\0"
    "resetToolBar()\0actionType\0"
    "showCadToolBar(RS2::ActionType)\0"
    "languageChange()\0on_bBack_clicked()\0"
};

void QG_CadToolBarDim::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarDim *_t = static_cast<QG_CadToolBarDim *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 2: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 3: _t->drawDimAligned(); break;
        case 4: _t->drawDimLinear(); break;
        case 5: _t->drawDimLinearHor(); break;
        case 6: _t->drawDimLinearVer(); break;
        case 7: _t->drawDimRadial(); break;
        case 8: _t->drawDimDiametric(); break;
        case 9: _t->drawDimAngular(); break;
        case 10: _t->drawDimLeader(); break;
        case 11: _t->resetToolBar(); break;
        case 12: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 13: _t->languageChange(); break;
        case 14: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarDim::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarDim::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarDim,
      qt_meta_data_QG_CadToolBarDim, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarDim::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarDim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarDim::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarDim))
        return static_cast<void*>(const_cast< QG_CadToolBarDim*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarDim"))
        return static_cast< Ui::QG_CadToolBarDim*>(const_cast< QG_CadToolBarDim*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarDim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
