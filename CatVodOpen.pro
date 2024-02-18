QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    data/config.cpp \
    main.cpp \
    ui/mainwindow.cpp \
    ui/pages/sp.cpp \
    ui/widgets/bar/btn.cpp \
    ui/widgets/fh.cpp \
    ui/widgets/home.cpp \
    ui/widgets/input.cpp \
    ui/widgets/live.cpp \
    ui/widgets/ss.cpp \
    ui/widgets/sz.cpp \
    util/screenutil.cpp \
    util/theme.cpp

HEADERS += \
    data/config.h \
    ui/mainwindow.h \
    ui/pages/sp.h \
    ui/widgets/bar/btn.h \
    ui/widgets/fh.h \
    ui/widgets/home.h \
    ui/widgets/input.h \
    ui/widgets/live.h \
    ui/widgets/ss.h \
    ui/widgets/sz.h \
    util/screenutil.h \
    util/theme.h

FORMS += \
    ui/mainwindow.ui \
    ui/pages/sp.ui \
    ui/widgets/fh.ui \
    ui/widgets/home.ui \
    ui/widgets/input.ui \
    ui/widgets/live.ui \
    ui/widgets/ss.ui \
    ui/widgets/sz.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res/res.qrc
