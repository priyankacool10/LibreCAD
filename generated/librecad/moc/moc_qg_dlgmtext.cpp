/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgmtext.h'
**
** Created: Tue Jun 18 04:11:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgmtext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgmtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgMText[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      48,   40,   12,   12, 0x0a,
      72,   12,   12,   12, 0x0a,
      85,   12,   12,   12, 0x0a,
     102,   12,   12,   12, 0x0a,
     119,   12,   12,   12, 0x0a,
     136,   12,   12,   12, 0x0a,
     153,   12,   12,   12, 0x0a,
     170,   12,   12,   12, 0x0a,
     187,   12,   12,   12, 0x0a,
     204,   12,   12,   12, 0x0a,
     221,   12,   12,   12, 0x0a,
     240,  238,   12,   12, 0x0a,
     260,  258,   12,   12, 0x0a,
     277,   12,   12,   12, 0x0a,
     298,   12,   12,   12, 0x0a,
     312,  309,   12,   12, 0x0a,
     326,   12,   12,   12, 0x0a,
     337,  309,   12,   12, 0x0a,
     351,   12,   12,   12, 0x0a,
     369,   12,   12,   12, 0x0a,
     394,   12,   12,   12, 0x0a,
     407,   12,   12,   12, 0x0a,
     416,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgMText[] = {
    "QG_DlgMText\0\0updateUniCharComboBox(int)\0"
    "t,isNew\0setText(RS_MText&,bool)\0"
    "updateText()\0setAlignmentTL()\0"
    "setAlignmentTC()\0setAlignmentTR()\0"
    "setAlignmentML()\0setAlignmentMC()\0"
    "setAlignmentMR()\0setAlignmentBL()\0"
    "setAlignmentBC()\0setAlignmentBR()\0a\0"
    "setAlignment(int)\0f\0setFont(QString)\0"
    "defaultChanged(bool)\0loadText()\0fn\0"
    "load(QString)\0saveText()\0save(QString)\0"
    "insertSymbol(int)\0updateUniCharButton(int)\0"
    "insertChar()\0reject()\0languageChange()\0"
};

void QG_DlgMText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgMText *_t = static_cast<QG_DlgMText *>(_o);
        switch (_id) {
        case 0: _t->updateUniCharComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast< RS_MText(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateText(); break;
        case 3: _t->setAlignmentTL(); break;
        case 4: _t->setAlignmentTC(); break;
        case 5: _t->setAlignmentTR(); break;
        case 6: _t->setAlignmentML(); break;
        case 7: _t->setAlignmentMC(); break;
        case 8: _t->setAlignmentMR(); break;
        case 9: _t->setAlignmentBL(); break;
        case 10: _t->setAlignmentBC(); break;
        case 11: _t->setAlignmentBR(); break;
        case 12: _t->setAlignment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->defaultChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->loadText(); break;
        case 16: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->saveText(); break;
        case 18: _t->save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->insertSymbol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updateUniCharButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->insertChar(); break;
        case 22: _t->reject(); break;
        case 23: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgMText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgMText::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgMText,
      qt_meta_data_QG_DlgMText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgMText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgMText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgMText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgMText))
        return static_cast<void*>(const_cast< QG_DlgMText*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgMText"))
        return static_cast< Ui::QG_DlgMText*>(const_cast< QG_DlgMText*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgMText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
