QT       += core gui serialport
QT       += location positioning

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Animation.cpp \
    CSV.cpp \
    Funk.cpp \
    Main.cpp \
    MyGlobalObject.cpp \
    PrimaryFlightData.cpp \
    SerialJames.cpp \
    mainwindow.cpp

HEADERS += \
    Animation.h \
    csv.h \
    funk.h \
    main.h \
    mainwindow.h \
    myglobalobject.h \
    primaryFlightData.h \
    serialJames.h

FORMS += \
    mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qml.qrc

