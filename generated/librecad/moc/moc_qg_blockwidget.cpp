/****************************************************************************
** Meta object code from reading C++ file 'qg_blockwidget.h'
**
** Created: Tue Jun 18 04:10:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/qg_blockwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_blockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_BlockWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   25,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QG_BlockWidget[] = {
    "QG_BlockWidget\0\0escape()\0blockIdx\0"
    "slotActivated(QModelIndex)\0"
};

void QG_BlockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_BlockWidget *_t = static_cast<QG_BlockWidget *>(_o);
        switch (_id) {
        case 0: _t->escape(); break;
        case 1: _t->slotActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_BlockWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_BlockWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_BlockWidget,
      qt_meta_data_QG_BlockWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_BlockWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_BlockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_BlockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_BlockWidget))
        return static_cast<void*>(const_cast< QG_BlockWidget*>(this));
    if (!strcmp(_clname, "RS_BlockListListener"))
        return static_cast< RS_BlockListListener*>(const_cast< QG_BlockWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_BlockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QG_BlockWidget::escape()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
