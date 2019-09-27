TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        compte.cpp \
        compteepargne.cpp \
        comptepayant.cpp \
        main.cpp \
        menuprincipal.cpp

HEADERS += \
    compte.h \
    compteepargne.h \
    comptepayant.h \
    menuprincipal.h

DISTFILES += \
    menuCompteDepot \
    menuCompteEpargne \
    menuPrincipal.txt
