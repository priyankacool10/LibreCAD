/****************************************************************************
** Meta object code from reading C++ file 'qg_trimamountoptions.h'
**
** Created: Tue Jun 18 04:11:33 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_trimamountoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_trimamountoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_TrimAmountOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   22,   21,   21, 0x0a,
      69,   67,   21,   21, 0x0a,
      89,   21,   21,   21, 0x09,
     114,  106,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_TrimAmountOptions[] = {
    "QG_TrimAmountOptions\0\0a,update\0"
    "setAction(RS_ActionInterface*,bool)\0"
    "d\0updateDist(QString)\0languageChange()\0"
    "checked\0on_cbTotalLength_toggled(bool)\0"
};

void QG_TrimAmountOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_TrimAmountOptions *_t = static_cast<QG_TrimAmountOptions *>(_o);
        switch (_id) {
        case 0: _t->setAction((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->updateDist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        case 3: _t->on_cbTotalLength_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_TrimAmountOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_TrimAmountOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_TrimAmountOptions,
      qt_meta_data_QG_TrimAmountOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_TrimAmountOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_TrimAmountOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_TrimAmountOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_TrimAmountOptions))
        return static_cast<void*>(const_cast< QG_TrimAmountOptions*>(this));
    if (!strcmp(_clname, "Ui::QG_TrimAmountOptions"))
        return static_cast< Ui::QG_TrimAmountOptions*>(const_cast< QG_TrimAmountOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_TrimAmountOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
