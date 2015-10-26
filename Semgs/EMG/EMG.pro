#-------------------------------------------------
#
# Project created by QtCreator 2015-10-14T21:37:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = EMG
TEMPLATE = app


SOURCES += main.cpp\
        emg.cpp \
    qcustomplot.cpp \
    signal.cpp \
    mythread.cpp

HEADERS  += emg.h \
    qcustomplot.h \
    signal.h \
    mythread.h

FORMS    += emg.ui \
    mainwindow.ui
