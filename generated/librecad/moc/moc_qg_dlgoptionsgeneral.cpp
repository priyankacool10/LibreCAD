/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgoptionsgeneral.h'
**
** Created: Tue Jun 18 04:11:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgoptionsgeneral.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgoptionsgeneral.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgOptionsGeneral[] = {

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
      22,   21,   21,   21, 0x0a,
      41,   21,   21,   21, 0x0a,
      46,   21,   21,   21, 0x09,
      63,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgOptionsGeneral[] = {
    "QG_DlgOptionsGeneral\0\0setRestartNeeded()\0"
    "ok()\0languageChange()\0setTemplateFile()\0"
};

void QG_DlgOptionsGeneral::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgOptionsGeneral *_t = static_cast<QG_DlgOptionsGeneral *>(_o);
        switch (_id) {
        case 0: _t->setRestartNeeded(); break;
        case 1: _t->ok(); break;
        case 2: _t->languageChange(); break;
        case 3: _t->setTemplateFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QG_DlgOptionsGeneral::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgOptionsGeneral::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgOptionsGeneral,
      qt_meta_data_QG_DlgOptionsGeneral, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgOptionsGeneral::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgOptionsGeneral::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgOptionsGeneral::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgOptionsGeneral))
        return static_cast<void*>(const_cast< QG_DlgOptionsGeneral*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgOptionsGeneral"))
        return static_cast< Ui::QG_DlgOptionsGeneral*>(const_cast< QG_DlgOptionsGeneral*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgOptionsGeneral::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
