/****************************************************************************
** Meta object code from reading C++ file 'clipgrab.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clipgrab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipgrab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClipGrab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   10,    9,    9, 0x05,
      69,   65,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   65,    9,    9, 0x0a,
     133,    9,    9,    9, 0x0a,
     157,  155,    9,    9, 0x0a,
     191,  186,    9,    9, 0x0a,
     217,  211,    9,    9, 0x0a,
     254,  249,    9,    9, 0x0a,
     274,  249,    9,    9, 0x0a,
     294,  249,    9,    9, 0x0a,
     315,    9,    9,    9, 0x0a,
     334,    9,    9,    9, 0x0a,
     353,    9,    9,    9, 0x0a,
     377,    9,    9,    9, 0x0a,
     389,    9,    9,    9, 0x0a,
     411,    9,    9,    9, 0x0a,
     424,    9,    9,    9, 0x0a,
     449,  155,    9,    9, 0x0a,
     487,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ClipGrab[] = {
    "ClipGrab\0\0,url,portal\0"
    "compatiblePortalFound(bool,QString,video*)\0"
    "url\0compatibleUrlFoundInClipboard(QString)\0"
    "determinePortal(QString)\0errorHandler(QString)\0"
    ",\0errorHandler(QString,video*)\0clip\0"
    "addDownload(video*)\0reply\0"
    "parseUpdateInfo(QNetworkReply*)\0item\0"
    "cancelDownload(int)\0removeDownload(int)\0"
    "restartDownload(int)\0clipboardChanged()\0"
    "pauseDownload(int)\0activateProxySettings()\0"
    "cancelAll()\0startUpdateDownload()\0"
    "skipUpdate()\0updateDownloadFinished()\0"
    "updateDownloadProgress(qint64,qint64)\0"
    "updateReadyRead()\0"
};

void ClipGrab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClipGrab *_t = static_cast<ClipGrab *>(_o);
        switch (_id) {
        case 0: _t->compatiblePortalFound((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< video*(*)>(_a[3]))); break;
        case 1: _t->compatibleUrlFoundInClipboard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->determinePortal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->errorHandler((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->errorHandler((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< video*(*)>(_a[2]))); break;
        case 5: _t->addDownload((*reinterpret_cast< video*(*)>(_a[1]))); break;
        case 6: _t->parseUpdateInfo((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->cancelDownload((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->removeDownload((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->restartDownload((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->clipboardChanged(); break;
        case 11: _t->pauseDownload((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->activateProxySettings(); break;
        case 13: _t->cancelAll(); break;
        case 14: _t->startUpdateDownload(); break;
        case 15: _t->skipUpdate(); break;
        case 16: _t->updateDownloadFinished(); break;
        case 17: _t->updateDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 18: _t->updateReadyRead(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ClipGrab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ClipGrab::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClipGrab,
      qt_meta_data_ClipGrab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClipGrab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClipGrab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClipGrab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClipGrab))
        return static_cast<void*>(const_cast< ClipGrab*>(this));
    return QObject::qt_metacast(_clname);
}

int ClipGrab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void ClipGrab::compatiblePortalFound(bool _t1, QString _t2, video * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClipGrab::compatibleUrlFoundInClipboard(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
