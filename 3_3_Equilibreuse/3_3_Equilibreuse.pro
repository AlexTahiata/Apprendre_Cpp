TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        codeur.cpp \
        equilibreuse.cpp \
        main.cpp \
        microdacqlite.cpp \
        moteur.cpp

HEADERS += \
    codeur.h \
    equilibreuse.h \
    microdacqlite.h \
    moteur.h
