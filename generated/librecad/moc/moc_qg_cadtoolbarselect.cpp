/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbarselect.h'
**
** Created: Tue Jun 18 04:10:30 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbarselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbarselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarSelect[] = {

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
      23,   21,   20,   20, 0x0a,
      53,   21,   20,   20, 0x0a,
      93,   90,   20,   20, 0x0a,
     123,   20,   20,   20, 0x0a,
     138,   20,   20,   20, 0x0a,
     154,   20,   20,   20, 0x0a,
     168,   20,   20,   20, 0x0a,
     180,   20,   20,   20, 0x0a,
     195,   20,   20,   20, 0x0a,
     212,   20,   20,   20, 0x0a,
     232,   20,   20,   20, 0x0a,
     254,   20,   20,   20, 0x0a,
     269,   20,   20,   20, 0x0a,
     296,  283,   20,   20, 0x0a,
     344,  333,   20,   20, 0x0a,
     363,   20,   20,   20, 0x0a,
     379,   20,   20,   20, 0x0a,
     386,   20,   20,   20, 0x09,
     403,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarSelect[] = {
    "QG_CadToolBarSelect\0\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "selectSingle()\0selectContour()\0"
    "deselectAll()\0selectAll()\0selectWindow()\0"
    "deselectWindow()\0selectIntersected()\0"
    "deselectIntersected()\0selectInvert()\0"
    "selectLayer()\0selectAction\0"
    "setSelectAction(RS_ActionInterface*)\0"
    "nextAction\0setNextAction(int)\0"
    "runNextAction()\0back()\0languageChange()\0"
    "on_bBack_clicked()\0"
};

void QG_CadToolBarSelect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarSelect *_t = static_cast<QG_CadToolBarSelect *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 2: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 3: _t->selectSingle(); break;
        case 4: _t->selectContour(); break;
        case 5: _t->deselectAll(); break;
        case 6: _t->selectAll(); break;
        case 7: _t->selectWindow(); break;
        case 8: _t->deselectWindow(); break;
        case 9: _t->selectIntersected(); break;
        case 10: _t->deselectIntersected(); break;
        case 11: _t->selectInvert(); break;
        case 12: _t->selectLayer(); break;
        case 13: _t->setSelectAction((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1]))); break;
        case 14: _t->setNextAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->runNextAction(); break;
        case 16: _t->back(); break;
        case 17: _t->languageChange(); break;
        case 18: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarSelect::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarSelect::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarSelect,
      qt_meta_data_QG_CadToolBarSelect, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarSelect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarSelect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarSelect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarSelect))
        return static_cast<void*>(const_cast< QG_CadToolBarSelect*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarSelect"))
        return static_cast< Ui::QG_CadToolBarSelect*>(const_cast< QG_CadToolBarSelect*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarSelect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
