QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accessorieswindow.cpp \
    clotheswindow.cpp \
    main.cpp \
    loginwindow.cpp \
    mainwindow.cpp \
    shoes2window.cpp \
    shoeswindow.cpp \
    user.cpp

HEADERS += \
    accessorieswindow.h \
    clotheswindow.h \
    loginwindow.h \
    mainwindow.h \
    shoes2window.h \
    shoeswindow.h \
    user.h

FORMS += \
    accessorieswindow.ui \
    clotheswindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    shoes2window.ui \
    shoeswindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pics.qrc
