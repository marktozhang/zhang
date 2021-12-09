#-------------------------------------------------
#
# Project created by QtCreator 2020-11-12T15:32:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
LIBS += -lws2_32
TARGET = CONTROL_ESP8266
TEMPLATE = app


SOURCES += main.cpp\
    cnNETWORK.cpp \
    ShowWindow.cpp

HEADERS  += \
    cnNETWORK.h \
    ShowWindow.h

FORMS    += mainwindow.ui
