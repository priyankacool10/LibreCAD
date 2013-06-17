/****************************************************************************
** Meta object code from reading C++ file 'qg_blockdialog.h'
**
** Created: Tue Jun 18 04:10:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_blockdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_blockdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_BlockDialog[] = {

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
      18,   16,   15,   15, 0x0a,
      46,   15,   15,   15, 0x0a,
      57,   15,   15,   15, 0x0a,
      66,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_BlockDialog[] = {
    "QG_BlockDialog\0\0l\0setBlockList(RS_BlockList*)\0"
    "validate()\0cancel()\0languageChange()\0"
};

void QG_BlockDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_BlockDialog *_t = static_cast<QG_BlockDialog *>(_o);
        switch (_id) {
        case 0: _t->setBlockList((*reinterpret_cast< RS_BlockList*(*)>(_a[1]))); break;
        case 1: _t->validate(); break;
        case 2: _t->cancel(); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_BlockDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_BlockDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_BlockDialog,
      qt_meta_data_QG_BlockDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_BlockDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_BlockDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_BlockDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_BlockDialog))
        return static_cast<void*>(const_cast< QG_BlockDialog*>(this));
    if (!strcmp(_clname, "Ui::QG_BlockDialog"))
        return static_cast< Ui::QG_BlockDialog*>(const_cast< QG_BlockDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_BlockDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
