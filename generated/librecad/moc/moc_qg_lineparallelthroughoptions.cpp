/****************************************************************************
** Meta object code from reading C++ file 'qg_lineparallelthroughoptions.h'
**
** Created: Tue Jun 18 04:11:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_lineparallelthroughoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_lineparallelthroughoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_LineParallelThroughOptions[] = {

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
      40,   31,   30,   30, 0x0a,
      78,   76,   30,   30, 0x0a,
      96,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_LineParallelThroughOptions[] = {
    "QG_LineParallelThroughOptions\0\0a,update\0"
    "setAction(RS_ActionInterface*,bool)\0"
    "n\0updateNumber(int)\0languageChange()\0"
};

void QG_LineParallelThroughOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_LineParallelThroughOptions *_t = static_cast<QG_LineParallelThroughOptions *>(_o);
        switch (_id) {
        case 0: _t->setAction((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->updateNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_LineParallelThroughOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_LineParallelThroughOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_LineParallelThroughOptions,
      qt_meta_data_QG_LineParallelThroughOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_LineParallelThroughOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_LineParallelThroughOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_LineParallelThroughOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_LineParallelThroughOptions))
        return static_cast<void*>(const_cast< QG_LineParallelThroughOptions*>(this));
    if (!strcmp(_clname, "Ui::QG_LineParallelThroughOptions"))
        return static_cast< Ui::QG_LineParallelThroughOptions*>(const_cast< QG_LineParallelThroughOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_LineParallelThroughOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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