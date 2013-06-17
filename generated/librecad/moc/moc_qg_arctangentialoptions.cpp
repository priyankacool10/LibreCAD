/****************************************************************************
** Meta object code from reading C++ file 'qg_arctangentialoptions.h'
**
** Created: Tue Jun 18 04:10:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_arctangentialoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_arctangentialoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_ArcTangentialOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   25,   24,   24, 0x0a,
      72,   70,   24,   24, 0x0a,
      94,   70,   24,   24, 0x0a,
     118,  115,   24,   24, 0x0a,
     139,   24,   24,   24, 0x09,
     161,  156,   24,   24, 0x08,
     193,  156,   24,   24, 0x08,
     232,  224,   24,   24, 0x08,
     258,  224,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QG_ArcTangentialOptions[] = {
    "QG_ArcTangentialOptions\0\0a,update\0"
    "setAction(RS_ActionInterface*,bool)\0"
    "s\0updateRadius(QString)\0updateAngle(QString)\0"
    "br\0updateByRadius(bool)\0languageChange()\0"
    "arg1\0on_leRadius_textEdited(QString)\0"
    "on_leAngle_textEdited(QString)\0checked\0"
    "on_rbRadius_clicked(bool)\0"
    "on_rbAngle_clicked(bool)\0"
};

void QG_ArcTangentialOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_ArcTangentialOptions *_t = static_cast<QG_ArcTangentialOptions *>(_o);
        switch (_id) {
        case 0: _t->setAction((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->updateRadius((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateAngle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateByRadius((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->languageChange(); break;
        case 5: _t->on_leRadius_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_leAngle_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_rbRadius_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_rbAngle_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_ArcTangentialOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_ArcTangentialOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_ArcTangentialOptions,
      qt_meta_data_QG_ArcTangentialOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_ArcTangentialOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_ArcTangentialOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_ArcTangentialOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_ArcTangentialOptions))
        return static_cast<void*>(const_cast< QG_ArcTangentialOptions*>(this));
    if (!strcmp(_clname, "Ui::QG_ArcTangentialOptions"))
        return static_cast< Ui::QG_ArcTangentialOptions*>(const_cast< QG_ArcTangentialOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_ArcTangentialOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
