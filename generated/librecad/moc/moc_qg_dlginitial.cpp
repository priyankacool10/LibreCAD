/****************************************************************************
** Meta object code from reading C++ file 'qg_dlginitial.h'
**
** Created: Tue Jun 18 04:10:55 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlginitial.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlginitial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgInitial[] = {

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
      17,   15,   14,   14, 0x0a,
      36,   34,   14,   14, 0x0a,
      55,   14,   14,   14, 0x0a,
      60,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgInitial[] = {
    "QG_DlgInitial\0\0t\0setText(QString)\0p\0"
    "setPixmap(QPixmap)\0ok()\0languageChange()\0"
};

void QG_DlgInitial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgInitial *_t = static_cast<QG_DlgInitial *>(_o);
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 2: _t->ok(); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgInitial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgInitial::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgInitial,
      qt_meta_data_QG_DlgInitial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgInitial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgInitial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgInitial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgInitial))
        return static_cast<void*>(const_cast< QG_DlgInitial*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgInitial"))
        return static_cast< Ui::QG_DlgInitial*>(const_cast< QG_DlgInitial*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgInitial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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