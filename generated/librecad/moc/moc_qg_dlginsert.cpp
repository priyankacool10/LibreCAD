/****************************************************************************
** Meta object code from reading C++ file 'qg_dlginsert.h'
**
** Created: Tue Jun 18 04:10:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlginsert.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlginsert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgInsert[] = {

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
      16,   14,   13,   13, 0x0a,
      38,   13,   13,   13, 0x0a,
      53,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgInsert[] = {
    "QG_DlgInsert\0\0i\0setInsert(RS_Insert&)\0"
    "updateInsert()\0languageChange()\0"
};

void QG_DlgInsert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgInsert *_t = static_cast<QG_DlgInsert *>(_o);
        switch (_id) {
        case 0: _t->setInsert((*reinterpret_cast< RS_Insert(*)>(_a[1]))); break;
        case 1: _t->updateInsert(); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgInsert::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgInsert::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgInsert,
      qt_meta_data_QG_DlgInsert, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgInsert::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgInsert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgInsert::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgInsert))
        return static_cast<void*>(const_cast< QG_DlgInsert*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgInsert"))
        return static_cast< Ui::QG_DlgInsert*>(const_cast< QG_DlgInsert*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgInsert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
