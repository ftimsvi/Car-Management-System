QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Audi.cpp \
    Car.cpp \
    Centeralnew.cpp \
    ForgetPass.cpp \
    Login.cpp \
    ManagementPage.cpp \
    Mercedes.cpp \
    Porsche.cpp \
    Regester.cpp \
    RequestBox.cpp \
    UserBox.cpp \
    bmw.cpp \
    carinfo.cpp \
    centeralaudi.cpp \
    centeralmercedes.cpp \
    centeralporsche.cpp \
    centeralyear.cpp \
    comments.cpp \
    main.cpp \
    Mainwindow.cpp \
    management.cpp \
    profile.cpp \
    request.cpp \
    test.cpp \
    test2.cpp

HEADERS += \
    Audi.h \
    Car.h \
    Centeralnew.h \
    ForgetPass.h \
    Login.h \
    Mainwindow.h \
    ManagementPage.h \
    Mercedes.h \
    Porsche.h \
    Regester.h \
    RequestBox.h \
    UserBox.h \
    bmw.h \
    carinfo.h \
    centeralaudi.h \
    centeralmercedes.h \
    centeralporsche.h \
    centeralyear.h \
    comments.h \
    management.h \
    profile.h \
    request.h \
    test.h \
    test2.h

FORMS += \
    Centeralnew.ui \
    ForgetPass.ui \
    Login.ui \
    ManagementPage.ui \
    Regester.ui \
    RequestBox.ui \
    UserBox.ui \
    carinfo.ui \
    centeralaudi.ui \
    centeralmercedes.ui \
    centeralporsche.ui \
    centeralyear.ui \
    comments.ui \
    mainwindow.ui \
    management.ui \
    profile.ui \
    request.ui \
    test.ui \
    test2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
