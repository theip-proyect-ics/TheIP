/****************************************************************************
** Meta object code from reading C++ file 'gestionar_alumnos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gestionar_alumnos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestionar_alumnos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gestionar_Alumnos_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gestionar_Alumnos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gestionar_Alumnos_t qt_meta_stringdata_Gestionar_Alumnos = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Gestionar_Alumnos"
QT_MOC_LITERAL(1, 18, 19), // "on_Insertar_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "on_Modificar_clicked"
QT_MOC_LITERAL(4, 60, 19), // "on_Eliminar_clicked"
QT_MOC_LITERAL(5, 80, 19) // "on_Tutorias_clicked"

    },
    "Gestionar_Alumnos\0on_Insertar_clicked\0"
    "\0on_Modificar_clicked\0on_Eliminar_clicked\0"
    "on_Tutorias_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gestionar_Alumnos[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gestionar_Alumnos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gestionar_Alumnos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Insertar_clicked(); break;
        case 1: _t->on_Modificar_clicked(); break;
        case 2: _t->on_Eliminar_clicked(); break;
        case 3: _t->on_Tutorias_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Gestionar_Alumnos::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Gestionar_Alumnos.data,
    qt_meta_data_Gestionar_Alumnos,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gestionar_Alumnos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gestionar_Alumnos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gestionar_Alumnos.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gestionar_Alumnos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
