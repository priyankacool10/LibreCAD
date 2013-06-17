/****************************************************************************
** Meta object code from reading C++ file 'qc_mdiwindow.h'
**
** Created: Tue Jun 18 04:11:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../librecad/src/main/qc_mdiwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qc_mdiwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QC_MDIWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   30,   13,   13, 0x0a,
      55,   13,   13,   13, 0x0a,
      88,   74,   69,   13, 0x0a,
     133,   74,   69,   13, 0x0a,
     192,  171,   69,   13, 0x0a,
     227,  217,   69,   13, 0x2a,
     247,  217,   69,   13, 0x0a,
     275,  269,   69,   13, 0x0a,
     295,   13,   13,   13, 0x0a,
     311,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QC_MDIWindow[] = {
    "QC_MDIWindow\0\0signalClosing()\0p\0"
    "slotPenChanged(RS_Pen)\0slotFileNew()\0"
    "bool\0fileName,type\0"
    "slotFileNewTemplate(QString,RS2::FormatType)\0"
    "slotFileOpen(QString,RS2::FormatType)\0"
    "cancelled,isAutoSave\0slotFileSave(bool&,bool)\0"
    "cancelled\0slotFileSave(bool&)\0"
    "slotFileSaveAs(bool&)\0force\0"
    "slotFileClose(bool)\0slotFilePrint()\0"
    "slotZoomAuto()\0"
};

void QC_MDIWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QC_MDIWindow *_t = static_cast<QC_MDIWindow *>(_o);
        switch (_id) {
        case 0: _t->signalClosing(); break;
        case 1: _t->slotPenChanged((*reinterpret_cast< RS_Pen(*)>(_a[1]))); break;
        case 2: _t->slotFileNew(); break;
        case 3: { bool _r = _t->slotFileNewTemplate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RS2::FormatType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->slotFileOpen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RS2::FormatType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->slotFileSave((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->slotFileSave((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->slotFileSaveAs((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->slotFileClose((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->slotFilePrint(); break;
        case 10: _t->slotZoomAuto(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QC_MDIWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QC_MDIWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QC_MDIWindow,
      qt_meta_data_QC_MDIWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QC_MDIWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QC_MDIWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QC_MDIWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QC_MDIWindow))
        return static_cast<void*>(const_cast< QC_MDIWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QC_MDIWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QC_MDIWindow::signalClosing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
