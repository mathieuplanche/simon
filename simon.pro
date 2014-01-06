#-------------------------------------------------
#
# Project created by QtCreator 2014-01-05T14:26:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt
TEMPLATE = app


SOURCES += main.cpp \
    lib/ui/mainwindow.cpp \
    lib/ui/qspushbutton.cpp \
    lib/ui/getqss.cpp

HEADERS  += lib/ui/mainwindow.h \
    lib/ui/qspushbutton.h \
    lib/ui/getqss.h
    

RESOURCES += res/simon.qrc \
    res/qss.qrc

OTHER_FILES += \
    res/qss/qsbutton.qss
