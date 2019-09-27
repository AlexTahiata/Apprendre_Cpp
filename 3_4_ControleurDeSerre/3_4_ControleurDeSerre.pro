TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        controleurdeserre.cpp \
        main.cpp \
        rtc_ds3231.cpp \
        zonearrosage.cpp

HEADERS += \
    controleurdeserre.h \
    rtc_ds3231.h \
    zonearrosage.h
