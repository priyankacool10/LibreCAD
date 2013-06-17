/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbarmodify.h'
**
** Created: Tue Jun 18 04:10:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbarmodify.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbarmodify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarModify[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
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
     136,   20,   20,   20, 0x0a,
     151,   20,   20,   20, 0x0a,
     165,   20,   20,   20, 0x0a,
     180,   20,   20,   20, 0x0a,
     199,   20,   20,   20, 0x0a,
     215,   20,   20,   20, 0x0a,
     228,   20,   20,   20, 0x0a,
     242,   20,   20,   20, 0x0a,
     261,   20,   20,   20, 0x0a,
     273,   20,   20,   20, 0x0a,
     287,   20,   20,   20, 0x0a,
     301,   20,   20,   20, 0x0a,
     316,   20,   20,   20, 0x0a,
     331,   20,   20,   20, 0x0a,
     350,   20,   20,   20, 0x0a,
     366,   20,   20,   20, 0x0a,
     382,   20,   20,   20, 0x0a,
     402,   20,   20,   20, 0x0a,
     417,   20,   20,   20, 0x0a,
     424,   20,   20,   20, 0x0a,
     439,   20,   20,   20, 0x09,
     456,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarModify[] = {
    "QG_CadToolBarModify\0\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "modifyMove()\0modifyRotate()\0modifyScale()\0"
    "modifyMirror()\0modifyMoveRotate()\0"
    "modifyRotate2()\0modifyTrim()\0modifyTrim2()\0"
    "modifyTrimAmount()\0modifyCut()\0"
    "modifyBevel()\0modifyRound()\0modifyEntity()\0"
    "modifyDelete()\0modifyAttributes()\0"
    "modifyStretch()\0modifyExplode()\0"
    "modifyExplodeText()\0modifyOffset()\0"
    "back()\0resetToolBar()\0languageChange()\0"
    "on_bBack_clicked()\0"
};

void QG_CadToolBarModify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarModify *_t = static_cast<QG_CadToolBarModify *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 2: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 3: _t->modifyMove(); break;
        case 4: _t->modifyRotate(); break;
        case 5: _t->modifyScale(); break;
        case 6: _t->modifyMirror(); break;
        case 7: _t->modifyMoveRotate(); break;
        case 8: _t->modifyRotate2(); break;
        case 9: _t->modifyTrim(); break;
        case 10: _t->modifyTrim2(); break;
        case 11: _t->modifyTrimAmount(); break;
        case 12: _t->modifyCut(); break;
        case 13: _t->modifyBevel(); break;
        case 14: _t->modifyRound(); break;
        case 15: _t->modifyEntity(); break;
        case 16: _t->modifyDelete(); break;
        case 17: _t->modifyAttributes(); break;
        case 18: _t->modifyStretch(); break;
        case 19: _t->modifyExplode(); break;
        case 20: _t->modifyExplodeText(); break;
        case 21: _t->modifyOffset(); break;
        case 22: _t->back(); break;
        case 23: _t->resetToolBar(); break;
        case 24: _t->languageChange(); break;
        case 25: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarModify::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarModify::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarModify,
      qt_meta_data_QG_CadToolBarModify, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarModify::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarModify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarModify::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarModify))
        return static_cast<void*>(const_cast< QG_CadToolBarModify*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarModify"))
        return static_cast< Ui::QG_CadToolBarModify*>(const_cast< QG_CadToolBarModify*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarModify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
