QT       += core gui \
        multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bat.cpp \
    collision.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    map2.cpp \
    map3.cpp \
    menu.cpp \
    physics.cpp \
    player.cpp \
    spiderboss.cpp

HEADERS += \
    Menu.h \
    bat.h \
    collision.h \
    mainwindow.h \
    map.h \
    map2.h \
    map3.h \
    physics.h \
    player.h \
    spiderboss.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Pictures.qrc
