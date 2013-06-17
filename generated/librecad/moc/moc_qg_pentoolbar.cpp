/****************************************************************************
** Meta object code from reading C++ file 'qg_pentoolbar.h'
**
** Created: Tue Jun 18 04:10:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/qg_pentoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_pentoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_PenToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   34,   14,   14, 0x0a,
      69,   67,   14,   14, 0x0a,
     102,   67,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QG_PenToolBar[] = {
    "QG_PenToolBar\0\0penChanged(RS_Pen)\0"
    "color\0slotColorChanged(RS_Color)\0w\0"
    "slotWidthChanged(RS2::LineWidth)\0"
    "slotLineTypeChanged(RS2::LineType)\0"
};

void QG_PenToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_PenToolBar *_t = static_cast<QG_PenToolBar *>(_o);
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< RS_Pen(*)>(_a[1]))); break;
        case 1: _t->slotColorChanged((*reinterpret_cast< const RS_Color(*)>(_a[1]))); break;
        case 2: _t->slotWidthChanged((*reinterpret_cast< RS2::LineWidth(*)>(_a[1]))); break;
        case 3: _t->slotLineTypeChanged((*reinterpret_cast< RS2::LineType(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_PenToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_PenToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_QG_PenToolBar,
      qt_meta_data_QG_PenToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_PenToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_PenToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_PenToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_PenToolBar))
        return static_cast<void*>(const_cast< QG_PenToolBar*>(this));
    if (!strcmp(_clname, "RS_LayerListListener"))
        return static_cast< RS_LayerListListener*>(const_cast< QG_PenToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int QG_PenToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QG_PenToolBar::penChanged(RS_Pen _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
