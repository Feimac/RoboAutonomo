/****************************************************************************
** Meta object code from reading C++ file 'multires_image_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/mapviz/multires_image/include/multires_image/multires_image_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multires_image_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mapviz_plugins__MultiresImagePlugin_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mapviz_plugins__MultiresImagePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mapviz_plugins__MultiresImagePlugin_t qt_meta_stringdata_mapviz_plugins__MultiresImagePlugin = {
    {
QT_MOC_LITERAL(0, 0, 35), // "mapviz_plugins::MultiresImage..."
QT_MOC_LITERAL(1, 36, 10), // "SelectFile"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 19), // "AcceptConfiguration"
QT_MOC_LITERAL(4, 68, 10), // "SetXOffset"
QT_MOC_LITERAL(5, 79, 11), // "long_offset"
QT_MOC_LITERAL(6, 91, 10), // "SetYOffset"
QT_MOC_LITERAL(7, 102, 15) // "latitude_offset"

    },
    "mapviz_plugins::MultiresImagePlugin\0"
    "SelectFile\0\0AcceptConfiguration\0"
    "SetXOffset\0long_offset\0SetYOffset\0"
    "latitude_offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mapviz_plugins__MultiresImagePlugin[] = {

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
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       6,    1,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void mapviz_plugins::MultiresImagePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiresImagePlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SelectFile(); break;
        case 1: _t->AcceptConfiguration(); break;
        case 2: _t->SetXOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->SetYOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mapviz_plugins::MultiresImagePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<mapviz::MapvizPlugin::staticMetaObject>(),
    qt_meta_stringdata_mapviz_plugins__MultiresImagePlugin.data,
    qt_meta_data_mapviz_plugins__MultiresImagePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mapviz_plugins::MultiresImagePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mapviz_plugins::MultiresImagePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mapviz_plugins__MultiresImagePlugin.stringdata0))
        return static_cast<void*>(this);
    return mapviz::MapvizPlugin::qt_metacast(_clname);
}

int mapviz_plugins::MultiresImagePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mapviz::MapvizPlugin::qt_metacall(_c, _id, _a);
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
