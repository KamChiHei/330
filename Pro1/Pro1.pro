QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_form.cpp \
    login.cpp \
    main.cpp \
    register_form.cpp \
    user_form.cpp

HEADERS += \
    admin_form.h \
    login.h \
    register_form.h \
    user_form.h

FORMS += \
    admin_form.ui \
    login.ui \
    register_form.ui \
    user_form.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
