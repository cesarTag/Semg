/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appSignals/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_botonCargar_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "openOctave"
QT_MOC_LITERAL(4, 46, 6), // "opcion"
QT_MOC_LITERAL(5, 53, 7), // "grafica"
QT_MOC_LITERAL(6, 61, 12), // "QCustomPlot*"
QT_MOC_LITERAL(7, 74, 7), // "grafico"
QT_MOC_LITERAL(8, 82, 15), // "QVector<double>"
QT_MOC_LITERAL(9, 98, 1), // "x"
QT_MOC_LITERAL(10, 100, 1), // "y"
QT_MOC_LITERAL(11, 102, 8), // "habilita"
QT_MOC_LITERAL(12, 111, 4), // "leer"
QT_MOC_LITERAL(13, 116, 6), // "QFile&"
QT_MOC_LITERAL(14, 123, 3), // "fin"
QT_MOC_LITERAL(15, 127, 11), // "QList<Pto>&"
QT_MOC_LITERAL(16, 139, 5), // "lista"
QT_MOC_LITERAL(17, 145, 24), // "on_botonGraficar_clicked"
QT_MOC_LITERAL(18, 170, 9), // "showState"
QT_MOC_LITERAL(19, 180, 10), // "changeType"
QT_MOC_LITERAL(20, 191, 1), // "q"
QT_MOC_LITERAL(21, 193, 16), // "QVector<double>&"
QT_MOC_LITERAL(22, 210, 6), // "vector"
QT_MOC_LITERAL(23, 217, 4) // "size"

    },
    "MainWindow\0on_botonCargar_clicked\0\0"
    "openOctave\0opcion\0grafica\0QCustomPlot*\0"
    "grafico\0QVector<double>\0x\0y\0habilita\0"
    "leer\0QFile&\0fin\0QList<Pto>&\0lista\0"
    "on_botonGraficar_clicked\0showState\0"
    "changeType\0q\0QVector<double>&\0vector\0"
    "size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    3,   58,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    2,   66,    2, 0x08 /* Private */,
      17,    0,   71,    2, 0x08 /* Private */,
      18,    0,   72,    2, 0x08 /* Private */,
      19,    3,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 8,    7,    9,   10,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 21, QMetaType::Int,   20,   22,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_botonCargar_clicked(); break;
        case 1: _t->openOctave((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->grafica((*reinterpret_cast< QCustomPlot*(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3]))); break;
        case 3: _t->habilita(); break;
        case 4: { int _r = _t->leer((*reinterpret_cast< QFile(*)>(_a[1])),(*reinterpret_cast< QList<Pto>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->on_botonGraficar_clicked(); break;
        case 6: _t->showState(); break;
        case 7: _t->changeType((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCustomPlot* >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
