#-------------------------------------------------
#
# Project created by QtCreator 2018-07-27T21:03:30
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = module-ReadImageData
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    DemoMainWindow.cpp \
    module_loadingstatus.cpp \
    module_TaskInformation.cpp \
    module_datainput.cpp \
    customglwidget.cpp

HEADERS += \
    DemoMainWindow.h \
    module_loadingstatus.h \
    module_TaskInformation.h \
    module_datainput.h \
    customglwidget.h

FORMS += \
    DemoMainWindow.ui \
    module_loadingstatus.ui \
    module_TaskInformation.ui \
    module_datainput.ui

RESOURCES += \
    resource.qrc

LIBS += -lopengl32

#-------------------------------------------------
# OpenCV Files
#-------------------------------------------------
INCLUDEPATH += E:\opencv\opencv-3.3.0\include

CONFIG(debug,debug|release){
    LIBS += -L$$(OPENCV3.3.0_DLL_DIR)\Debug \
            -lopencv_world330d
}

CONFIG(release,debug|release){
    LIBS += -L$$(OPENCV3.3.0_DLL_DIR)\Release \
            -lopencv_world330
}
