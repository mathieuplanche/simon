#-------------------------------------------------
#
# Project created by QtCreator 2014-01-05T14:26:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simon
TEMPLATE = app


SOURCES += main.cpp \
    lib/ui/mainwindow.cpp \
    lib/ui/qspushbutton.cpp \
    lib/ui/getqss.cpp \
    lib/ui/qsiconwidget.cpp \
    qsaudiowidget.cpp \
    lib/ui/qsaudiowidget.cpp

HEADERS  += lib/ui/mainwindow.h \
    lib/ui/qspushbutton.h \
    lib/ui/getqss.h \
    lib/ui/qsiconwidget.h \
    qsaudiowidget.h \
    lib/ui/qsaudiowidget.h
    

RESOURCES += res/simon.qrc \
    res/qss.qrc

OTHER_FILES +=
