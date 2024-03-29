# #####################################################################
# Automatically generated by qmake (2.01a) Mo 26. Okt 18:26:00 2009
# #####################################################################
TEMPLATE = app
TARGET = clipgrab
DEPENDPATH += . \
    release
INCLUDEPATH += .
QT += network
QT += webkit
QT += xml

# Input
HEADERS += clipgrab.h \
    converter.h \
    converter_copy.h \
    converter_ffmpeg.h \
    mainwindow.h \
    video.h \
    video_youtube.h \
    video_dailymotion.h \
    video_vimeo.h \
    video_myspass.h \
    video_heuristic.h \
    video_facebook.h \
    http_handler.h \
    notifications.h \
    message_dialog.h
FORMS += mainwindow.ui \
    metadata-dialog.ui \
    update_message.ui \
    message_dialog.ui \
    login_dialog.ui
SOURCES += clipgrab.cpp \
    converter.cpp \
    converter_copy.cpp \
    converter_ffmpeg.cpp \
    main.cpp \
    mainwindow.cpp \
    video.cpp \
    video_youtube.cpp \
    video_dailymotion.cpp \
    video_vimeo.cpp \
    video_myspass.cpp \
    video_heuristic.cpp \
    video_facebook.cpp \
    http_handler.cpp \
    notifications.cpp \
    message_dialog.cpp
RESOURCES += resources.qrc
TRANSLATIONS += clipgrab_bg.ts \
                clipgrab_ca.ts \
                clipgrab_cs.ts \
                clipgrab_de.ts \
                clipgrab_el.ts \
                clipgrab_es.ts \
                clipgrab_eu.ts \
                clipgrab_fa.ts \
                clipgrab_fr.ts \
                clipgrab_fi.ts \
                clipgrab_hr.ts \
                clipgrab_hu.ts \
                clipgrab_id.ts \
                clipgrab_it.ts \
                clipgrab_ja.ts \
                clipgrab_ko.ts \
                clipgrab_mk.ts \
                clipgrab_lt.ts \
                clipgrab_nl.ts \
                clipgrab_no.ts \
                clipgrab_pl.ts \
                clipgrab_pt.ts \
                clipgrab_ro.ts \
                clipgrab_ru.ts \
                clipgrab_si.ts \
                clipgrab_sv.ts \
                clipgrab_sw.ts \
                clipgrab_tr.ts \
                clipgrab_vi.ts \
                clipgrab_zh.ts \
                clipgrab_strings.ts
CODECFORTR = UTF-8
win32:RC_FILE = windows_icon.rc
macx { 
    TARGET = ClipGrab
    ICON = clipgrab.icns
    RC_FILE = clipgrab.icns
    QMAKE_INFO_PLIST = ClipGrab.plist
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.7
    QMAKE_MAC_SDK=/Developer/SDKs/MacOSX10.7.sdk
    OBJECTIVE_HEADERS += notifications_mac.h
    OBJECTIVE_SOURCES += notifications_mac.mm
    OBJECTIVE_HEADERS += savedialog_mac.h
    OBJECTIVE_SOURCES += savedialog_mac.mm
    LIBS += -framework AppKit -framework Foundation
}
VERSION = 3.7.0
DEFINES += CLIPGRAB_VERSION=$$VERSION
