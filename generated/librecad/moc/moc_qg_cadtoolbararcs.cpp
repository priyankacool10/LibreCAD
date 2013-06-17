/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbararcs.h'
**
** Created: Tue Jun 18 04:10:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbararcs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbararcs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarArcs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   19,   18,   18, 0x0a,
      61,   58,   18,   18, 0x0a,
      91,   18,   18,   18, 0x0a,
     101,   18,   18,   18, 0x0a,
     113,   18,   18,   18, 0x0a,
     131,   18,   18,   18, 0x0a,
     151,   18,   18,   18, 0x0a,
     158,   18,   18,   18, 0x0a,
     184,  173,   18,   18, 0x0a,
     216,   18,   18,   18, 0x09,
     233,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarArcs[] = {
    "QG_CadToolBarArcs\0\0e\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "drawArc()\0drawArc3P()\0drawArcParallel()\0"
    "drawArcTangential()\0back()\0resetToolBar()\0"
    "actionType\0showCadToolBar(RS2::ActionType)\0"
    "languageChange()\0on_bBack_clicked()\0"
};

void QG_CadToolBarArcs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarArcs *_t = static_cast<QG_CadToolBarArcs *>(_o);
        switch (_id) {
        case 0: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 1: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 2: _t->drawArc(); break;
        case 3: _t->drawArc3P(); break;
        case 4: _t->drawArcParallel(); break;
        case 5: _t->drawArcTangential(); break;
        case 6: _t->back(); break;
        case 7: _t->resetToolBar(); break;
        case 8: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 9: _t->languageChange(); break;
        case 10: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarArcs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarArcs::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarArcs,
      qt_meta_data_QG_CadToolBarArcs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarArcs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarArcs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarArcs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarArcs))
        return static_cast<void*>(const_cast< QG_CadToolBarArcs*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarArcs"))
        return static_cast< Ui::QG_CadToolBarArcs*>(const_cast< QG_CadToolBarArcs*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarArcs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
