/****************************************************************************
** Meta object code from reading C++ file 'qg_dlgtext.h'
**
** Created: Tue Jun 18 04:11:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_dlgtext.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_dlgtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_DlgText[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      47,   39,   11,   11, 0x0a,
      70,   11,   11,   11, 0x0a,
      83,   11,   11,   11, 0x0a,
     100,   11,   11,   11, 0x0a,
     117,   11,   11,   11, 0x0a,
     134,   11,   11,   11, 0x0a,
     151,   11,   11,   11, 0x0a,
     168,   11,   11,   11, 0x0a,
     185,   11,   11,   11, 0x0a,
     202,   11,   11,   11, 0x0a,
     219,   11,   11,   11, 0x0a,
     236,   11,   11,   11, 0x0a,
     253,   11,   11,   11, 0x0a,
     270,   11,   11,   11, 0x0a,
     287,   11,   11,   11, 0x0a,
     305,   11,   11,   11, 0x0a,
     325,   11,   11,   11, 0x0a,
     348,  346,   11,   11, 0x0a,
     368,  366,   11,   11, 0x0a,
     385,   11,   11,   11, 0x0a,
     399,  396,   11,   11, 0x0a,
     413,   11,   11,   11, 0x0a,
     424,  396,   11,   11, 0x0a,
     438,   11,   11,   11, 0x0a,
     456,   11,   11,   11, 0x0a,
     481,   11,   11,   11, 0x0a,
     494,   11,   11,   11, 0x0a,
     503,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_DlgText[] = {
    "QG_DlgText\0\0updateUniCharComboBox(int)\0"
    "t,isNew\0setText(RS_Text&,bool)\0"
    "updateText()\0setAlignmentTL()\0"
    "setAlignmentTC()\0setAlignmentTR()\0"
    "setAlignmentML()\0setAlignmentMC()\0"
    "setAlignmentMR()\0setAlignmentLL()\0"
    "setAlignmentLC()\0setAlignmentLR()\0"
    "setAlignmentBL()\0setAlignmentBC()\0"
    "setAlignmentBR()\0setAlignmentFit()\0"
    "setAlignmentAlign()\0setAlignmentMiddle()\0"
    "a\0setAlignment(int)\0f\0setFont(QString)\0"
    "loadText()\0fn\0load(QString)\0saveText()\0"
    "save(QString)\0insertSymbol(int)\0"
    "updateUniCharButton(int)\0insertChar()\0"
    "reject()\0languageChange()\0"
};

void QG_DlgText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_DlgText *_t = static_cast<QG_DlgText *>(_o);
        switch (_id) {
        case 0: _t->updateUniCharComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setText((*reinterpret_cast< RS_Text(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateText(); break;
        case 3: _t->setAlignmentTL(); break;
        case 4: _t->setAlignmentTC(); break;
        case 5: _t->setAlignmentTR(); break;
        case 6: _t->setAlignmentML(); break;
        case 7: _t->setAlignmentMC(); break;
        case 8: _t->setAlignmentMR(); break;
        case 9: _t->setAlignmentLL(); break;
        case 10: _t->setAlignmentLC(); break;
        case 11: _t->setAlignmentLR(); break;
        case 12: _t->setAlignmentBL(); break;
        case 13: _t->setAlignmentBC(); break;
        case 14: _t->setAlignmentBR(); break;
        case 15: _t->setAlignmentFit(); break;
        case 16: _t->setAlignmentAlign(); break;
        case 17: _t->setAlignmentMiddle(); break;
        case 18: _t->setAlignment((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->loadText(); break;
        case 21: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->saveText(); break;
        case 23: _t->save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->insertSymbol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->updateUniCharButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->insertChar(); break;
        case 27: _t->reject(); break;
        case 28: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_DlgText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_DlgText::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QG_DlgText,
      qt_meta_data_QG_DlgText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_DlgText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_DlgText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_DlgText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_DlgText))
        return static_cast<void*>(const_cast< QG_DlgText*>(this));
    if (!strcmp(_clname, "Ui::QG_DlgText"))
        return static_cast< Ui::QG_DlgText*>(const_cast< QG_DlgText*>(this));
    return QDialog::qt_metacast(_clname);
}

int QG_DlgText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
