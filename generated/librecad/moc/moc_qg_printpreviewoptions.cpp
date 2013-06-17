/****************************************************************************
** Meta object code from reading C++ file 'qg_printpreviewoptions.h'
**
** Created: Tue Jun 18 04:11:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_printpreviewoptions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_printpreviewoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_PrintPreviewOptions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   24,   23,   23, 0x0a,
      69,   23,   23,   23, 0x0a,
      82,   23,   23,   23, 0x0a,
      94,   91,   23,   23, 0x0a,
     114,   23,   23,   23, 0x0a,
     122,  120,   23,   23, 0x0a,
     144,  137,   23,   23, 0x0a,
     158,   23,   23,   23, 0x0a,
     177,  175,   23,   23, 0x0a,
     206,  200,   23,   23, 0x0a,
     226,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_PrintPreviewOptions[] = {
    "QG_PrintPreviewOptions\0\0a,update\0"
    "setAction(RS_ActionInterface*,bool)\0"
    "updateData()\0center()\0on\0setBlackWhite(bool)\0"
    "fit()\0s\0scale(QString)\0factor\0"
    "scale(double)\0updateScaleBox()\0f\0"
    "updateScaleBox(double)\0fixed\0"
    "setScaleFixed(bool)\0languageChange()\0"
};

void QG_PrintPreviewOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_PrintPreviewOptions *_t = static_cast<QG_PrintPreviewOptions *>(_o);
        switch (_id) {
        case 0: _t->setAction((*reinterpret_cast< RS_ActionInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->updateData(); break;
        case 2: _t->center(); break;
        case 3: _t->setBlackWhite((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->fit(); break;
        case 5: _t->scale((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->scale((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 7: _t->updateScaleBox(); break;
        case 8: _t->updateScaleBox((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 9: _t->setScaleFixed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_PrintPreviewOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_PrintPreviewOptions::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_PrintPreviewOptions,
      qt_meta_data_QG_PrintPreviewOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_PrintPreviewOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_PrintPreviewOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_PrintPreviewOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_PrintPreviewOptions))
        return static_cast<void*>(const_cast< QG_PrintPreviewOptions*>(this));
    if (!strcmp(_clname, "Ui::QG_PrintPreviewOptions"))
        return static_cast< Ui::QG_PrintPreviewOptions*>(const_cast< QG_PrintPreviewOptions*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_PrintPreviewOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
