#-------------------------------------------------
#
# Project created by QtCreator 2017-12-06T16:24:09
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ICE_PLAYER
TEMPLATE = app


SOURCES += main.cpp\
        iceplayer.cpp \
    icelabel.cpp \
    icebutton.cpp \
    icevolbutton.cpp \
    nofocusdelegate.cpp

HEADERS  += iceplayer.h \
    icelabel.h \
    icebutton.h \
    icevolbutton.h \
    nofocusdelegate.h

FORMS    += iceplayer.ui

RESOURCES += \
    resources.qrc
