/****************************************************************************
** Meta object code from reading C++ file 'qg_commandwidget.h'
**
** Created: Tue Jun 18 04:10:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/forms/qg_commandwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_commandwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_CommandWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      33,   29,   17,   17, 0x0a,
      57,   53,   17,   17, 0x0a,
      80,   17,   17,   17, 0x0a,
      90,   17,   17,   17, 0x0a,
     103,   17,   17,   17, 0x0a,
     115,  112,   17,   17, 0x0a,
     151,   17,   17,   17, 0x0a,
     168,   17,   17,   17, 0x0a,
     184,   17,   17,   17, 0x0a,
     201,   17,   17,   17, 0x0a,
     217,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_CommandWidget[] = {
    "QG_CommandWidget\0\0setFocus()\0cmd\0"
    "setCommand(QString)\0msg\0appendHistory(QString)\0"
    "trigger()\0tabPressed()\0escape()\0ah\0"
    "setActionHandler(QG_ActionHandler*)\0"
    "setCommandMode()\0setNormalMode()\0"
    "redirectStderr()\0processStderr()\0"
    "languageChange()\0"
};

void QG_CommandWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_CommandWidget *_t = static_cast<QG_CommandWidget *>(_o);
        switch (_id) {
        case 0: _t->setFocus(); break;
        case 1: _t->setCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->appendHistory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->trigger(); break;
        case 4: _t->tabPressed(); break;
        case 5: _t->escape(); break;
        case 6: _t->setActionHandler((*reinterpret_cast< QG_ActionHandler*(*)>(_a[1]))); break;
        case 7: _t->setCommandMode(); break;
        case 8: _t->setNormalMode(); break;
        case 9: _t->redirectStderr(); break;
        case 10: _t->processStderr(); break;
        case 11: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_CommandWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_CommandWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_CommandWidget,
      qt_meta_data_QG_CommandWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_CommandWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_CommandWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_CommandWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_CommandWidget))
        return static_cast<void*>(const_cast< QG_CommandWidget*>(this));
    if (!strcmp(_clname, "Ui::QG_CommandWidget"))
        return static_cast< Ui::QG_CommandWidget*>(const_cast< QG_CommandWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_CommandWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
