QT       += core gui network sql multimedia widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia
TARGET = Client
TEMPLATE = app

SOURCES += main.cpp \
    window.cpp \
    user.cpp \
    connection.cpp \
    task_manager.cpp \
    contact.cpp

HEADERS  += window.h \
    user.h \
    connection.h \
    task_manager.h \
    contact.h \
    ../common_includes/commands.h \
    ../common_includes/std.h

FORMS    += window.ui

RESOURCES += res.qrc
