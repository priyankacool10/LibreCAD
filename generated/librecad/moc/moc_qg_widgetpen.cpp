/****************************************************************************
** Meta object code from reading C++ file 'qg_widgetpen.h'
**
** Created: Tue Jun 18 04:11:34 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_widgetpen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_widgetpen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_WidgetPen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   14,   13,   13, 0x0a,
      90,   13,   83,   13, 0x0a,
      99,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_WidgetPen[] = {
    "QG_WidgetPen\0\0pen,showByLayer,showUnchanged,title\0"
    "setPen(RS_Pen,bool,bool,QString)\0"
    "RS_Pen\0getPen()\0languageChange()\0"
};

void QG_WidgetPen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_WidgetPen *_t = static_cast<QG_WidgetPen *>(_o);
        switch (_id) {
        case 0: _t->setPen((*reinterpret_cast< RS_Pen(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: { RS_Pen _r = _t->getPen();
            if (_a[0]) *reinterpret_cast< RS_Pen*>(_a[0]) = _r; }  break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_WidgetPen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_WidgetPen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_WidgetPen,
      qt_meta_data_QG_WidgetPen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_WidgetPen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_WidgetPen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_WidgetPen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_WidgetPen))
        return static_cast<void*>(const_cast< QG_WidgetPen*>(this));
    if (!strcmp(_clname, "Ui::QG_WidgetPen"))
        return static_cast< Ui::QG_WidgetPen*>(const_cast< QG_WidgetPen*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_WidgetPen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
