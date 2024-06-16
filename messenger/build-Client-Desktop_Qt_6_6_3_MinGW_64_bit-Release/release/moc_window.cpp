/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/window.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWindowENDCLASS = QtMocHelpers::stringData(
    "Window",
    "lock",
    "",
    "unlock",
    "on_socket_connected",
    "on_socket_error",
    "on_send_button_clicked",
    "on_login_button_clicked",
    "on_login_signup_clicked",
    "on_signup_login_clicked",
    "on_signup_button_clicked",
    "on_add_button_clicked",
    "on_contact_button_clicked",
    "on_0_clicked",
    "on_1_clicked",
    "on_2_clicked",
    "on_3_clicked",
    "on_4_clicked",
    "on_smile_button_clicked",
    "on_smile_button_2_clicked",
    "on_smile_button_3_clicked",
    "on_smile_button_4_clicked",
    "on_smile_button_5_clicked",
    "on_smile_button_6_clicked",
    "on_smile_button_7_clicked",
    "on_login_true",
    "on_login_false",
    "on_login_duplicate",
    "on_signup_true",
    "on_signup_false",
    "on_receive_message",
    "on_update_log",
    "on_create_log",
    "on_contacts_itemSelectionChanged",
    "on_input_textChanged",
    "on_actionLog_out_triggered",
    "auto_scroll",
    "on_add_line_textChanged",
    "arg1",
    "on_add_contacts",
    "on_contact_online",
    "on_contact_offline",
    "on_someone_disconnected",
    "on_someone_connected",
    "on_delete_contact",
    "ShowContextMenu",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWindowENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[7];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[20];
    char stringdata5[16];
    char stringdata6[23];
    char stringdata7[24];
    char stringdata8[24];
    char stringdata9[24];
    char stringdata10[25];
    char stringdata11[22];
    char stringdata12[26];
    char stringdata13[13];
    char stringdata14[13];
    char stringdata15[13];
    char stringdata16[13];
    char stringdata17[13];
    char stringdata18[24];
    char stringdata19[26];
    char stringdata20[26];
    char stringdata21[26];
    char stringdata22[26];
    char stringdata23[26];
    char stringdata24[26];
    char stringdata25[14];
    char stringdata26[15];
    char stringdata27[19];
    char stringdata28[15];
    char stringdata29[16];
    char stringdata30[19];
    char stringdata31[14];
    char stringdata32[14];
    char stringdata33[33];
    char stringdata34[21];
    char stringdata35[27];
    char stringdata36[12];
    char stringdata37[24];
    char stringdata38[5];
    char stringdata39[16];
    char stringdata40[18];
    char stringdata41[19];
    char stringdata42[24];
    char stringdata43[21];
    char stringdata44[18];
    char stringdata45[16];
    char stringdata46[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWindowENDCLASS_t qt_meta_stringdata_CLASSWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Window"
        QT_MOC_LITERAL(7, 4),  // "lock"
        QT_MOC_LITERAL(12, 0),  // ""
        QT_MOC_LITERAL(13, 6),  // "unlock"
        QT_MOC_LITERAL(20, 19),  // "on_socket_connected"
        QT_MOC_LITERAL(40, 15),  // "on_socket_error"
        QT_MOC_LITERAL(56, 22),  // "on_send_button_clicked"
        QT_MOC_LITERAL(79, 23),  // "on_login_button_clicked"
        QT_MOC_LITERAL(103, 23),  // "on_login_signup_clicked"
        QT_MOC_LITERAL(127, 23),  // "on_signup_login_clicked"
        QT_MOC_LITERAL(151, 24),  // "on_signup_button_clicked"
        QT_MOC_LITERAL(176, 21),  // "on_add_button_clicked"
        QT_MOC_LITERAL(198, 25),  // "on_contact_button_clicked"
        QT_MOC_LITERAL(224, 12),  // "on_0_clicked"
        QT_MOC_LITERAL(237, 12),  // "on_1_clicked"
        QT_MOC_LITERAL(250, 12),  // "on_2_clicked"
        QT_MOC_LITERAL(263, 12),  // "on_3_clicked"
        QT_MOC_LITERAL(276, 12),  // "on_4_clicked"
        QT_MOC_LITERAL(289, 23),  // "on_smile_button_clicked"
        QT_MOC_LITERAL(313, 25),  // "on_smile_button_2_clicked"
        QT_MOC_LITERAL(339, 25),  // "on_smile_button_3_clicked"
        QT_MOC_LITERAL(365, 25),  // "on_smile_button_4_clicked"
        QT_MOC_LITERAL(391, 25),  // "on_smile_button_5_clicked"
        QT_MOC_LITERAL(417, 25),  // "on_smile_button_6_clicked"
        QT_MOC_LITERAL(443, 25),  // "on_smile_button_7_clicked"
        QT_MOC_LITERAL(469, 13),  // "on_login_true"
        QT_MOC_LITERAL(483, 14),  // "on_login_false"
        QT_MOC_LITERAL(498, 18),  // "on_login_duplicate"
        QT_MOC_LITERAL(517, 14),  // "on_signup_true"
        QT_MOC_LITERAL(532, 15),  // "on_signup_false"
        QT_MOC_LITERAL(548, 18),  // "on_receive_message"
        QT_MOC_LITERAL(567, 13),  // "on_update_log"
        QT_MOC_LITERAL(581, 13),  // "on_create_log"
        QT_MOC_LITERAL(595, 32),  // "on_contacts_itemSelectionChanged"
        QT_MOC_LITERAL(628, 20),  // "on_input_textChanged"
        QT_MOC_LITERAL(649, 26),  // "on_actionLog_out_triggered"
        QT_MOC_LITERAL(676, 11),  // "auto_scroll"
        QT_MOC_LITERAL(688, 23),  // "on_add_line_textChanged"
        QT_MOC_LITERAL(712, 4),  // "arg1"
        QT_MOC_LITERAL(717, 15),  // "on_add_contacts"
        QT_MOC_LITERAL(733, 17),  // "on_contact_online"
        QT_MOC_LITERAL(751, 18),  // "on_contact_offline"
        QT_MOC_LITERAL(770, 23),  // "on_someone_disconnected"
        QT_MOC_LITERAL(794, 20),  // "on_someone_connected"
        QT_MOC_LITERAL(815, 17),  // "on_delete_contact"
        QT_MOC_LITERAL(833, 15),  // "ShowContextMenu"
        QT_MOC_LITERAL(849, 3)   // "pos"
    },
    "Window",
    "lock",
    "",
    "unlock",
    "on_socket_connected",
    "on_socket_error",
    "on_send_button_clicked",
    "on_login_button_clicked",
    "on_login_signup_clicked",
    "on_signup_login_clicked",
    "on_signup_button_clicked",
    "on_add_button_clicked",
    "on_contact_button_clicked",
    "on_0_clicked",
    "on_1_clicked",
    "on_2_clicked",
    "on_3_clicked",
    "on_4_clicked",
    "on_smile_button_clicked",
    "on_smile_button_2_clicked",
    "on_smile_button_3_clicked",
    "on_smile_button_4_clicked",
    "on_smile_button_5_clicked",
    "on_smile_button_6_clicked",
    "on_smile_button_7_clicked",
    "on_login_true",
    "on_login_false",
    "on_login_duplicate",
    "on_signup_true",
    "on_signup_false",
    "on_receive_message",
    "on_update_log",
    "on_create_log",
    "on_contacts_itemSelectionChanged",
    "on_input_textChanged",
    "on_actionLog_out_triggered",
    "auto_scroll",
    "on_add_line_textChanged",
    "arg1",
    "on_add_contacts",
    "on_contact_online",
    "on_contact_offline",
    "on_someone_disconnected",
    "on_someone_connected",
    "on_delete_contact",
    "ShowContextMenu",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  272,    2, 0x06,    1 /* Public */,
       3,    0,  273,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  274,    2, 0x08,    3 /* Private */,
       5,    0,  275,    2, 0x08,    4 /* Private */,
       6,    0,  276,    2, 0x08,    5 /* Private */,
       7,    0,  277,    2, 0x08,    6 /* Private */,
       8,    0,  278,    2, 0x08,    7 /* Private */,
       9,    0,  279,    2, 0x08,    8 /* Private */,
      10,    0,  280,    2, 0x08,    9 /* Private */,
      11,    0,  281,    2, 0x08,   10 /* Private */,
      12,    0,  282,    2, 0x08,   11 /* Private */,
      13,    0,  283,    2, 0x08,   12 /* Private */,
      14,    0,  284,    2, 0x08,   13 /* Private */,
      15,    0,  285,    2, 0x08,   14 /* Private */,
      16,    0,  286,    2, 0x08,   15 /* Private */,
      17,    0,  287,    2, 0x08,   16 /* Private */,
      18,    0,  288,    2, 0x08,   17 /* Private */,
      19,    0,  289,    2, 0x08,   18 /* Private */,
      20,    0,  290,    2, 0x08,   19 /* Private */,
      21,    0,  291,    2, 0x08,   20 /* Private */,
      22,    0,  292,    2, 0x08,   21 /* Private */,
      23,    0,  293,    2, 0x08,   22 /* Private */,
      24,    0,  294,    2, 0x08,   23 /* Private */,
      25,    0,  295,    2, 0x08,   24 /* Private */,
      26,    0,  296,    2, 0x08,   25 /* Private */,
      27,    0,  297,    2, 0x08,   26 /* Private */,
      28,    0,  298,    2, 0x08,   27 /* Private */,
      29,    0,  299,    2, 0x08,   28 /* Private */,
      30,    3,  300,    2, 0x08,   29 /* Private */,
      31,    1,  307,    2, 0x08,   33 /* Private */,
      32,    2,  310,    2, 0x08,   35 /* Private */,
      33,    0,  315,    2, 0x08,   38 /* Private */,
      34,    0,  316,    2, 0x08,   39 /* Private */,
      35,    0,  317,    2, 0x08,   40 /* Private */,
      36,    2,  318,    2, 0x08,   41 /* Private */,
      37,    1,  323,    2, 0x08,   44 /* Private */,
      39,    1,  326,    2, 0x08,   46 /* Private */,
      40,    1,  329,    2, 0x08,   48 /* Private */,
      41,    1,  332,    2, 0x08,   50 /* Private */,
      42,    1,  335,    2, 0x08,   52 /* Private */,
      43,    1,  338,    2, 0x08,   54 /* Private */,
      44,    0,  341,    2, 0x08,   56 /* Private */,
      45,    1,  342,    2, 0x08,   57 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   46,

       0        // eod
};

