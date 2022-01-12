QT += core
QT -= gui
QT += sql
CONFIG += c++11

TARGET = untitled3
CONFIG += console
CONFIG -= app_bundle

#HEADERS += $$PWD/qsql_mysql_p.h
#SOURCES += $$PWD/qsql_mysql.cpp $$PWD/main.cpp

QMAKE_USE += mysql

OTHER_FILES += mysql.json

PLUGIN_CLASS_NAME = QMYSQLDriverPlugin

win32:LIBS += -L $$quote(C:/Program Files/MySQL/MySQL Server 5.7/lib) -llibmysql

INCLUDEPATH += $$quote(C:/Program Files/MySQL/MySQL Server 5.7/include)

DEPENDPATH += $$quote(C:/Program Files/MySQL/MySQL Server 5.7/include)
include(../qsqldriverbase.pri)




TEMPLATE = app

SOURCES += main.cpp
