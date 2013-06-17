/****************************************************************************
** Meta object code from reading C++ file 'qg_lineoptions.h'
**
** Created: Tue Jun 18 04:11:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_lineoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_lineoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_LineOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x0a,
      49,   15,   15,   15, 0x0a,
      57,   15,   15,   15, 0x0a,
      64,   15,   15,   15, 0x0a,
      71,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_LineOptions[] = {
    "QG_LineOptions\0\0a\0setAction(RS_ActionInterface*)\0"
    "close()\0undo()\0redo()\0languageChange()\0"
};

void QG_LineOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_LineOptions *_t = static_cast<QG_LineOptions *>(_o);
        switch (_id) {
        case 0: _t->setAction((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1]))); break;
        case 1: _t->close(); break;
        case 2: _t->undo(); break;
        case 3: _t->redo(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_LineOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_LineOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_LineOptions,
      qt_meta_data_QG_LineOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_LineOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_LineOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_LineOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_LineOptions))
        return static_cast<void*>(const_cast< QG_LineOptions*>(this));
    if (!strcmp(_clname, "Ui::QG_LineOptions"))
        return static_cast< Ui::QG_LineOptions*>(const_cast< QG_LineOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_LineOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