Q_CONSTINIT const QMetaObject Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Window, std::true_type>,
        // method 'lock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unlock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_socket_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_socket_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_signup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_contact_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_0_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_smile_button_7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_true'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_false'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_duplicate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_true'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signup_false'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_receive_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_update_log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_create_log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_contacts_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_input_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLog_out_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'auto_scroll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_add_line_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_add_contacts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'on_contact_online'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_contact_offline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_someone_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_someone_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'on_delete_contact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>
    >,
    nullptr
} };

void Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->lock(); break;
        case 1: _t->unlock(); break;
        case 2: _t->on_socket_connected(); break;
        case 3: _t->on_socket_error(); break;
        case 4: _t->on_send_button_clicked(); break;
        case 5: _t->on_login_button_clicked(); break;
        case 6: _t->on_login_signup_clicked(); break;
        case 7: _t->on_signup_login_clicked(); break;
        case 8: _t->on_signup_button_clicked(); break;
        case 9: _t->on_add_button_clicked(); break;
        case 10: _t->on_contact_button_clicked(); break;
        case 11: _t->on_0_clicked(); break;
        case 12: _t->on_1_clicked(); break;
        case 13: _t->on_2_clicked(); break;
        case 14: _t->on_3_clicked(); break;
        case 15: _t->on_4_clicked(); break;
        case 16: _t->on_smile_button_clicked(); break;
        case 17: _t->on_smile_button_2_clicked(); break;
        case 18: _t->on_smile_button_3_clicked(); break;
        case 19: _t->on_smile_button_4_clicked(); break;
        case 20: _t->on_smile_button_5_clicked(); break;
        case 21: _t->on_smile_button_6_clicked(); break;
        case 22: _t->on_smile_button_7_clicked(); break;
        case 23: _t->on_login_true(); break;
        case 24: _t->on_login_false(); break;
        case 25: _t->on_login_duplicate(); break;
        case 26: _t->on_signup_true(); break;
        case 27: _t->on_signup_false(); break;
        case 28: _t->on_receive_message((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 29: _t->on_update_log((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->on_create_log((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 31: _t->on_contacts_itemSelectionChanged(); break;
        case 32: _t->on_input_textChanged(); break;
        case 33: _t->on_actionLog_out_triggered(); break;
        case 34: _t->auto_scroll((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 35: _t->on_add_line_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->on_add_contacts((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 37: _t->on_contact_online((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 38: _t->on_contact_offline((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 39: _t->on_someone_disconnected((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 40: _t->on_someone_connected((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 41: _t->on_delete_contact(); break;
        case 42: _t->ShowContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Window::*)();
            if (_t _q_method = &Window::lock; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Window::*)();
            if (_t _q_method = &Window::unlock; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void Window::lock()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Window::unlock()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
