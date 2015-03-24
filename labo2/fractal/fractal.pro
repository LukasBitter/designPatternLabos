#-------------------------------------------------
#
# Project created by QtCreator 2015-03-23T13:40:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fractal
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    component.cpp \
    leaf.cpp \
    composite.cpp

HEADERS  += widget.h \
    component.h \
    leaf.h \
    composite.h

FORMS    += widget.ui
