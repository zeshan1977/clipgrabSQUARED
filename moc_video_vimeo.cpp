/****************************************************************************
** Meta object code from reading C++ file 'video_vimeo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "video_vimeo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_vimeo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_video_vimeo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      31,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_video_vimeo[] = {
    "video_vimeo\0\0handleLogin(QUrl)\0"
    "verifyForm(bool)\0"
};

void video_vimeo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        video_vimeo *_t = static_cast<video_vimeo *>(_o);
        switch (_id) {
        case 0: _t->handleLogin((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->verifyForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData video_vimeo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject video_vimeo::staticMetaObject = {
    { &video::staticMetaObject, qt_meta_stringdata_video_vimeo,
      qt_meta_data_video_vimeo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &video_vimeo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *video_vimeo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *video_vimeo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_video_vimeo))
        return static_cast<void*>(const_cast< video_vimeo*>(this));
    return video::qt_metacast(_clname);
}

int video_vimeo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = video::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
