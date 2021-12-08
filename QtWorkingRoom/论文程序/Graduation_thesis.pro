#-------------------------------------------------
#
# Project created by QtCreator 2020-11-17T17:02:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Graduation_thesis
TEMPLATE = app
CONFIG +=c++11
CONFIG +=console


SOURCES += main.cpp\
        widget.cpp \
    form.cpp

HEADERS  += widget.h \
    form.h

FORMS    += widget.ui \
    form.ui

RESOURCES +=

OTHER_FILES += \
    arrow1.png
