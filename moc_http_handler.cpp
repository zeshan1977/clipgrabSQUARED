/****************************************************************************
** Meta object code from reading C++ file 'http_handler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "http_handler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_http_handler[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      31,   29,   13,   13, 0x05,
      63,   13,   13,   13, 0x05,
      91,   13,   13,   13, 0x05,
     139,  114,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     170,   13,   13,   13, 0x09,
     184,   13,   13,   13, 0x09,
     218,   13,   13,   13, 0x09,
     266,  253,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_http_handler[] = {
    "http_handler\0\0error(QString)\0,\0"
    "downloadProgress(qint64,qint64)\0"
    "downloadFinished(download*)\0"
    "allDownloadsFinished()\0bytesReceived,bytesTotal\0"
    "progressChanged(qint64,qint64)\0"
    "dataHandler()\0handleFinishedDownload(download*)\0"
    "handleNetworkReply(QNetworkReply*)\0"
    "reply,errors\0"
    "handleSSLError(QNetworkReply*,QList<QSslError>)\0"
};

void http_handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        http_handler *_t = static_cast<http_handler *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->downloadFinished((*reinterpret_cast< download*(*)>(_a[1]))); break;
        case 3: _t->allDownloadsFinished(); break;
        case 4: _t->progressChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->dataHandler(); break;
        case 6: _t->handleFinishedDownload((*reinterpret_cast< download*(*)>(_a[1]))); break;
        case 7: _t->handleNetworkReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->handleSSLError((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData http_handler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject http_handler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_http_handler,
      qt_meta_data_http_handler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &http_handler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *http_handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *http_handler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_http_handler))
        return static_cast<void*>(const_cast< http_handler*>(this));
    return QObject::qt_metacast(_clname);
}

int http_handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void http_handler::error(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void http_handler::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void http_handler::downloadFinished(download * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void http_handler::allDownloadsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void http_handler::progressChanged(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
