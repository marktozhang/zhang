#-------------------------------------------------
#
# Project created by QtCreator 2020-10-30T09:12:51
#
#-------------------------------------------------

QT       += core gui  printsupport sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
CONFIG += console
LIBS += -lws2_32

TARGET = scSERVER
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    server.cpp \
    client.cpp \
    scdata.cpp \
    checkthread.cpp \
    dtu.cpp

HEADERS  += \
    server.h \
    mainwindow.h \
    scdata.h \
    client.h \
    checkthread.h \
    dtu.h

FORMS    += mainwindow.ui
