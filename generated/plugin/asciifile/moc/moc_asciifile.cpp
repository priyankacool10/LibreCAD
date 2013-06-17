/****************************************************************************
** Meta object code from reading C++ file 'asciifile.h'
**
** Created: Tue Jun 18 04:11:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/asciifile/asciifile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asciifile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AsciiFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_AsciiFile[] = {
    "AsciiFile\0"
};

void AsciiFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AsciiFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AsciiFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AsciiFile,
      qt_meta_data_AsciiFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AsciiFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AsciiFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AsciiFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AsciiFile))
        return static_cast<void*>(const_cast< AsciiFile*>(this));
    if (!strcmp(_clname, "QC_PluginInterface"))
        return static_cast< QC_PluginInterface*>(const_cast< AsciiFile*>(this));
    if (!strcmp(_clname, "org.librecad.PluginInterface/1.0"))
        return static_cast< QC_PluginInterface*>(const_cast< AsciiFile*>(this));
    return QObject::qt_metacast(_clname);
}

int AsciiFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_dibPunto[] = {

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
      10,    9,    9,    9, 0x0a,
      24,   20,    9,    9, 0x0a,
      56,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dibPunto[] = {
    "dibPunto\0\0dptFile()\0doc\0"
    "procesFile(Document_Interface*)\0"
    "checkAccept()\0"
};

void dibPunto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        dibPunto *_t = static_cast<dibPunto *>(_o);
        switch (_id) {
        case 0: _t->dptFile(); break;
        case 1: _t->procesFile((*reinterpret_cast< Document_Interface*(*)>(_a[1]))); break;
        case 2: _t->checkAccept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData dibPunto::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject dibPunto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dibPunto,
      qt_meta_data_dibPunto, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dibPunto::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dibPunto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dibPunto::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dibPunto))
        return static_cast<void*>(const_cast< dibPunto*>(this));
    return QDialog::qt_metacast(_clname);
}

int dibPunto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_imgLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_imgLabel[] = {
    "imgLabel\0"
};

void imgLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData imgLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject imgLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_imgLabel,
      qt_meta_data_imgLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &imgLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *imgLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *imgLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_imgLabel))
        return static_cast<void*>(const_cast< imgLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int imgLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_pointBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_pointBox[] = {
    "pointBox\0"
};

void pointBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData pointBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pointBox::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_pointBox,
      qt_meta_data_pointBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pointBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pointBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pointBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pointBox))
        return static_cast<void*>(const_cast< pointBox*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int pointBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_textBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_textBox[] = {
    "textBox\0"
};

void textBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData textBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject textBox::staticMetaObject = {
    { &pointBox::staticMetaObject, qt_meta_stringdata_textBox,
      qt_meta_data_textBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &textBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *textBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *textBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_textBox))
        return static_cast<void*>(const_cast< textBox*>(this));
    return pointBox::qt_metacast(_clname);
}

int textBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pointBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
