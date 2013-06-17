/****************************************************************************
** Meta object code from reading C++ file 'qg_colorbox.h'
**
** Created: Tue Jun 18 04:10:06 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/qg_colorbox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_colorbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_ColorBox[] = {

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
      48,   42,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_ColorBox[] = {
    "QG_ColorBox\0\0color\0colorChanged(RS_Color)\0"
    "index\0slotColorChanged(int)\0"
};

void QG_ColorBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_ColorBox *_t = static_cast<QG_ColorBox *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const RS_Color(*)>(_a[1]))); break;
        case 1: _t->slotColorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_ColorBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_ColorBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QG_ColorBox,
      qt_meta_data_QG_ColorBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_ColorBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_ColorBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_ColorBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_ColorBox))
        return static_cast<void*>(const_cast< QG_ColorBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QG_ColorBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QG_ColorBox::colorChanged(const RS_Color & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
