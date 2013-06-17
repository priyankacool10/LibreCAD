/****************************************************************************
** Meta object code from reading C++ file 'qg_librarywidget.h'
**
** Created: Tue Jun 18 04:10:12 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/ui/qg_librarywidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qg_librarywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QG_LibraryWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   27,   17,   17, 0x0a,
      68,   66,   17,   17, 0x0a,
      94,   17,   17,   17, 0x0a,
     118,  103,   17,   17, 0x0a,
     157,  153,   17,   17, 0x0a,
     184,  153,   17,   17, 0x0a,
     208,  153,   17,   17, 0x0a,
     234,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QG_LibraryWidget[] = {
    "QG_LibraryWidget\0\0escape()\0ah\0"
    "setActionHandler(QG_ActionHandler*)\0"
    "e\0keyPressEvent(QKeyEvent*)\0insert()\0"
    "item,directory\0appendTree(QStandardItem*,QString)\0"
    "idx\0updatePreview(QModelIndex)\0"
    "expandView(QModelIndex)\0"
    "collapseView(QModelIndex)\0languageChange()\0"
};

void QG_LibraryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QG_LibraryWidget *_t = static_cast<QG_LibraryWidget *>(_o);
        switch (_id) {
        case 0: _t->escape(); break;
        case 1: _t->setActionHandler((*reinterpret_cast< QG_ActionHandler*(*)>(_a[1]))); break;
        case 2: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 3: _t->insert(); break;
        case 4: _t->appendTree((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->updatePreview((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: _t->expandView((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: _t->collapseView((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 8: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QG_LibraryWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QG_LibraryWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QG_LibraryWidget,
      qt_meta_data_QG_LibraryWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QG_LibraryWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QG_LibraryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QG_LibraryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QG_LibraryWidget))
        return static_cast<void*>(const_cast< QG_LibraryWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QG_LibraryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QG_LibraryWidget::escape()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
