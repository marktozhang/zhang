#-------------------------------------------------
#
# Project created by QtCreator 2020-11-26T15:13:18
#
#-------------------------------------------------

QT   += core gui sql  serialport  network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RemoteSystem
TEMPLATE = app
CONFIG += c++11
LIBS += -lws2_32


SOURCES += main.cpp \
    cnnNT.cpp \
    esp8266.cpp \
    espwidget.cpp \
    login.cpp \
    formasd.cpp \
    mainwindowyui.cpp \
    device_duiyingdelouceng.cpp \
    add_device.cpp \
    unitmanage.cpp \
    floormanage.cpp \
    devicewithunit.cpp \
    manageforrenyuan.cpp \
    addcaozuorenyuan.cpp \
    xiugaipassword.cpp \
    canshuset.cpp \
    showguanyu.cpp \
    scdata.cpp \
    sql.cpp \
    addpeople.cpp \
    serialport.cpp \
    DataBaseConnect.cpp

HEADERS  += \
    cnnNT.h \
    esp8266.h \
    espwidget.h \
    login.h \
    formasd.h \
    mainwindowyui.h \
    device_duiyingdelouceng.h \
    add_device.h \
    unitmanage.h \
    floormanage.h \
    devicewithunit.h \
    manageforrenyuan.h \
    addcaozuorenyuan.h \
    xiugaipassword.h \
    canshuset.h \
    showguanyu.h \
    scdata.h \
    sql.h \
    addpeople.h \
    serialport.h \
    DataBaseConnect.h

FORMS    += \
    esp8266.ui \
    login.ui \
    formasd.ui \
    mainwindowyui.ui \
    device_duiyingdelouceng.ui \
    add_device.ui \
    unitmanage.ui \
    floormanage.ui \
    devicewithunit.ui \
    manageforrenyuan.ui \
    addcaozuorenyuan.ui \
    xiugaipassword.ui \
    canshuset.ui \
    showguanyu.ui \
    addpeople.ui

RESOURCES += \
    resource.qrc

OTHER_FILES +=
