/****************************************************************************
** Meta object code from reading C++ file 'video.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "video.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_video[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,
      24,   22,    6,    6, 0x05,
      46,   22,    6,    6, 0x05,
      71,    6,    6,    6, 0x05,
      93,    6,    6,    6, 0x05,
     112,    6,    6,    6, 0x05,
     132,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     159,    6,    6,    6, 0x09,
     177,   22,    6,    6, 0x09,
     207,    6,    6,    6, 0x09,
     222,    6,    6,    6, 0x09,
     243,    6,    6,    6, 0x09,
     273,  267,    6,    6, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_video[] = {
    "video\0\0error(QString)\0,\0error(QString,video*)\0"
    "progressChanged(int,int)\0stateChanged(QString)\0"
    "downloadFinished()\0analysingFinished()\0"
    "conversionFinished(video*)\0handleDownloads()\0"
    "changeProgress(qint64,qint64)\0"
    "startConvert()\0conversionFinished()\0"
    "slotAnalysingFinished()\0error\0"
    "networkError(QString)\0"
};

void video::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        video *_t = static_cast<video *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< video*(*)>(_a[2]))); break;
        case 2: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->downloadFinished(); break;
        case 5: _t->analysingFinished(); break;
        case 6: _t->conversionFinished((*reinterpret_cast< video*(*)>(_a[1]))); break;
        case 7: _t->handleDownloads(); break;
        case 8: _t->changeProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->startConvert(); break;
        case 10: _t->conversionFinished(); break;
        case 11: _t->slotAnalysingFinished(); break;
        case 12: _t->networkError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData video::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject video::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_video,
      qt_meta_data_video, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &video::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *video::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *video::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_video))
        return static_cast<void*>(const_cast< video*>(this));
    return QObject::qt_metacast(_clname);
}

int video::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void video::error(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void video::error(QString _t1, video * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void video::progressChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void video::stateChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void video::downloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void video::analysingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void video::conversionFinished(video * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
