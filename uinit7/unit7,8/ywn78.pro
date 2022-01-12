#-------------------------------------------------
#
# Project created by QtCreator 2021-11-03T07:23:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ywn78
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    edge.cpp \
    cy.cpp


HEADERS  += mainwindow.h \
    cy.h \
    edge.h

FORMS    += mainwindow.ui

RESOURCES += \
    myimages.qrc \
    translator.qrc


RC_ICONS = myico1.ico

TRANSLATIONS  +=  resources/tr_zh.ts  \
        resources/tr_en.ts
