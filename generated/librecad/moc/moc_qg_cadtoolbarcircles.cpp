/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbarcircles.h'
**
** Created: Tue Jun 18 04:42:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbarcircles.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbarcircles.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarCircles[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x0a,
      54,   22,   21,   21, 0x0a,
      94,   91,   21,   21, 0x0a,
     124,   21,   21,   21, 0x0a,
     137,   21,   21,   21, 0x0a,
     152,   21,   21,   21, 0x0a,
     167,   21,   21,   21, 0x0a,
     182,   21,   21,   21, 0x0a,
     199,   21,   21,   21, 0x0a,
     216,   21,   21,   21, 0x0a,
     237,   21,   21,   21, 0x0a,
     258,   21,   21,   21, 0x0a,
     275,   21,   21,   21, 0x0a,
     292,   21,   21,   21, 0x0a,
     305,   21,   21,   21, 0x0a,
     312,   21,   21,   21, 0x0a,
     338,  327,   21,   21, 0x0a,
     370,   21,   21,   21, 0x09,
     387,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarCircles[] = {
    "QG_CadToolBarCircles\0\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "drawCircle()\0drawCircleCR()\0drawCircle2P()\0"
    "drawCircle3P()\0drawCircle1_2P()\0"
    "drawCircle2_1P()\0drawCircleParallel()\0"
    "drawCircleInscribe()\0drawCircleTan2()\0"
    "drawCircleTan3()\0drawFlower()\0back()\0"
    "resetToolBar()\0actionType\0"
    "showCadToolBar(RS2::ActionType)\0"
    "languageChange()\0on_bBack_clicked()\0"
};

void QG_CadToolBarCircles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarCircles *_t = static_cast<QG_CadToolBarCircles *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 2: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 3: _t->drawCircle(); break;
        case 4: _t->drawCircleCR(); break;
        case 5: _t->drawCircle2P(); break;
        case 6: _t->drawCircle3P(); break;
        case 7: _t->drawCircle1_2P(); break;
        case 8: _t->drawCircle2_1P(); break;
        case 9: _t->drawCircleParallel(); break;
        case 10: _t->drawCircleInscribe(); break;
        case 11: _t->drawCircleTan2(); break;
        case 12: _t->drawCircleTan3(); break;
        case 13: _t->drawFlower(); break;
        case 14: _t->back(); break;
        case 15: _t->resetToolBar(); break;
        case 16: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 17: _t->languageChange(); break;
        case 18: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarCircles::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarCircles::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarCircles,
      qt_meta_data_QG_CadToolBarCircles, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarCircles::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarCircles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarCircles::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarCircles))
        return static_cast<void*>(const_cast< QG_CadToolBarCircles*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarCircles"))
        return static_cast< Ui::QG_CadToolBarCircles*>(const_cast< QG_CadToolBarCircles*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarCircles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
