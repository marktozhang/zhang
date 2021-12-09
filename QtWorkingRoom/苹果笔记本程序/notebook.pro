#-------------------------------------------------
#
# Project created by QtCreator 2021-02-25T13:11:01
#
#-------------------------------------------------

QT       += core gui sql
RC_FILE +=app.rc
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = notebook
TEMPLATE = app
CONFIG +=c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    textshow.cpp \
    ImageDelegate.cpp

HEADERS  += mainwindow.h \
    textshow.h \
    ImageDelegate.h

FORMS    += mainwindow.ui

RESOURCES +=

OTHER_FILES += \
    tubiao.ico \
    app.rc
