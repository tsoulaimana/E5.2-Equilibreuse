/****************************************************************************
** Meta object code from reading C++ file 'equilibreuse.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TD3_CommandeMoteur/equilibreuse.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equilibreuse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSEquilibreuseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEquilibreuseENDCLASS = QtMocHelpers::stringData(
    "Equilibreuse",
    "onCapot_EtatCapotChange",
    "",
    "_etat",
    "on_pushButton_Lancer_clicked",
    "on_pushButton_Arreter_clicked",
    "on_dial_ConsigneVitesse_valueChanged",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEquilibreuseENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[29];
    char stringdata5[30];
    char stringdata6[37];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEquilibreuseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEquilibreuseENDCLASS_t qt_meta_stringdata_CLASSEquilibreuseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "Equilibreuse"
        QT_MOC_LITERAL(13, 23),  // "onCapot_EtatCapotChange"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "_etat"
        QT_MOC_LITERAL(44, 28),  // "on_pushButton_Lancer_clicked"
        QT_MOC_LITERAL(73, 29),  // "on_pushButton_Arreter_clicked"
        QT_MOC_LITERAL(103, 36),  // "on_dial_ConsigneVitesse_value..."
        QT_MOC_LITERAL(140, 5)   // "value"
    },
    "Equilibreuse",
    "onCapot_EtatCapotChange",
    "",
    "_etat",
    "on_pushButton_Lancer_clicked",
    "on_pushButton_Arreter_clicked",
    "on_dial_ConsigneVitesse_valueChanged",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEquilibreuseENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       4,    0,   41,    2, 0x08,    3 /* Private */,
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    1,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject Equilibreuse::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSEquilibreuseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEquilibreuseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEquilibreuseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Equilibreuse, std::true_type>,
        // method 'onCapot_EtatCapotChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_pushButton_Lancer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Arreter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dial_ConsigneVitesse_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Equilibreuse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Equilibreuse *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCapot_EtatCapotChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_pushButton_Lancer_clicked(); break;
        case 2: _t->on_pushButton_Arreter_clicked(); break;
        case 3: _t->on_dial_ConsigneVitesse_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Equilibreuse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Equilibreuse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEquilibreuseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Equilibreuse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
