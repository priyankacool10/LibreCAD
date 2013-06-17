/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbarlines.h'
**
** Created: Tue Jun 18 04:10:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbarlines.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbarlines.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarLines[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   20,   19,   19, 0x0a,
      62,   59,   19,   19, 0x0a,
      92,   19,   19,   19, 0x0a,
     103,   19,   19,   19, 0x0a,
     119,   19,   19,   19, 0x0a,
     140,   19,   19,   19, 0x0a,
     158,   19,   19,   19, 0x0a,
     177,   19,   19,   19, 0x0a,
     196,   19,   19,   19, 0x0a,
     222,   19,   19,   19, 0x0a,
     242,   19,   19,   19, 0x0a,
     261,   19,   19,   19, 0x0a,
     280,   19,   19,   19, 0x0a,
     299,   19,   19,   19, 0x0a,
     320,   19,   19,   19, 0x0a,
     338,   19,   19,   19, 0x0a,
     357,   19,   19,   19, 0x0a,
     372,   19,   19,   19, 0x0a,
     390,   19,   19,   19, 0x0a,
     409,   19,   19,   19, 0x0a,
     416,   19,   19,   19, 0x0a,
     442,  431,   19,   19, 0x0a,
     474,   19,   19,   19, 0x09,
     491,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarLines[] = {
    "QG_CadToolBarLines\0\0e\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "drawLine()\0drawLineAngle()\0"
    "drawLineHorizontal()\0drawLineHorVert()\0"
    "drawLineVertical()\0drawLineParallel()\0"
    "drawLineParallelThrough()\0drawLineRectangle()\0"
    "drawLineBisector()\0drawLineTangent1()\0"
    "drawLineTangent2()\0drawLineOrthogonal()\0"
    "drawLineOrthTan()\0drawLineRelAngle()\0"
    "drawLineFree()\0drawLinePolygon()\0"
    "drawLinePolygon2()\0back()\0resetToolBar()\0"
    "actionType\0showCadToolBar(RS2::ActionType)\0"
    "languageChange()\0on_bBack_clicked()\0"
};

void QG_CadToolBarLines::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarLines *_t = static_cast<QG_CadToolBarLines *>(_o);
        switch (_id) {
        case 0: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 1: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 2: _t->drawLine(); break;
        case 3: _t->drawLineAngle(); break;
        case 4: _t->drawLineHorizontal(); break;
        case 5: _t->drawLineHorVert(); break;
        case 6: _t->drawLineVertical(); break;
        case 7: _t->drawLineParallel(); break;
        case 8: _t->drawLineParallelThrough(); break;
        case 9: _t->drawLineRectangle(); break;
        case 10: _t->drawLineBisector(); break;
        case 11: _t->drawLineTangent1(); break;
        case 12: _t->drawLineTangent2(); break;
        case 13: _t->drawLineOrthogonal(); break;
        case 14: _t->drawLineOrthTan(); break;
        case 15: _t->drawLineRelAngle(); break;
        case 16: _t->drawLineFree(); break;
        case 17: _t->drawLinePolygon(); break;
        case 18: _t->drawLinePolygon2(); break;
        case 19: _t->back(); break;
        case 20: _t->resetToolBar(); break;
        case 21: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 22: _t->languageChange(); break;
        case 23: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarLines::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarLines::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarLines,
      qt_meta_data_QG_CadToolBarLines, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarLines::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarLines::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarLines::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarLines))
        return static_cast<void*>(const_cast< QG_CadToolBarLines*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarLines"))
        return static_cast< Ui::QG_CadToolBarLines*>(const_cast< QG_CadToolBarLines*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarLines::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
