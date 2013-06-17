/****************************************************************************
** Meta object code from reading C++ file 'qg_cadtoolbarinfo.h'
**
** Created: Tue Jun 18 04:10:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_cadtoolbarinfo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_cadtoolbarinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CadToolBarInfo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   19,   18,   18, 0x0a,
      51,   19,   18,   18, 0x0a,
      91,   88,   18,   18, 0x0a,
     121,   18,   18,   18, 0x0a,
     132,   18,   18,   18, 0x0a,
     144,   18,   18,   18, 0x0a,
     156,   18,   18,   18, 0x0a,
     174,   18,   18,   18, 0x0a,
     185,   18,   18,   18, 0x0a,
     211,  200,   18,   18, 0x0a,
     243,   18,   18,   18, 0x09,
     260,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_CadToolBarInfo[] = {
    "QG_CadToolBarInfo\0\0e\0mousePressEvent(QMouseEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "tb\0setCadToolBar(QG_CadToolBar*)\0"
    "infoDist()\0infoDist2()\0infoAngle()\0"
    "infoTotalLength()\0infoArea()\0"
    "resetToolBar()\0actionType\0"
    "showCadToolBar(RS2::ActionType)\0"
    "languageChange()\0on_bBack_clicked()\0"
};

void QG_CadToolBarInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CadToolBarInfo *_t = static_cast<QG_CadToolBarInfo *>(_o);
        switch (_id) {
        case 0: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 2: _t->setCadToolBar((*reinterpret_cast< QG_CadToolBar*(*)>(_a[1]))); break;
        case 3: _t->infoDist(); break;
        case 4: _t->infoDist2(); break;
        case 5: _t->infoAngle(); break;
        case 6: _t->infoTotalLength(); break;
        case 7: _t->infoArea(); break;
        case 8: _t->resetToolBar(); break;
        case 9: _t->showCadToolBar((*reinterpret_cast< RS2::ActionType(*)>(_a[1]))); break;
        case 10: _t->languageChange(); break;
        case 11: _t->on_bBack_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CadToolBarInfo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CadToolBarInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CadToolBarInfo,
      qt_meta_data_QG_CadToolBarInfo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CadToolBarInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CadToolBarInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CadToolBarInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CadToolBarInfo))
        return static_cast<void*>(const_cast< QG_CadToolBarInfo*>(this));
    if (!strcmp(_clname, "Ui::QG_CadToolBarInfo"))
        return static_cast< Ui::QG_CadToolBarInfo*>(const_cast< QG_CadToolBarInfo*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CadToolBarInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
