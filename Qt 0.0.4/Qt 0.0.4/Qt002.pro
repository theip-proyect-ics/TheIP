#-------------------------------------------------
#
# Project created by QtCreator 2019-05-02T11:52:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt002
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

CONFIG += c++11

SOURCES += \
    GeneratedFiles/Debug/moc_crear_tutoria.cpp \
    GeneratedFiles/Debug/moc_eliminar_alumno.cpp \
    GeneratedFiles/Debug/moc_eliminar_grado.cpp \
    GeneratedFiles/Debug/moc_eliminar_profesor.cpp \
    GeneratedFiles/Debug/moc_eliminar_tutoria.cpp \
    GeneratedFiles/Debug/moc_gestionar_alumnos.cpp \
    GeneratedFiles/Debug/moc_gestionar_grados.cpp \
    GeneratedFiles/Debug/moc_gestionar_profesores.cpp \
    GeneratedFiles/Debug/moc_insertar_alumno.cpp \
    GeneratedFiles/Debug/moc_insertar_grado.cpp \
    GeneratedFiles/Debug/moc_insertar_profesor.cpp \
    GeneratedFiles/Debug/moc_mainwindow.cpp \
    GeneratedFiles/Debug/moc_menu_principal.cpp \
    GeneratedFiles/Debug/moc_modificar_alumno.cpp \
    GeneratedFiles/Debug/moc_modificar_profesor.cpp \
    GeneratedFiles/Debug/moc_modificar_tutoria.cpp \
    GeneratedFiles/Debug/moc_parrilla_de_presentaciones.cpp \
    GeneratedFiles/Debug/moc_tutorias.cpp \
    GeneratedFiles/Debug/moc_tutorias_alumno.cpp \
    GeneratedFiles/Debug/moc_tutorias_profesor.cpp \
    GeneratedFiles/qrc_mainwindow.cpp \
    crear_tutoria.cpp \
    eliminar_alumno.cpp \
    eliminar_grado.cpp \
    eliminar_profesor.cpp \
    eliminar_tutoria.cpp \
    generar_parrilla.cpp \
    gestionar_grados.cpp \
    insertar_alumno.cpp \
    insertar_grado.cpp \
    insertar_profesor.cpp \
        main.cpp \
        mainwindow.cpp \
    menu_principal.cpp \
    gestionar_alumnos.cpp \
    gestionar_profesores.cpp \
    importar_bd.cpp \
    modificar_alumno.cpp \
    modificar_profesor.cpp \
    modificar_tutoria.cpp \
    tutorias.cpp

HEADERS += \
    GeneratedFiles/ui_crear_tutoria.h \
    GeneratedFiles/ui_eliminar_alumno.h \
    GeneratedFiles/ui_eliminar_grado.h \
    GeneratedFiles/ui_eliminar_profesor.h \
    GeneratedFiles/ui_eliminar_tutoria.h \
    GeneratedFiles/ui_generar_parrilla.h \
    GeneratedFiles/ui_gestionar_alumnos.h \
    GeneratedFiles/ui_gestionar_grados.h \
    GeneratedFiles/ui_gestionar_profesores.h \
    GeneratedFiles/ui_insertar_alumno.h \
    GeneratedFiles/ui_insertar_grado.h \
    GeneratedFiles/ui_insertar_profesor.h \
    GeneratedFiles/ui_mainwindow.h \
    GeneratedFiles/ui_menu_principal.h \
    GeneratedFiles/ui_modificar_alumno.h \
    GeneratedFiles/ui_modificar_profesor.h \
    GeneratedFiles/ui_modificar_tutoria.h \
    GeneratedFiles/ui_parrilla_de_presentaciones.h \
    GeneratedFiles/ui_tutorias.h \
    crear_tutoria.h \
    eliminar_alumno.h \
    eliminar_grado.h \
    eliminar_profesor.h \
    eliminar_tutoria.h \
    generar_parrilla.h \
    gestionar_grados.h \
    insertar_alumno.h \
    insertar_grado.h \
    insertar_profesor.h \
        mainwindow.h \
    menu_principal.h \
    gestionar_alumnos.h \
    gestionar_profesores.h \
    importar_bd.h \
    modificar_alumno.h \
    modificar_profesor.h \
    modificar_tutoria.h \
    parrilla_de_presentaciones.h \
    tutorias.h

FORMS += \
    buscar_parrilla.ui \
    crear_tutoria.ui \
    eliminar_alumno.ui \
    eliminar_grado.ui \
    eliminar_profesor.ui \
    eliminar_tutoria.ui \
    generar_parrilla.ui \
    gestionar_grados.ui \
    insertar_alumno.ui \
    insertar_grado.ui \
    insertar_profesor.ui \
        mainwindow.ui \
    menu_principal.ui \
    gestionar_alumnos.ui \
    gestionar_profesores.ui \
    importar_bd.ui \
    modificar_alumno.ui \
    modificar_profesor.ui \
    modificar_tutoria.ui \
    parrilla_de_presentaciones.ui \
    tutorias.ui \
    tutorias_alumno.ui \
    tutorias_profesor.ui \
    ver_parrilla.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
