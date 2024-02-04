QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    db.cpp \
    emplois.cpp \
    etudiant.cpp \
    filiers.cpp \
    main.cpp \
    mainwindow.cpp \
    options.cpp \
    prof.cpp \
    registre.cpp \
    regprof.cpp

HEADERS += \
    about.h \
    db.h \
    emplois.h \
    etudiant.h \
    filiers.h \
    mainwindow.h \
    options.h \
    prof.h \
    registre.h \
    regprof.h

FORMS += \
    about.ui \
    emplois.ui \
    etudiant.ui \
    filiers.ui \
    mainwindow.ui \
    options.ui \
    prof.ui \
    registre.ui \
    regprof.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Data_base.db \
    login.txt

RESOURCES += \
    resource.qrc
