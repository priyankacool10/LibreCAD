/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbar.h'
**
** Created: Tue Jun 18 04:42:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      28,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   14,   14,   14, 0x0a,
      48,   14,   14,   14, 0x0a,
      62,   60,   14,   14, 0x0a,
      94,   60,   14,   14, 0x0a,
     134,  131,   14,   14, 0x0a,
     188,  171,   14,   14, 0x0a,
     224,  221,   14,   14, 0x2a,
     252,   14,   14,   14, 0x0a,
     270,   14,   14,   14, 0x0a,
     289,   14,   14,   14, 0x0a,
     307,   14,   14,   14, 0x0a,
     329,   14,   14,   14, 0x0a,
     352,   14,   14,   14, 0x0a,
     373,   14,   14,   14, 0x0a,
     391,   14,   14,   14, 0x0a,
     411,   14,   14,   14, 0x0a,
     428,   14,   14,   14, 0x0a,
     472,  448,   14,   14, 0x0a,
     523,  515,   14,   14, 0x0a,
     549,   14,   14,   14, 0x2a,
     590,  571,   14,   14, 0x0a,
     638,  627,   14,   14, 0x2a,
     670,   14,   14,   14, 0x0a,
     685,   14,   14,   14, 0x09,
     702,   14,   14,   14, 0x09,
     720,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBar[] = {
    "QG_CadToolBar\0\0signalBack()\0signalNext()\0"
    "back()\0forceNext()\0e\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "ah\0createSubToolBars(QG_ActionHandler*)\0"
    "id,restoreAction\0showToolBar(RS2::ToolBarId,bool)\0"
    "id\0showToolBar(RS2::ToolBarId)\0"
    "showToolBarMain()\0showToolBarLines()\0"
    "showToolBarArcs()\0showToolBarEllipses()\0"
    "showToolBarPolylines()\0showToolBarCircles()\0"
    "showToolBarInfo()\0showToolBarModify()\0"
    "showToolBarDim()\0showToolBarSelect()\0"
    "selectAction,nextAction\0"
    "showToolBarSelect(RS_ActionInterface*,int)\0"
    "cleanup\0showPreviousToolBar(bool)\0"
    "showPreviousToolBar()\0actionType,cleanup\0"
    "showCadToolBar(RS2::ActionType,bool)\0"
    "actionType\0showCadToolBar(RS2::ActionType)\0"
    "resetToolBar()\0languageChange()\0"
    "hideSubToolBars()\0showSubToolBar()\0"
};

void QG_CadToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBar *_t = static_cast<QG_CadToolBar *>(_o);
        switch (_id) {
        case 0: _t->signalBack(); break;
        case 1: _t->signalNext(); break;
        case 2: _t->back(); break;
        case 3: _t->forceNext(); break;
        case 4: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 6: _t->createSubToolBars((*reinterpret_cast< QG_ActionHandler*(*)>(_a[1]))); break;
        case 7: _t->showToolBar((*reinterpret_cast< RS2::ToolBarId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->showToolBar((*reinterpret_cast< RS2::ToolBarId(*)>(_a[1]))); break;
        case 9: _t->showToolBarMain(); break;
        case 10: _t->showToolBarLines(); break;
        case 11: _t->showToolBarArcs(); break;
        case 12: _t->showToolBarEllipses(); break;
        case 13: _t->showToolBarPolylines(); break;
        case 14: _t->showToolBarCircles(); break;
        case 15: _t->showToolBarInfo(); break;
        case 16: _t->showToolBarModify(); break;
        case 17: _t->showToolBarDim(); break;
        case 18: _t->showToolBarSelect(); break;
        case 19: _t->showToolBarSelect((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->showPreviousToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->showPreviousToolBar(); break;
        case 22: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 24: _t->resetToolBar(); break;
        case 25: _t->languageChange(); break;
        case 26: _t->hideSubToolBars(); break;
        case 27: _t->showSubToolBar(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBar,
      qt_meta_data_QG_CadToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBar))
        return static_cast<void*>(const_cast< QG_CadToolBar*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBar"))
        return static_cast< Ui::QG_CadToolBar*>(const_cast< QG_CadToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void QG_CadToolBar::signalBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QG_CadToolBar::signalNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
