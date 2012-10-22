include(../libs.pri)

QT       += core gui

INCLUDEPATH += . \
    realtime/include \
    realtime/interfaces \
    realtime/tools/include

HEADERS += \
    globalsettings.h \
    realtime/interfaces/iclientrealtimesettings.h \
    realtime/interfaces/ihostrealtimesettings.h \
    realtime/include/clientrealtimesettings.h \
    realtime/include/hostrealtimesettings.h \
    realtime/tools/include/statictools.h

SOURCES += \
    globalsettings.cpp \
    realtime/tools/statictools.cpp \
    realtime/clientrealtimesettings.cpp \
    realtime/hostrealtimesettings.cpp
