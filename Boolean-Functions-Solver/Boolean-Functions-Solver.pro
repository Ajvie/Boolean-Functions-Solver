QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controlador.cpp \
    FuncionBooleana.cpp \
    Mintermino.cpp \
    Variable.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Controlador.h \
    FuncionBooleana.h \
    Lista.h \
    Mintermino.h \
    Nodo.h \
    Variable.h \
    dllbitacora.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-Boolean-Functions-Solver-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/release/ -lDLLBitacora
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-Boolean-Functions-Solver-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/debug/ -lDLLBitacora
else:unix: LIBS += -L$$PWD/../build-Boolean-Functions-Solver-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/ -lDLLBitacora

INCLUDEPATH += $$PWD/../../DLL/DLLBitacora
DEPENDPATH += $$PWD/../../DLL/DLLBitacora
