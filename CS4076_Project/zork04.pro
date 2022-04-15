QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Command.cpp \
    CommandWords.cpp \
    Dialogues.cpp \
    Parser.cpp \
    Room.cpp \
    ZorkUL.cpp \
    animationGif.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    sceneimg.cpp

HEADERS += \
    Command.h \
    CommandWords.h \
    Dialogues.h \
    Parser.h \
    Room.h \
    ZorkUL.h \
    animationGif.h \
    item.h \
    mainwindow.h \
    sceneimg.h

FORMS += \
    mainwindow.ui

QMAKE_CXXFLAGS += -std=gnu++14


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    map (1).png
