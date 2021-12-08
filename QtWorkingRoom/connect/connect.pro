#-------------------------------------------------
#
# Project created by QtCreator 2021-11-17T09:47:42
#
#-------------------------------------------------

QT       += core gui sql axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = connect
TEMPLATE = app


SOURCES += main.cpp\
    DataBaseConnect.cpp \
    ExcelEngine.cpp \
    MainWindow.cpp

HEADERS  += \
    DataBaseConnect.h \
    ExcelEngine.h \
    MainWindow.h

FORMS    += mainwindow.ui
