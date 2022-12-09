/****************************************************************************
** Meta object code from reading C++ file 'window-basic-settings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../obs-studio-27.2/UI/window-basic-settings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-settings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SilentUpdateCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateCheckBox_t qt_meta_stringdata_SilentUpdateCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SilentUpdateCheckBox"
QT_MOC_LITERAL(1, 21, 18), // "setCheckedSilently"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7) // "checked"

    },
    "SilentUpdateCheckBox\0setCheckedSilently\0"
    "\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateCheckBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SilentUpdateCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_SilentUpdateCheckBox.data,
    qt_meta_data_SilentUpdateCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SilentUpdateSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateSpinBox_t qt_meta_stringdata_SilentUpdateSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SilentUpdateSpinBox"
QT_MOC_LITERAL(1, 20, 16), // "setValueSilently"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "val"

    },
    "SilentUpdateSpinBox\0setValueSilently\0"
    "\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SilentUpdateSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValueSilently((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SilentUpdateSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SilentUpdateSpinBox.data,
    qt_meta_data_SilentUpdateSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SilentUpdateSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SilentUpdateSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OBSBasicSettings_t {
    QByteArrayData data[94];
    char stringdata0[1970];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicSettings_t qt_meta_stringdata_OBSBasicSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OBSBasicSettings"
QT_MOC_LITERAL(1, 17, 16), // "UpdateServerList"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "UpdateKeyLink"
QT_MOC_LITERAL(4, 49, 21), // "UpdateVodTrackSetting"
QT_MOC_LITERAL(5, 71, 28), // "UpdateServiceRecommendations"
QT_MOC_LITERAL(6, 100, 30), // "RecreateOutputResolutionWidget"
QT_MOC_LITERAL(7, 131, 18), // "UpdateResFPSLimits"
QT_MOC_LITERAL(8, 150, 18), // "UpdateMoreInfoLink"
QT_MOC_LITERAL(9, 169, 21), // "DisplayEnforceWarning"
QT_MOC_LITERAL(10, 191, 7), // "checked"
QT_MOC_LITERAL(11, 199, 15), // "on_show_clicked"
QT_MOC_LITERAL(12, 215, 21), // "on_authPwShow_clicked"
QT_MOC_LITERAL(13, 237, 25), // "on_connectAccount_clicked"
QT_MOC_LITERAL(14, 263, 28), // "on_disconnectAccount_clicked"
QT_MOC_LITERAL(15, 292, 23), // "on_useStreamKey_clicked"
QT_MOC_LITERAL(16, 316, 18), // "on_useAuth_toggled"
QT_MOC_LITERAL(17, 335, 28), // "on_hotkeyFilterReset_clicked"
QT_MOC_LITERAL(18, 364, 33), // "on_hotkeyFilterSearch_textCha..."
QT_MOC_LITERAL(19, 398, 4), // "text"
QT_MOC_LITERAL(20, 403, 31), // "on_hotkeyFilterInput_KeyChanged"
QT_MOC_LITERAL(21, 435, 21), // "obs_key_combination_t"
QT_MOC_LITERAL(22, 457, 5), // "combo"
QT_MOC_LITERAL(23, 463, 18), // "on_theme_activated"
QT_MOC_LITERAL(24, 482, 3), // "idx"
QT_MOC_LITERAL(25, 486, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(26, 521, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(27, 542, 16), // "QAbstractButton*"
QT_MOC_LITERAL(28, 559, 6), // "button"
QT_MOC_LITERAL(29, 566, 30), // "on_service_currentIndexChanged"
QT_MOC_LITERAL(30, 597, 29), // "on_simpleOutputBrowse_clicked"
QT_MOC_LITERAL(31, 627, 30), // "on_advOutRecPathBrowse_clicked"
QT_MOC_LITERAL(32, 658, 29), // "on_advOutFFPathBrowse_clicked"
QT_MOC_LITERAL(33, 688, 36), // "on_advOutEncoder_currentIndex..."
QT_MOC_LITERAL(34, 725, 39), // "on_advOutRecEncoder_currentIn..."
QT_MOC_LITERAL(35, 765, 36), // "on_advOutFFIgnoreCompat_state..."
QT_MOC_LITERAL(36, 802, 5), // "state"
QT_MOC_LITERAL(37, 808, 37), // "on_advOutFFFormat_currentInde..."
QT_MOC_LITERAL(38, 846, 39), // "on_advOutFFAEncoder_currentIn..."
QT_MOC_LITERAL(39, 886, 39), // "on_advOutFFVEncoder_currentIn..."
QT_MOC_LITERAL(40, 926, 35), // "on_advOutFFType_currentIndexC..."
QT_MOC_LITERAL(41, 962, 34), // "on_colorFormat_currentIndexCh..."
QT_MOC_LITERAL(42, 997, 32), // "on_filenameFormatting_textEdited"
QT_MOC_LITERAL(43, 1030, 35), // "on_outputResolution_editTextC..."
QT_MOC_LITERAL(44, 1066, 33), // "on_baseResolution_editTextCha..."
QT_MOC_LITERAL(45, 1100, 26), // "on_disableOSXVSync_clicked"
QT_MOC_LITERAL(46, 1127, 14), // "GeneralChanged"
QT_MOC_LITERAL(47, 1142, 20), // "HideOBSWindowWarning"
QT_MOC_LITERAL(48, 1163, 12), // "AudioChanged"
QT_MOC_LITERAL(49, 1176, 19), // "AudioChangedRestart"
QT_MOC_LITERAL(50, 1196, 18), // "ReloadAudioSources"
QT_MOC_LITERAL(51, 1215, 15), // "SurroundWarning"
QT_MOC_LITERAL(52, 1231, 20), // "SpeakerLayoutChanged"
QT_MOC_LITERAL(53, 1252, 14), // "OutputsChanged"
QT_MOC_LITERAL(54, 1267, 14), // "Stream1Changed"
QT_MOC_LITERAL(55, 1282, 12), // "VideoChanged"
QT_MOC_LITERAL(56, 1295, 22), // "VideoChangedResolution"
QT_MOC_LITERAL(57, 1318, 19), // "VideoChangedRestart"
QT_MOC_LITERAL(58, 1338, 14), // "HotkeysChanged"
QT_MOC_LITERAL(59, 1353, 20), // "ScanDuplicateHotkeys"
QT_MOC_LITERAL(60, 1374, 12), // "QFormLayout*"
QT_MOC_LITERAL(61, 1387, 6), // "layout"
QT_MOC_LITERAL(62, 1394, 13), // "ReloadHotkeys"
QT_MOC_LITERAL(63, 1408, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(64, 1422, 9), // "ignoreKey"
QT_MOC_LITERAL(65, 1432, 15), // "AdvancedChanged"
QT_MOC_LITERAL(66, 1448, 22), // "AdvancedChangedRestart"
QT_MOC_LITERAL(67, 1471, 25), // "UpdateStreamDelayEstimate"
QT_MOC_LITERAL(68, 1497, 37), // "UpdateAutomaticReplayBufferCh..."
QT_MOC_LITERAL(69, 1535, 22), // "AdvOutRecCheckWarnings"
QT_MOC_LITERAL(70, 1558, 29), // "SimpleRecordingQualityChanged"
QT_MOC_LITERAL(71, 1588, 29), // "SimpleRecordingEncoderChanged"
QT_MOC_LITERAL(72, 1618, 37), // "SimpleRecordingQualityLossles..."
QT_MOC_LITERAL(73, 1656, 25), // "SimpleReplayBufferChanged"
QT_MOC_LITERAL(74, 1682, 22), // "AdvReplayBufferChanged"
QT_MOC_LITERAL(75, 1705, 29), // "SimpleStreamingEncoderChanged"
QT_MOC_LITERAL(76, 1735, 16), // "SpawnTempService"
QT_MOC_LITERAL(77, 1752, 10), // "OBSService"
QT_MOC_LITERAL(78, 1763, 14), // "SetGeneralIcon"
QT_MOC_LITERAL(79, 1778, 4), // "icon"
QT_MOC_LITERAL(80, 1783, 13), // "SetStreamIcon"
QT_MOC_LITERAL(81, 1797, 13), // "SetOutputIcon"
QT_MOC_LITERAL(82, 1811, 12), // "SetAudioIcon"
QT_MOC_LITERAL(83, 1824, 12), // "SetVideoIcon"
QT_MOC_LITERAL(84, 1837, 14), // "SetHotkeysIcon"
QT_MOC_LITERAL(85, 1852, 15), // "SetAdvancedIcon"
QT_MOC_LITERAL(86, 1868, 22), // "UseStreamKeyAdvClicked"
QT_MOC_LITERAL(87, 1891, 11), // "generalIcon"
QT_MOC_LITERAL(88, 1903, 10), // "streamIcon"
QT_MOC_LITERAL(89, 1914, 10), // "outputIcon"
QT_MOC_LITERAL(90, 1925, 9), // "audioIcon"
QT_MOC_LITERAL(91, 1935, 9), // "videoIcon"
QT_MOC_LITERAL(92, 1945, 11), // "hotkeysIcon"
QT_MOC_LITERAL(93, 1957, 12) // "advancedIcon"

    },
    "OBSBasicSettings\0UpdateServerList\0\0"
    "UpdateKeyLink\0UpdateVodTrackSetting\0"
    "UpdateServiceRecommendations\0"
    "RecreateOutputResolutionWidget\0"
    "UpdateResFPSLimits\0UpdateMoreInfoLink\0"
    "DisplayEnforceWarning\0checked\0"
    "on_show_clicked\0on_authPwShow_clicked\0"
    "on_connectAccount_clicked\0"
    "on_disconnectAccount_clicked\0"
    "on_useStreamKey_clicked\0on_useAuth_toggled\0"
    "on_hotkeyFilterReset_clicked\0"
    "on_hotkeyFilterSearch_textChanged\0"
    "text\0on_hotkeyFilterInput_KeyChanged\0"
    "obs_key_combination_t\0combo\0"
    "on_theme_activated\0idx\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_service_currentIndexChanged\0"
    "on_simpleOutputBrowse_clicked\0"
    "on_advOutRecPathBrowse_clicked\0"
    "on_advOutFFPathBrowse_clicked\0"
    "on_advOutEncoder_currentIndexChanged\0"
    "on_advOutRecEncoder_currentIndexChanged\0"
    "on_advOutFFIgnoreCompat_stateChanged\0"
    "state\0on_advOutFFFormat_currentIndexChanged\0"
    "on_advOutFFAEncoder_currentIndexChanged\0"
    "on_advOutFFVEncoder_currentIndexChanged\0"
    "on_advOutFFType_currentIndexChanged\0"
    "on_colorFormat_currentIndexChanged\0"
    "on_filenameFormatting_textEdited\0"
    "on_outputResolution_editTextChanged\0"
    "on_baseResolution_editTextChanged\0"
    "on_disableOSXVSync_clicked\0GeneralChanged\0"
    "HideOBSWindowWarning\0AudioChanged\0"
    "AudioChangedRestart\0ReloadAudioSources\0"
    "SurroundWarning\0SpeakerLayoutChanged\0"
    "OutputsChanged\0Stream1Changed\0"
    "VideoChanged\0VideoChangedResolution\0"
    "VideoChangedRestart\0HotkeysChanged\0"
    "ScanDuplicateHotkeys\0QFormLayout*\0"
    "layout\0ReloadHotkeys\0obs_hotkey_id\0"
    "ignoreKey\0AdvancedChanged\0"
    "AdvancedChangedRestart\0UpdateStreamDelayEstimate\0"
    "UpdateAutomaticReplayBufferCheckboxes\0"
    "AdvOutRecCheckWarnings\0"
    "SimpleRecordingQualityChanged\0"
    "SimpleRecordingEncoderChanged\0"
    "SimpleRecordingQualityLosslessWarning\0"
    "SimpleReplayBufferChanged\0"
    "AdvReplayBufferChanged\0"
    "SimpleStreamingEncoderChanged\0"
    "SpawnTempService\0OBSService\0SetGeneralIcon\0"
    "icon\0SetStreamIcon\0SetOutputIcon\0"
    "SetAudioIcon\0SetVideoIcon\0SetHotkeysIcon\0"
    "SetAdvancedIcon\0UseStreamKeyAdvClicked\0"
    "generalIcon\0streamIcon\0outputIcon\0"
    "audioIcon\0videoIcon\0hotkeysIcon\0"
    "advancedIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      72,   14, // methods
       7,  506, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  374,    2, 0x08 /* Private */,
       3,    0,  375,    2, 0x08 /* Private */,
       4,    0,  376,    2, 0x08 /* Private */,
       5,    0,  377,    2, 0x08 /* Private */,
       6,    0,  378,    2, 0x08 /* Private */,
       7,    0,  379,    2, 0x08 /* Private */,
       8,    0,  380,    2, 0x08 /* Private */,
       9,    1,  381,    2, 0x08 /* Private */,
      11,    0,  384,    2, 0x08 /* Private */,
      12,    0,  385,    2, 0x08 /* Private */,
      13,    0,  386,    2, 0x08 /* Private */,
      14,    0,  387,    2, 0x08 /* Private */,
      15,    0,  388,    2, 0x08 /* Private */,
      16,    0,  389,    2, 0x08 /* Private */,
      17,    0,  390,    2, 0x08 /* Private */,
      18,    1,  391,    2, 0x08 /* Private */,
      20,    1,  394,    2, 0x08 /* Private */,
      23,    1,  397,    2, 0x08 /* Private */,
      25,    0,  400,    2, 0x08 /* Private */,
      26,    1,  401,    2, 0x08 /* Private */,
      29,    1,  404,    2, 0x08 /* Private */,
      30,    0,  407,    2, 0x08 /* Private */,
      31,    0,  408,    2, 0x08 /* Private */,
      32,    0,  409,    2, 0x08 /* Private */,
      33,    1,  410,    2, 0x08 /* Private */,
      34,    1,  413,    2, 0x08 /* Private */,
      35,    1,  416,    2, 0x08 /* Private */,
      37,    1,  419,    2, 0x08 /* Private */,
      38,    1,  422,    2, 0x08 /* Private */,
      39,    1,  425,    2, 0x08 /* Private */,
      40,    1,  428,    2, 0x08 /* Private */,
      41,    1,  431,    2, 0x08 /* Private */,
      42,    1,  434,    2, 0x08 /* Private */,
      43,    1,  437,    2, 0x08 /* Private */,
      44,    1,  440,    2, 0x08 /* Private */,
      45,    0,  443,    2, 0x08 /* Private */,
      46,    0,  444,    2, 0x08 /* Private */,
      47,    1,  445,    2, 0x08 /* Private */,
      48,    0,  448,    2, 0x08 /* Private */,
      49,    0,  449,    2, 0x08 /* Private */,
      50,    0,  450,    2, 0x08 /* Private */,
      51,    1,  451,    2, 0x08 /* Private */,
      52,    1,  454,    2, 0x08 /* Private */,
      53,    0,  457,    2, 0x08 /* Private */,
      54,    0,  458,    2, 0x08 /* Private */,
      55,    0,  459,    2, 0x08 /* Private */,
      56,    0,  460,    2, 0x08 /* Private */,
      57,    0,  461,    2, 0x08 /* Private */,
      58,    0,  462,    2, 0x08 /* Private */,
      59,    1,  463,    2, 0x08 /* Private */,
      62,    1,  466,    2, 0x08 /* Private */,
      62,    0,  469,    2, 0x28 /* Private | MethodCloned */,
      65,    0,  470,    2, 0x08 /* Private */,
      66,    0,  471,    2, 0x08 /* Private */,
      67,    0,  472,    2, 0x08 /* Private */,
      68,    0,  473,    2, 0x08 /* Private */,
      69,    0,  474,    2, 0x08 /* Private */,
      70,    0,  475,    2, 0x08 /* Private */,
      71,    0,  476,    2, 0x08 /* Private */,
      72,    1,  477,    2, 0x08 /* Private */,
      73,    0,  480,    2, 0x08 /* Private */,
      74,    0,  481,    2, 0x08 /* Private */,
      75,    0,  482,    2, 0x08 /* Private */,
      76,    0,  483,    2, 0x08 /* Private */,
      78,    1,  484,    2, 0x08 /* Private */,
      80,    1,  487,    2, 0x08 /* Private */,
      81,    1,  490,    2, 0x08 /* Private */,
      82,    1,  493,    2, 0x08 /* Private */,
      83,    1,  496,    2, 0x08 /* Private */,
      84,    1,  499,    2, 0x08 /* Private */,
      85,    1,  502,    2, 0x08 /* Private */,
      86,    0,  505,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 60,   61,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 77,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void, QMetaType::QIcon,   79,
    QMetaType::Void,

 // properties: name, type, flags
      87, QMetaType::QIcon, 0x00095003,
      88, QMetaType::QIcon, 0x00095003,
      89, QMetaType::QIcon, 0x00095003,
      90, QMetaType::QIcon, 0x00095003,
      91, QMetaType::QIcon, 0x00095003,
      92, QMetaType::QIcon, 0x00095003,
      93, QMetaType::QIcon, 0x00095003,

       0        // eod
};

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateServerList(); break;
        case 1: _t->UpdateKeyLink(); break;
        case 2: _t->UpdateVodTrackSetting(); break;
        case 3: _t->UpdateServiceRecommendations(); break;
        case 4: _t->RecreateOutputResolutionWidget(); break;
        case 5: _t->UpdateResFPSLimits(); break;
        case 6: _t->UpdateMoreInfoLink(); break;
        case 7: _t->DisplayEnforceWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_show_clicked(); break;
        case 9: _t->on_authPwShow_clicked(); break;
        case 10: _t->on_connectAccount_clicked(); break;
        case 11: _t->on_disconnectAccount_clicked(); break;
        case 12: _t->on_useStreamKey_clicked(); break;
        case 13: _t->on_useAuth_toggled(); break;
        case 14: _t->on_hotkeyFilterReset_clicked(); break;
        case 15: _t->on_hotkeyFilterSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_hotkeyFilterInput_KeyChanged((*reinterpret_cast< obs_key_combination_t(*)>(_a[1]))); break;
        case 17: _t->on_theme_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_listWidget_itemSelectionChanged(); break;
        case 19: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 20: _t->on_service_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->on_simpleOutputBrowse_clicked(); break;
        case 22: _t->on_advOutRecPathBrowse_clicked(); break;
        case 23: _t->on_advOutFFPathBrowse_clicked(); break;
        case 24: _t->on_advOutEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->on_filenameFormatting_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->on_outputResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->on_baseResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->on_disableOSXVSync_clicked(); break;
        case 36: _t->GeneralChanged(); break;
        case 37: _t->HideOBSWindowWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->AudioChanged(); break;
        case 39: _t->AudioChangedRestart(); break;
        case 40: _t->ReloadAudioSources(); break;
        case 41: _t->SurroundWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->SpeakerLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->OutputsChanged(); break;
        case 44: _t->Stream1Changed(); break;
        case 45: _t->VideoChanged(); break;
        case 46: _t->VideoChangedResolution(); break;
        case 47: _t->VideoChangedRestart(); break;
        case 48: _t->HotkeysChanged(); break;
        case 49: { bool _r = _t->ScanDuplicateHotkeys((*reinterpret_cast< QFormLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->ReloadHotkeys((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        case 51: _t->ReloadHotkeys(); break;
        case 52: _t->AdvancedChanged(); break;
        case 53: _t->AdvancedChangedRestart(); break;
        case 54: _t->UpdateStreamDelayEstimate(); break;
        case 55: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 56: _t->AdvOutRecCheckWarnings(); break;
        case 57: _t->SimpleRecordingQualityChanged(); break;
        case 58: _t->SimpleRecordingEncoderChanged(); break;
        case 59: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->SimpleReplayBufferChanged(); break;
        case 61: _t->AdvReplayBufferChanged(); break;
        case 62: _t->SimpleStreamingEncoderChanged(); break;
        case 63: { OBSService _r = _t->SpawnTempService();
            if (_a[0]) *reinterpret_cast< OBSService*>(_a[0]) = std::move(_r); }  break;
        case 64: _t->SetGeneralIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 65: _t->SetStreamIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 66: _t->SetOutputIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 67: _t->SetAudioIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 68: _t->SetVideoIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 69: _t->SetHotkeysIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 70: _t->SetAdvancedIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 71: _t->UseStreamKeyAdvClicked(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetGeneralIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetStreamIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetOutputIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetVideoIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetHotkeysIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetAdvancedIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetGeneralIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetStreamIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetAudioIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetVideoIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetHotkeysIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetAdvancedIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject OBSBasicSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OBSBasicSettings.data,
    qt_meta_data_OBSBasicSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicSettings.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 72)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 72;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 72)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 72;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
