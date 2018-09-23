/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   11,   11,   11, 0x0a,
      49,   46,   11,   11, 0x0a,
      96,   92,   11,   11, 0x0a,
     135,   11,   11,   11, 0x0a,
     160,  153,   11,   11, 0x0a,
     194,  188,   11,   11, 0x08,
     225,  188,   11,   11, 0x08,
     273,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     347,   11,   11,   11, 0x08,
     393,  388,   11,   11, 0x08,
     425,   11,   11,   11, 0x08,
     461,   11,   11,   11, 0x08,
     505,   11,   11,   11, 0x08,
     532,   11,   11,   11, 0x08,
     602,  585,   11,   11, 0x08,
     672,   11,   11,   11, 0x08,
     699,   11,   11,   11, 0x08,
     758,   11,   11,   11, 0x08,
     784,   11,   11,   11, 0x08,
     826,   11,   11,   11, 0x08,
     854,   11,   11,   11, 0x08,
     892,   11,   11,   11, 0x08,
     934,   11,   11,   11, 0x08,
     979,   11,   11,   11, 0x08,
    1011,   11,   11,   11, 0x08,
    1047,   11,   11,   11, 0x08,
    1070,   11,   11,   11, 0x08,
    1091,   11,   11,   11, 0x08,
    1124,   11,   11,   11, 0x08,
    1167,  188,   11,   11, 0x08,
    1212,   11,   11,   11, 0x08,
    1246, 1238,   11,   11, 0x08,
    1279, 1238,   11,   11, 0x08,
    1324, 1320,   11,   11, 0x08,
    1375, 1238,   11,   11, 0x08,
    1415, 1238,   11,   11, 0x08,
    1461,  188,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0itemToRemove(int)\0"
    "startDownload()\0,,\0"
    "compatiblePortalFound(bool,QString,video*)\0"
    "url\0compatibleUrlFoundInClipBoard(QString)\0"
    "updateVideoInfo()\0target\0"
    "targetFileSelected(QString)\0index\0"
    "on_mainTab_currentChanged(int)\0"
    "on_downloadComboFormat_currentIndexChanged(int)\0"
    "on_searchWebView_linkClicked(QUrl)\0"
    "on_searchLineEdit_textChanged(QString)\0"
    "on_settingsUseMetadata_stateChanged(int)\0"
    "link\0on_label_linkActivated(QString)\0"
    "on_downloadLineEdit_returnPressed()\0"
    "on_settingsMinimizeToTray_stateChanged(int)\0"
    "on_downloadPause_clicked()\0"
    "on_settingsRemoveFinishedDownloads_stateChanged(int)\0"
    "current,previous\0"
    "on_downloadTree_currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "systemTrayMessageClicked()\0"
    "systemTrayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "on_downloadOpen_clicked()\0"
    "on_settingsSaveLastPath_stateChanged(int)\0"
    "on_downloadCancel_clicked()\0"
    "on_settingsBrowseTargetPath_clicked()\0"
    "on_settingsSavedPath_textChanged(QString)\0"
    "on_settingsNeverAskForPath_stateChanged(int)\0"
    "settingsClipboard_toggled(bool)\0"
    "settingsNotifications_toggled(bool)\0"
    "settingsProxyChanged()\0processSearchReply()\0"
    "handleFinishedConversion(video*)\0"
    "on_downloadTree_doubleClicked(QModelIndex)\0"
    "on_settingsLanguage_currentIndexChanged(int)\0"
    "on_buttonDonate_clicked()\0checked\0"
    "on_settingsUseWebM_toggled(bool)\0"
    "on_settingsIgnoreSSLErrors_toggled(bool)\0"
    "pos\0on_downloadTree_customContextMenuRequested(QPoint)\0"
    "on_settingsRememberLogins_toggled(bool)\0"
    "on_settingsRememberVideoQuality_toggled(bool)\0"
    "on_downloadComboQuality_currentIndexChanged(int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->itemToRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->startDownload(); break;
        case 2: _t->compatiblePortalFound((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< video*(*)>(_a[3]))); break;
        case 3: _t->compatibleUrlFoundInClipBoard((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->updateVideoInfo(); break;
        case 5: _t->targetFileSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_mainTab_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_downloadComboFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_searchWebView_linkClicked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 9: _t->on_searchLineEdit_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_settingsUseMetadata_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_label_linkActivated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_downloadLineEdit_returnPressed(); break;
        case 13: _t->on_settingsMinimizeToTray_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_downloadPause_clicked(); break;
        case 15: _t->on_settingsRemoveFinishedDownloads_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_downloadTree_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 17: _t->systemTrayMessageClicked(); break;
        case 18: _t->systemTrayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 19: _t->on_downloadOpen_clicked(); break;
        case 20: _t->on_settingsSaveLastPath_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_downloadCancel_clicked(); break;
        case 22: _t->on_settingsBrowseTargetPath_clicked(); break;
        case 23: _t->on_settingsSavedPath_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->on_settingsNeverAskForPath_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->settingsClipboard_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->settingsNotifications_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->settingsProxyChanged(); break;
        case 28: _t->processSearchReply(); break;
        case 29: _t->handleFinishedConversion((*reinterpret_cast< video*(*)>(_a[1]))); break;
        case 30: _t->on_downloadTree_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 31: _t->on_settingsLanguage_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_buttonDonate_clicked(); break;
        case 33: _t->on_settingsUseWebM_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_settingsIgnoreSSLErrors_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_downloadTree_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 36: _t->on_settingsRememberLogins_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_settingsRememberVideoQuality_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_downloadComboQuality_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::itemToRemove(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
