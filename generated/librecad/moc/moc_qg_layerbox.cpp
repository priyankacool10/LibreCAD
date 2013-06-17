/****************************************************************************
** Meta object code from reading C++ file 'qg_layerbox.h'
**
** Created: Tue Jun 18 04:10:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/qg_layerbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_layerbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_LayerBox[] = {

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
      19,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   43,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_LayerBox[] = {
    "QG_LayerBox\0\0layer\0layerChanged(RS_Layer*)\0"
    "index\0slotLayerChanged(int)\0"
};

void QG_LayerBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_LayerBox *_t = static_cast<QG_LayerBox *>(_o);
        switch (_id) {
        case 0: _t->layerChanged((*reinterpret_cast< RS_Layer*(*)>(_a[1]))); break;
        case 1: _t->slotLayerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_LayerBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_LayerBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QG_LayerBox,
      qt_meta_data_QG_LayerBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_LayerBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_LayerBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_LayerBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_LayerBox))
        return static_cast<void*>(const_cast< QG_LayerBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QG_LayerBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void QG_LayerBox::layerChanged(RS_Layer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
