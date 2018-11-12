/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ES-Design/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[147];
    char stringdata0[2311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "SentPageType"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "type"
QT_MOC_LITERAL(4, 30, 20), // "SentItemSelectedName"
QT_MOC_LITERAL(5, 51, 4), // "name"
QT_MOC_LITERAL(6, 56, 9), // "SentState"
QT_MOC_LITERAL(7, 66, 12), // "actual_state"
QT_MOC_LITERAL(8, 79, 18), // "SentItemSelectedId"
QT_MOC_LITERAL(9, 98, 2), // "id"
QT_MOC_LITERAL(10, 101, 16), // "SentStateRootDir"
QT_MOC_LITERAL(11, 118, 8), // "root_dir"
QT_MOC_LITERAL(12, 127, 12), // "SlotNewAlbum"
QT_MOC_LITERAL(13, 140, 5), // "Album"
QT_MOC_LITERAL(14, 146, 13), // "album_recived"
QT_MOC_LITERAL(15, 160, 16), // "SlotNewPageParty"
QT_MOC_LITERAL(16, 177, 5), // "Party"
QT_MOC_LITERAL(17, 183, 14), // "party_received"
QT_MOC_LITERAL(18, 198, 22), // "SlotNewPageThingPeople"
QT_MOC_LITERAL(19, 221, 11), // "ThingPeople"
QT_MOC_LITERAL(20, 233, 21), // "thing_people_received"
QT_MOC_LITERAL(21, 255, 15), // "SlotNewPageTrip"
QT_MOC_LITERAL(22, 271, 4), // "Trip"
QT_MOC_LITERAL(23, 276, 13), // "trip_received"
QT_MOC_LITERAL(24, 290, 16), // "SlotNewPageOther"
QT_MOC_LITERAL(25, 307, 5), // "Other"
QT_MOC_LITERAL(26, 313, 14), // "other_received"
QT_MOC_LITERAL(27, 328, 21), // "SlotMoveSelectedPhoto"
QT_MOC_LITERAL(28, 350, 13), // "selected_item"
QT_MOC_LITERAL(29, 364, 7), // "item_id"
QT_MOC_LITERAL(30, 372, 20), // "SlotMoveSelectedPage"
QT_MOC_LITERAL(31, 393, 20), // "DefaultStartSoftware"
QT_MOC_LITERAL(32, 414, 15), // "StartThumbnails"
QT_MOC_LITERAL(33, 430, 13), // "AddThumbNails"
QT_MOC_LITERAL(34, 444, 10), // "StartTable"
QT_MOC_LITERAL(35, 455, 13), // "AddTableItems"
QT_MOC_LITERAL(36, 469, 12), // "AddListItems"
QT_MOC_LITERAL(37, 482, 9), // "StartTree"
QT_MOC_LITERAL(38, 492, 12), // "AddTreeItems"
QT_MOC_LITERAL(39, 505, 7), // "AddRoot"
QT_MOC_LITERAL(40, 513, 8), // "AddChild"
QT_MOC_LITERAL(41, 522, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(42, 539, 6), // "parent"
QT_MOC_LITERAL(43, 546, 11), // "CreateAlbum"
QT_MOC_LITERAL(44, 558, 10), // "CreatePage"
QT_MOC_LITERAL(45, 569, 15), // "ChangeAlbumName"
QT_MOC_LITERAL(46, 585, 15), // "ChangeAlbumDesc"
QT_MOC_LITERAL(47, 601, 8), // "MovePage"
QT_MOC_LITERAL(48, 610, 9), // "MovePhoto"
QT_MOC_LITERAL(49, 620, 35), // "on_action_associate_photo_tri..."
QT_MOC_LITERAL(50, 656, 14), // "AddPhotoButton"
QT_MOC_LITERAL(51, 671, 9), // "AddPhotos"
QT_MOC_LITERAL(52, 681, 11), // "photos_path"
QT_MOC_LITERAL(53, 693, 9), // "AddFolder"
QT_MOC_LITERAL(54, 703, 6), // "Remove"
QT_MOC_LITERAL(55, 710, 34), // "on_actionAdicionarPessoa_trig..."
QT_MOC_LITERAL(56, 745, 13), // "TransformName"
QT_MOC_LITERAL(57, 759, 14), // "CreatePageName"
QT_MOC_LITERAL(58, 774, 12), // "type_of_page"
QT_MOC_LITERAL(59, 787, 11), // "description"
QT_MOC_LITERAL(60, 799, 10), // "start_date"
QT_MOC_LITERAL(61, 810, 8), // "end_date"
QT_MOC_LITERAL(62, 819, 10), // "party_type"
QT_MOC_LITERAL(63, 830, 9), // "SearchBar"
QT_MOC_LITERAL(64, 840, 36), // "on_pushButton_ListaDetalhada_..."
QT_MOC_LITERAL(65, 877, 27), // "on_pushButton_Lista_clicked"
QT_MOC_LITERAL(66, 905, 32), // "on_pushButton_ThumbNails_clicked"
QT_MOC_LITERAL(67, 938, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(68, 964, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(69, 981, 4), // "item"
QT_MOC_LITERAL(70, 986, 26), // "on_tableWidget_cellClicked"
QT_MOC_LITERAL(71, 1013, 3), // "row"
QT_MOC_LITERAL(72, 1017, 6), // "column"
QT_MOC_LITERAL(73, 1024, 36), // "on_listWidget_thumbnails_item..."
QT_MOC_LITERAL(74, 1061, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(75, 1094, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(76, 1126, 42), // "on_listWidget_thumbnails_item..."
QT_MOC_LITERAL(77, 1169, 17), // "PathLinkActivated"
QT_MOC_LITERAL(78, 1187, 4), // "link"
QT_MOC_LITERAL(79, 1192, 15), // "on_seta_clicked"
QT_MOC_LITERAL(80, 1208, 9), // "SaveState"
QT_MOC_LITERAL(81, 1218, 14), // "GoToSavedState"
QT_MOC_LITERAL(82, 1233, 11), // "ChangeState"
QT_MOC_LITERAL(83, 1245, 10), // "GoToState0"
QT_MOC_LITERAL(84, 1256, 10), // "GoToState1"
QT_MOC_LITERAL(85, 1267, 8), // "album_id"
QT_MOC_LITERAL(86, 1276, 10), // "GoToState2"
QT_MOC_LITERAL(87, 1287, 7), // "page_id"
QT_MOC_LITERAL(88, 1295, 10), // "GoToState3"
QT_MOC_LITERAL(89, 1306, 8), // "photo_id"
QT_MOC_LITERAL(90, 1315, 10), // "GoToState4"
QT_MOC_LITERAL(91, 1326, 16), // "ResetCurrentView"
QT_MOC_LITERAL(92, 1343, 12), // "RefreshItems"
QT_MOC_LITERAL(93, 1356, 16), // "RefreshTreeItems"
QT_MOC_LITERAL(94, 1373, 10), // "ResetFocus"
QT_MOC_LITERAL(95, 1384, 19), // "ActivateViewButtons"
QT_MOC_LITERAL(96, 1404, 19), // "ActivateActionPhoto"
QT_MOC_LITERAL(97, 1424, 6), // "enable"
QT_MOC_LITERAL(98, 1431, 18), // "ActivateActionPage"
QT_MOC_LITERAL(99, 1450, 13), // "ChangeMenuBar"
QT_MOC_LITERAL(100, 1464, 18), // "ShowOrderByButtons"
QT_MOC_LITERAL(101, 1483, 40), // "on_comboBox_order_by_currentI..."
QT_MOC_LITERAL(102, 1524, 5), // "index"
QT_MOC_LITERAL(103, 1530, 7), // "OrderBy"
QT_MOC_LITERAL(104, 1538, 10), // "ascendente"
QT_MOC_LITERAL(105, 1549, 13), // "CompareAlbuns"
QT_MOC_LITERAL(106, 1563, 13), // "ourDB::albuns"
QT_MOC_LITERAL(107, 1577, 5), // "first"
QT_MOC_LITERAL(108, 1583, 6), // "second"
QT_MOC_LITERAL(109, 1590, 12), // "ComparePages"
QT_MOC_LITERAL(110, 1603, 12), // "ourDB::pages"
QT_MOC_LITERAL(111, 1616, 19), // "ComparePagesParties"
QT_MOC_LITERAL(112, 1636, 12), // "ourDB::party"
QT_MOC_LITERAL(113, 1649, 16), // "ComparePagesTrip"
QT_MOC_LITERAL(114, 1666, 11), // "ourDB::trip"
QT_MOC_LITERAL(115, 1678, 17), // "ComparePagesOther"
QT_MOC_LITERAL(116, 1696, 12), // "ourDB::other"
QT_MOC_LITERAL(117, 1709, 13), // "ComparePhotos"
QT_MOC_LITERAL(118, 1723, 13), // "ourDB::photos"
QT_MOC_LITERAL(119, 1737, 17), // "ComparePhotosDate"
QT_MOC_LITERAL(120, 1755, 11), // "resizeEvent"
QT_MOC_LITERAL(121, 1767, 13), // "QResizeEvent*"
QT_MOC_LITERAL(122, 1781, 5), // "event"
QT_MOC_LITERAL(123, 1787, 9), // "ShowImage"
QT_MOC_LITERAL(124, 1797, 19), // "ShowImageFullScreen"
QT_MOC_LITERAL(125, 1817, 18), // "ShowImageSlideShow"
QT_MOC_LITERAL(126, 1836, 10), // "PrintPhoto"
QT_MOC_LITERAL(127, 1847, 15), // "CopyRecursively"
QT_MOC_LITERAL(128, 1863, 11), // "srcFilePath"
QT_MOC_LITERAL(129, 1875, 11), // "tgtFilePath"
QT_MOC_LITERAL(130, 1887, 30), // "on_barra_de_marcadores_changed"
QT_MOC_LITERAL(131, 1918, 23), // "on_details_pane_changed"
QT_MOC_LITERAL(132, 1942, 34), // "on_pushButton_details_pane_cl..."
QT_MOC_LITERAL(133, 1977, 31), // "on_treeWidget_itemDoubleClicked"
QT_MOC_LITERAL(134, 2009, 19), // "AddInformationAlbum"
QT_MOC_LITERAL(135, 2029, 18), // "AddInformationPage"
QT_MOC_LITERAL(136, 2048, 19), // "AddInformationPhoto"
QT_MOC_LITERAL(137, 2068, 16), // "ShowSelectedInfo"
QT_MOC_LITERAL(138, 2085, 19), // "AddInformationItems"
QT_MOC_LITERAL(139, 2105, 23), // "AddRootInformationItems"
QT_MOC_LITERAL(140, 2129, 11), // "childs_list"
QT_MOC_LITERAL(141, 2141, 24), // "AddChildInformationItems"
QT_MOC_LITERAL(142, 2166, 29), // "on_actionSlide_Show_triggered"
QT_MOC_LITERAL(143, 2196, 35), // "on_actionTeclas_de_Atalho_tri..."
QT_MOC_LITERAL(144, 2232, 28), // "on_actionAcerca_de_triggered"
QT_MOC_LITERAL(145, 2261, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(146, 2285, 25) // "on_actionManual_triggered"

    },
    "MainWindow\0SentPageType\0\0type\0"
    "SentItemSelectedName\0name\0SentState\0"
    "actual_state\0SentItemSelectedId\0id\0"
    "SentStateRootDir\0root_dir\0SlotNewAlbum\0"
    "Album\0album_recived\0SlotNewPageParty\0"
    "Party\0party_received\0SlotNewPageThingPeople\0"
    "ThingPeople\0thing_people_received\0"
    "SlotNewPageTrip\0Trip\0trip_received\0"
    "SlotNewPageOther\0Other\0other_received\0"
    "SlotMoveSelectedPhoto\0selected_item\0"
    "item_id\0SlotMoveSelectedPage\0"
    "DefaultStartSoftware\0StartThumbnails\0"
    "AddThumbNails\0StartTable\0AddTableItems\0"
    "AddListItems\0StartTree\0AddTreeItems\0"
    "AddRoot\0AddChild\0QTreeWidgetItem*\0"
    "parent\0CreateAlbum\0CreatePage\0"
    "ChangeAlbumName\0ChangeAlbumDesc\0"
    "MovePage\0MovePhoto\0"
    "on_action_associate_photo_triggered\0"
    "AddPhotoButton\0AddPhotos\0photos_path\0"
    "AddFolder\0Remove\0on_actionAdicionarPessoa_triggered\0"
    "TransformName\0CreatePageName\0type_of_page\0"
    "description\0start_date\0end_date\0"
    "party_type\0SearchBar\0"
    "on_pushButton_ListaDetalhada_clicked\0"
    "on_pushButton_Lista_clicked\0"
    "on_pushButton_ThumbNails_clicked\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_tableWidget_cellClicked\0row\0"
    "column\0on_listWidget_thumbnails_itemClicked\0"
    "on_tableWidget_cellDoubleClicked\0"
    "on_listWidget_itemDoubleClicked\0"
    "on_listWidget_thumbnails_itemDoubleClicked\0"
    "PathLinkActivated\0link\0on_seta_clicked\0"
    "SaveState\0GoToSavedState\0ChangeState\0"
    "GoToState0\0GoToState1\0album_id\0"
    "GoToState2\0page_id\0GoToState3\0photo_id\0"
    "GoToState4\0ResetCurrentView\0RefreshItems\0"
    "RefreshTreeItems\0ResetFocus\0"
    "ActivateViewButtons\0ActivateActionPhoto\0"
    "enable\0ActivateActionPage\0ChangeMenuBar\0"
    "ShowOrderByButtons\0"
    "on_comboBox_order_by_currentIndexChanged\0"
    "index\0OrderBy\0ascendente\0CompareAlbuns\0"
    "ourDB::albuns\0first\0second\0ComparePages\0"
    "ourDB::pages\0ComparePagesParties\0"
    "ourDB::party\0ComparePagesTrip\0ourDB::trip\0"
    "ComparePagesOther\0ourDB::other\0"
    "ComparePhotos\0ourDB::photos\0"
    "ComparePhotosDate\0resizeEvent\0"
    "QResizeEvent*\0event\0ShowImage\0"
    "ShowImageFullScreen\0ShowImageSlideShow\0"
    "PrintPhoto\0CopyRecursively\0srcFilePath\0"
    "tgtFilePath\0on_barra_de_marcadores_changed\0"
    "on_details_pane_changed\0"
    "on_pushButton_details_pane_clicked\0"
    "on_treeWidget_itemDoubleClicked\0"
    "AddInformationAlbum\0AddInformationPage\0"
    "AddInformationPhoto\0ShowSelectedInfo\0"
    "AddInformationItems\0AddRootInformationItems\0"
    "childs_list\0AddChildInformationItems\0"
    "on_actionSlide_Show_triggered\0"
    "on_actionTeclas_de_Atalho_triggered\0"
    "on_actionAcerca_de_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionManual_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      96,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  494,    2, 0x06 /* Public */,
       4,    1,  497,    2, 0x06 /* Public */,
       6,    1,  500,    2, 0x06 /* Public */,
       8,    1,  503,    2, 0x06 /* Public */,
      10,    1,  506,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  509,    2, 0x0a /* Public */,
      15,    1,  512,    2, 0x0a /* Public */,
      18,    1,  515,    2, 0x0a /* Public */,
      21,    1,  518,    2, 0x0a /* Public */,
      24,    1,  521,    2, 0x0a /* Public */,
      27,    2,  524,    2, 0x0a /* Public */,
      30,    2,  529,    2, 0x0a /* Public */,
      31,    0,  534,    2, 0x08 /* Private */,
      32,    0,  535,    2, 0x08 /* Private */,
      33,    0,  536,    2, 0x08 /* Private */,
      34,    0,  537,    2, 0x08 /* Private */,
      35,    0,  538,    2, 0x08 /* Private */,
      36,    0,  539,    2, 0x08 /* Private */,
      37,    0,  540,    2, 0x08 /* Private */,
      38,    0,  541,    2, 0x08 /* Private */,
      39,    2,  542,    2, 0x08 /* Private */,
      40,    2,  547,    2, 0x08 /* Private */,
      43,    0,  552,    2, 0x08 /* Private */,
      44,    0,  553,    2, 0x08 /* Private */,
      45,    0,  554,    2, 0x08 /* Private */,
      46,    0,  555,    2, 0x08 /* Private */,
      47,    0,  556,    2, 0x08 /* Private */,
      48,    0,  557,    2, 0x08 /* Private */,
      49,    0,  558,    2, 0x08 /* Private */,
      50,    0,  559,    2, 0x08 /* Private */,
      51,    1,  560,    2, 0x08 /* Private */,
      53,    0,  563,    2, 0x08 /* Private */,
      54,    0,  564,    2, 0x08 /* Private */,
      55,    0,  565,    2, 0x08 /* Private */,
      56,    1,  566,    2, 0x08 /* Private */,
      57,    5,  569,    2, 0x08 /* Private */,
      63,    0,  580,    2, 0x08 /* Private */,
      64,    0,  581,    2, 0x08 /* Private */,
      65,    0,  582,    2, 0x08 /* Private */,
      66,    0,  583,    2, 0x08 /* Private */,
      67,    1,  584,    2, 0x08 /* Private */,
      70,    2,  587,    2, 0x08 /* Private */,
      73,    1,  592,    2, 0x08 /* Private */,
      74,    0,  595,    2, 0x08 /* Private */,
      75,    0,  596,    2, 0x08 /* Private */,
      76,    0,  597,    2, 0x08 /* Private */,
      77,    1,  598,    2, 0x08 /* Private */,
      79,    0,  601,    2, 0x08 /* Private */,
      80,    0,  602,    2, 0x08 /* Private */,
      81,    0,  603,    2, 0x08 /* Private */,
      82,    0,  604,    2, 0x08 /* Private */,
      83,    0,  605,    2, 0x08 /* Private */,
      84,    1,  606,    2, 0x08 /* Private */,
      86,    2,  609,    2, 0x08 /* Private */,
      88,    1,  614,    2, 0x08 /* Private */,
      90,    0,  617,    2, 0x08 /* Private */,
      91,    0,  618,    2, 0x08 /* Private */,
      92,    0,  619,    2, 0x08 /* Private */,
      93,    0,  620,    2, 0x08 /* Private */,
      94,    0,  621,    2, 0x08 /* Private */,
      95,    0,  622,    2, 0x08 /* Private */,
      96,    1,  623,    2, 0x08 /* Private */,
      98,    1,  626,    2, 0x08 /* Private */,
      99,    0,  629,    2, 0x08 /* Private */,
     100,    0,  630,    2, 0x08 /* Private */,
     101,    1,  631,    2, 0x08 /* Private */,
     103,    2,  634,    2, 0x08 /* Private */,
     105,    2,  639,    2, 0x08 /* Private */,
     109,    2,  644,    2, 0x08 /* Private */,
     111,    2,  649,    2, 0x08 /* Private */,
     113,    2,  654,    2, 0x08 /* Private */,
     115,    2,  659,    2, 0x08 /* Private */,
     117,    2,  664,    2, 0x08 /* Private */,
     119,    2,  669,    2, 0x08 /* Private */,
     120,    1,  674,    2, 0x08 /* Private */,
     123,    0,  677,    2, 0x08 /* Private */,
     124,    0,  678,    2, 0x08 /* Private */,
     125,    0,  679,    2, 0x08 /* Private */,
     126,    0,  680,    2, 0x08 /* Private */,
     127,    2,  681,    2, 0x08 /* Private */,
     130,    0,  686,    2, 0x08 /* Private */,
     131,    0,  687,    2, 0x08 /* Private */,
     132,    0,  688,    2, 0x08 /* Private */,
     133,    2,  689,    2, 0x08 /* Private */,
     134,    1,  694,    2, 0x08 /* Private */,
     135,    1,  697,    2, 0x08 /* Private */,
     136,    1,  700,    2, 0x08 /* Private */,
     137,    0,  703,    2, 0x08 /* Private */,
     138,    0,  704,    2, 0x08 /* Private */,
     139,    2,  705,    2, 0x08 /* Private */,
     141,    2,  710,    2, 0x08 /* Private */,
     142,    0,  715,    2, 0x08 /* Private */,
     143,    0,  716,    2, 0x08 /* Private */,
     144,    0,  717,    2, 0x08 /* Private */,
     145,    0,  718,    2, 0x08 /* Private */,
     146,    0,  719,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   28,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    9,
    QMetaType::Void, 0x80000000 | 41, QMetaType::QString,   42,    5,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QDate, QMetaType::QDate, QMetaType::QString,   58,   59,   60,   61,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   71,   72,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   85,   87,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void, QMetaType::Bool,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  102,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,  104,  102,
    QMetaType::Bool, 0x80000000 | 106, 0x80000000 | 106,  107,  108,
    QMetaType::Bool, 0x80000000 | 110, 0x80000000 | 110,  107,  108,
    QMetaType::Bool, 0x80000000 | 112, 0x80000000 | 112,  107,  108,
    QMetaType::Bool, 0x80000000 | 114, 0x80000000 | 114,  107,  108,
    QMetaType::Bool, 0x80000000 | 116, 0x80000000 | 116,  107,  108,
    QMetaType::Bool, 0x80000000 | 118, 0x80000000 | 118,  107,  108,
    QMetaType::Bool, 0x80000000 | 118, 0x80000000 | 118,  107,  108,
    QMetaType::Void, 0x80000000 | 121,  122,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,  128,  129,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41, QMetaType::Int,   69,   72,
    QMetaType::Void, QMetaType::Int,   85,
    QMetaType::Void, QMetaType::Int,   87,
    QMetaType::Void, QMetaType::Int,   89,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    5,  140,
    QMetaType::Void, 0x80000000 | 41, QMetaType::QString,   42,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SentPageType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SentItemSelectedName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SentState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SentItemSelectedId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SentStateRootDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->SlotNewAlbum((*reinterpret_cast< Album(*)>(_a[1]))); break;
        case 6: _t->SlotNewPageParty((*reinterpret_cast< Party(*)>(_a[1]))); break;
        case 7: _t->SlotNewPageThingPeople((*reinterpret_cast< ThingPeople(*)>(_a[1]))); break;
        case 8: _t->SlotNewPageTrip((*reinterpret_cast< Trip(*)>(_a[1]))); break;
        case 9: _t->SlotNewPageOther((*reinterpret_cast< Other(*)>(_a[1]))); break;
        case 10: _t->SlotMoveSelectedPhoto((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->SlotMoveSelectedPage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->DefaultStartSoftware(); break;
        case 13: _t->StartThumbnails(); break;
        case 14: _t->AddThumbNails(); break;
        case 15: _t->StartTable(); break;
        case 16: _t->AddTableItems(); break;
        case 17: _t->AddListItems(); break;
        case 18: _t->StartTree(); break;
        case 19: _t->AddTreeItems(); break;
        case 20: _t->AddRoot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->AddChild((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->CreateAlbum(); break;
        case 23: { bool _r = _t->CreatePage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->ChangeAlbumName(); break;
        case 25: _t->ChangeAlbumDesc(); break;
        case 26: _t->MovePage(); break;
        case 27: _t->MovePhoto(); break;
        case 28: _t->on_action_associate_photo_triggered(); break;
        case 29: _t->AddPhotoButton(); break;
        case 30: _t->AddPhotos((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 31: _t->AddFolder(); break;
        case 32: _t->Remove(); break;
        case 33: _t->on_actionAdicionarPessoa_triggered(); break;
        case 34: { QString _r = _t->TransformName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 35: { QString _r = _t->CreatePageName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3])),(*reinterpret_cast< QDate(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: _t->SearchBar(); break;
        case 37: _t->on_pushButton_ListaDetalhada_clicked(); break;
        case 38: _t->on_pushButton_Lista_clicked(); break;
        case 39: _t->on_pushButton_ThumbNails_clicked(); break;
        case 40: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 41: _t->on_tableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->on_listWidget_thumbnails_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 43: _t->on_tableWidget_cellDoubleClicked(); break;
        case 44: _t->on_listWidget_itemDoubleClicked(); break;
        case 45: _t->on_listWidget_thumbnails_itemDoubleClicked(); break;
        case 46: _t->PathLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->on_seta_clicked(); break;
        case 48: _t->SaveState(); break;
        case 49: _t->GoToSavedState(); break;
        case 50: _t->ChangeState(); break;
        case 51: _t->GoToState0(); break;
        case 52: _t->GoToState1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->GoToState2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 54: _t->GoToState3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->GoToState4(); break;
        case 56: _t->ResetCurrentView(); break;
        case 57: _t->RefreshItems(); break;
        case 58: _t->RefreshTreeItems(); break;
        case 59: _t->ResetFocus(); break;
        case 60: _t->ActivateViewButtons(); break;
        case 61: _t->ActivateActionPhoto((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->ActivateActionPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->ChangeMenuBar(); break;
        case 64: _t->ShowOrderByButtons(); break;
        case 65: _t->on_comboBox_order_by_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->OrderBy((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 67: { bool _r = _t->CompareAlbuns((*reinterpret_cast< const ourDB::albuns(*)>(_a[1])),(*reinterpret_cast< const ourDB::albuns(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: { bool _r = _t->ComparePages((*reinterpret_cast< const ourDB::pages(*)>(_a[1])),(*reinterpret_cast< const ourDB::pages(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: { bool _r = _t->ComparePagesParties((*reinterpret_cast< const ourDB::party(*)>(_a[1])),(*reinterpret_cast< const ourDB::party(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: { bool _r = _t->ComparePagesTrip((*reinterpret_cast< const ourDB::trip(*)>(_a[1])),(*reinterpret_cast< const ourDB::trip(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: { bool _r = _t->ComparePagesOther((*reinterpret_cast< const ourDB::other(*)>(_a[1])),(*reinterpret_cast< const ourDB::other(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: { bool _r = _t->ComparePhotos((*reinterpret_cast< const ourDB::photos(*)>(_a[1])),(*reinterpret_cast< const ourDB::photos(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: { bool _r = _t->ComparePhotosDate((*reinterpret_cast< const ourDB::photos(*)>(_a[1])),(*reinterpret_cast< const ourDB::photos(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 75: _t->ShowImage(); break;
        case 76: _t->ShowImageFullScreen(); break;
        case 77: _t->ShowImageSlideShow(); break;
        case 78: _t->PrintPhoto(); break;
        case 79: { bool _r = _t->CopyRecursively((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: _t->on_barra_de_marcadores_changed(); break;
        case 81: _t->on_details_pane_changed(); break;
        case 82: _t->on_pushButton_details_pane_clicked(); break;
        case 83: _t->on_treeWidget_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 84: _t->AddInformationAlbum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 85: _t->AddInformationPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->AddInformationPhoto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 87: _t->ShowSelectedInfo(); break;
        case 88: _t->AddInformationItems(); break;
        case 89: _t->AddRootInformationItems((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 90: _t->AddChildInformationItems((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 91: _t->on_actionSlide_Show_triggered(); break;
        case 92: _t->on_actionTeclas_de_Atalho_triggered(); break;
        case 93: _t->on_actionAcerca_de_triggered(); break;
        case 94: _t->on_actionExit_triggered(); break;
        case 95: _t->on_actionManual_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SentPageType)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SentItemSelectedName)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SentState)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SentItemSelectedId)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::SentStateRootDir)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 96)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 96;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SentPageType(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::SentItemSelectedName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::SentState(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::SentItemSelectedId(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::SentStateRootDir(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
