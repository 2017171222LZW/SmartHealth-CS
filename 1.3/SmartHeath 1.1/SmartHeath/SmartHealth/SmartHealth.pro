#-------------------------------------------------
#
# Project created by QtCreator 2020-07-18T11:34:29
#
#-------------------------------------------------

QT       += core gui network
CONFIG   += C++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartHealth
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    registerwindow.cpp \
    functionwindow.cpp \
    userverify.cpp \
    passwordwindow.cpp \
    customer.cpp \
    doctorwindow.cpp \
    locallogin.cpp \
    doctor.cpp \
    displaywidget.cpp \
    jsondata.cpp \
    smarthealthprotocol.cpp

HEADERS  += loginwindow.h \
    registerwindow.h \
    functionwindow.h \
    userverify.h \
    passwordwindow.h \
    customer.h \
    doctorwindow.h \
    locallogin.h \
    doctor.h \
    displaywidget.h \
    jsondata.h \
    smarthealthprotocol.h

FORMS    += loginwindow.ui \
    registerwindow.ui \
    functionwindow.ui \
    passwordwindow.ui \
    doctorwindow.ui

RESOURCES += \
    src.qrc

DISTFILES +=
