/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgline.h'
**
** Created: Tue Jun 18 04:10:57 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgline.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgLine[] = {

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
      14,   12,   11,   11, 0x0a,
      32,   11,   11,   11, 0x0a,
      45,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgLine[] = {
    "QG_DlgLine\0\0l\0setLine(RS_Line&)\0"
    "updateLine()\0languageChange()\0"
};

void QG_DlgLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgLine *_t = static_cast<QG_DlgLine *>(_o);
        switch (_id) {
        case 0: _t->setLine((*reinterpret_cast< RS_Line(*)>(_a[1]))); break;
        case 1: _t->updateLine(); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgLine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgLine::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgLine,
      qt_meta_data_QG_DlgLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgLine))
        return static_cast<void*>(const_cast< QG_DlgLine*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgLine"))
        return static_cast< Ui::QG_DlgLine*>(const_cast< QG_DlgLine*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
