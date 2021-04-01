QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    citoyen.cpp \
    connection.cpp \
    crime.cpp \
    main.cpp \
    mainwindow.cpp \
    smtp.cpp \
    widcitoyen.cpp \
    widcrime.cpp

HEADERS += \
    citoyen.h \
    connection.h \
    crime.h \
    mainwindow.h \
    smtp.h \
    widcitoyen.h \
    widcrime.h

FORMS += \
    mainwindow.ui \
    widcitoyen.ui \
    widcrime.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


win32: LIBS += -L$$PWD/../../../../../../Qt/Tools/mingw530_32/opt/lib/ -llibcrypto.dll

INCLUDEPATH += $$PWD/../../../../../../Qt/Tools/mingw530_32/opt/include
DEPENDPATH += $$PWD/../../../../../../Qt/Tools/mingw530_32/opt/include

win32: LIBS += -L$$PWD/../../../../../../Qt/Tools/mingw530_32/opt/lib/ -llibssl.dll

INCLUDEPATH += $$PWD/../../../../../../Qt/Tools/mingw530_32/opt/include
DEPENDPATH += $$PWD/../../../../../../Qt/Tools/mingw530_32/opt/include
