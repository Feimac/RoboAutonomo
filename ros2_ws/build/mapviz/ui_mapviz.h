/********************************************************************************
** Form generated from reading UI file 'mapviz.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPVIZ_H
#define UI_MAPVIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mapviz/color_button.h>
#include "mapviz/widgets.h"

QT_BEGIN_NAMESPACE

class Ui_mapviz
{
public:
    QAction *actionExit;
    QAction *actionOpen_config;
    QAction *actionSave_config;
    QAction *actionConfig_Dock;
    QAction *actionFix_Orientation;
    QAction *actionForce_720p;
    QAction *actionForce_480p;
    QAction *actionResizable;
    QAction *actionSet_Capture_Directory;
    QAction *actionShow_Status_Bar;
    QAction *actionShow_Capture_Tools;
    QAction *actionRotate_90;
    QAction *actionEnable_Antialiasing;
    QAction *actionImage_Transport;
    QAction *actionClear_History;
    QAction *actionClear;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menu_View;
    QMenu *menuData;
    QStatusBar *statusbar;
    QDockWidget *configdock;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    mapviz::ColorButton *bg_color;
    QComboBox *targetframe;
    QComboBox *fixedframe;
    QCheckBox *uselatesttransforms;
    mapviz::PluginConfigList *configs;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addbutton;
    QPushButton *removebutton;

    void setupUi(QMainWindow *mapviz)
    {
        if (mapviz->objectName().isEmpty())
            mapviz->setObjectName(QString::fromUtf8("mapviz"));
        mapviz->resize(600, 600);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapviz->sizePolicy().hasHeightForWidth());
        mapviz->setSizePolicy(sizePolicy);
        mapviz->setMinimumSize(QSize(600, 400));
        actionExit = new QAction(mapviz);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen_config = new QAction(mapviz);
        actionOpen_config->setObjectName(QString::fromUtf8("actionOpen_config"));
        actionSave_config = new QAction(mapviz);
        actionSave_config->setObjectName(QString::fromUtf8("actionSave_config"));
        actionConfig_Dock = new QAction(mapviz);
        actionConfig_Dock->setObjectName(QString::fromUtf8("actionConfig_Dock"));
        actionConfig_Dock->setCheckable(true);
        actionConfig_Dock->setChecked(true);
        actionFix_Orientation = new QAction(mapviz);
        actionFix_Orientation->setObjectName(QString::fromUtf8("actionFix_Orientation"));
        actionFix_Orientation->setCheckable(true);
        actionForce_720p = new QAction(mapviz);
        actionForce_720p->setObjectName(QString::fromUtf8("actionForce_720p"));
        actionForce_720p->setCheckable(true);
        actionForce_480p = new QAction(mapviz);
        actionForce_480p->setObjectName(QString::fromUtf8("actionForce_480p"));
        actionForce_480p->setCheckable(true);
        actionResizable = new QAction(mapviz);
        actionResizable->setObjectName(QString::fromUtf8("actionResizable"));
        actionResizable->setCheckable(true);
        actionResizable->setChecked(true);
        actionSet_Capture_Directory = new QAction(mapviz);
        actionSet_Capture_Directory->setObjectName(QString::fromUtf8("actionSet_Capture_Directory"));
        actionShow_Status_Bar = new QAction(mapviz);
        actionShow_Status_Bar->setObjectName(QString::fromUtf8("actionShow_Status_Bar"));
        actionShow_Status_Bar->setCheckable(true);
        actionShow_Status_Bar->setChecked(true);
        actionShow_Capture_Tools = new QAction(mapviz);
        actionShow_Capture_Tools->setObjectName(QString::fromUtf8("actionShow_Capture_Tools"));
        actionShow_Capture_Tools->setCheckable(true);
        actionShow_Capture_Tools->setChecked(true);
        actionRotate_90 = new QAction(mapviz);
        actionRotate_90->setObjectName(QString::fromUtf8("actionRotate_90"));
        actionRotate_90->setCheckable(true);
        actionEnable_Antialiasing = new QAction(mapviz);
        actionEnable_Antialiasing->setObjectName(QString::fromUtf8("actionEnable_Antialiasing"));
        actionEnable_Antialiasing->setCheckable(true);
        actionEnable_Antialiasing->setChecked(true);
        actionImage_Transport = new QAction(mapviz);
        actionImage_Transport->setObjectName(QString::fromUtf8("actionImage_Transport"));
        actionClear_History = new QAction(mapviz);
        actionClear_History->setObjectName(QString::fromUtf8("actionClear_History"));
        actionClear = new QAction(mapviz);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        menubar = new QMenuBar(mapviz);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuData = new QMenu(menubar);
        menuData->setObjectName(QString::fromUtf8("menuData"));
        mapviz->setMenuBar(menubar);
        statusbar = new QStatusBar(mapviz);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(true);
        mapviz->setStatusBar(statusbar);
        configdock = new QDockWidget(mapviz);
        configdock->setObjectName(QString::fromUtf8("configdock"));
        configdock->setMinimumSize(QSize(332, 301));
        configdock->setFeatures(QDockWidget::DockWidgetMovable);
        configdock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 0, 0, 0);
        widget_2 = new QWidget(dockWidgetContents);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(85, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(85, 16777215));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 2, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(85, 16777215));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        bg_color = new mapviz::ColorButton(widget_2);
        bg_color->setObjectName(QString::fromUtf8("bg_color"));
        bg_color->setMaximumSize(QSize(24, 24));
        bg_color->setAutoFillBackground(false);
        bg_color->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(bg_color, 5, 1, 1, 1);

        targetframe = new QComboBox(widget_2);
        targetframe->setObjectName(QString::fromUtf8("targetframe"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(targetframe->sizePolicy().hasHeightForWidth());
        targetframe->setSizePolicy(sizePolicy1);
        targetframe->setMaximumSize(QSize(16777215, 25));
        targetframe->setFont(font);
        targetframe->setEditable(true);

        gridLayout->addWidget(targetframe, 1, 1, 2, 2);

        fixedframe = new QComboBox(widget_2);
        fixedframe->setObjectName(QString::fromUtf8("fixedframe"));
        sizePolicy1.setHeightForWidth(fixedframe->sizePolicy().hasHeightForWidth());
        fixedframe->setSizePolicy(sizePolicy1);
        fixedframe->setMaximumSize(QSize(16777215, 25));
        fixedframe->setFont(font);
        fixedframe->setEditable(true);

        gridLayout->addWidget(fixedframe, 0, 1, 1, 2);

        uselatesttransforms = new QCheckBox(widget_2);
        uselatesttransforms->setObjectName(QString::fromUtf8("uselatesttransforms"));
        uselatesttransforms->setLayoutDirection(Qt::LeftToRight);
        uselatesttransforms->setChecked(true);

        gridLayout->addWidget(uselatesttransforms, 3, 0, 1, 3);


        verticalLayout->addWidget(widget_2);

        configs = new mapviz::PluginConfigList(dockWidgetContents);
        configs->setObjectName(QString::fromUtf8("configs"));
        configs->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        configs->setDragEnabled(true);
        configs->setDragDropMode(QAbstractItemView::InternalMove);
        configs->setDefaultDropAction(Qt::MoveAction);
        configs->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout->addWidget(configs);

        widget = new QWidget(dockWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 4);
        addbutton = new QPushButton(widget);
        addbutton->setObjectName(QString::fromUtf8("addbutton"));
        addbutton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(addbutton);

        removebutton = new QPushButton(widget);
        removebutton->setObjectName(QString::fromUtf8("removebutton"));
        removebutton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(removebutton);


        verticalLayout->addWidget(widget);

        configdock->setWidget(dockWidgetContents);
        mapviz->addDockWidget(Qt::LeftDockWidgetArea, configdock);
        QWidget::setTabOrder(fixedframe, targetframe);
        QWidget::setTabOrder(targetframe, uselatesttransforms);
        QWidget::setTabOrder(uselatesttransforms, bg_color);
        QWidget::setTabOrder(bg_color, configs);
        QWidget::setTabOrder(configs, addbutton);
        QWidget::setTabOrder(addbutton, removebutton);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menuData->menuAction());
        menuFile->addAction(actionOpen_config);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_config);
        menuFile->addAction(actionClear);
        menuFile->addSeparator();
        menuFile->addAction(actionSet_Capture_Directory);
        menuFile->addAction(actionExit);
        menu_View->addAction(actionFix_Orientation);
        menu_View->addAction(actionRotate_90);
        menu_View->addAction(actionEnable_Antialiasing);
        menu_View->addSeparator();
        menu_View->addAction(actionForce_720p);
        menu_View->addAction(actionForce_480p);
        menu_View->addAction(actionResizable);
        menu_View->addSeparator();
        menu_View->addAction(actionConfig_Dock);
        menu_View->addAction(actionShow_Status_Bar);
        menu_View->addAction(actionShow_Capture_Tools);
        menu_View->addSeparator();
        menuData->addAction(actionClear_History);

        retranslateUi(mapviz);
        QObject::connect(addbutton, SIGNAL(clicked()), mapviz, SLOT(SelectNewDisplay()));
        QObject::connect(removebutton, SIGNAL(clicked()), mapviz, SLOT(RemoveDisplay()));
        QObject::connect(actionConfig_Dock, SIGNAL(toggled(bool)), mapviz, SLOT(ToggleConfigPanel(bool)));
        QObject::connect(fixedframe, SIGNAL(editTextChanged(QString)), mapviz, SLOT(FixedFrameSelected(QString)));
        QObject::connect(targetframe, SIGNAL(editTextChanged(QString)), mapviz, SLOT(TargetFrameSelected(QString)));
        QObject::connect(actionFix_Orientation, SIGNAL(toggled(bool)), mapviz, SLOT(ToggleFixOrientation(bool)));
        QObject::connect(actionOpen_config, SIGNAL(triggered()), mapviz, SLOT(OpenConfig()));
        QObject::connect(actionSave_config, SIGNAL(triggered()), mapviz, SLOT(SaveConfig()));
        QObject::connect(actionForce_720p, SIGNAL(toggled(bool)), mapviz, SLOT(Force720p(bool)));
        QObject::connect(actionForce_480p, SIGNAL(toggled(bool)), mapviz, SLOT(Force480p(bool)));
        QObject::connect(actionResizable, SIGNAL(toggled(bool)), mapviz, SLOT(SetResizable(bool)));
        QObject::connect(uselatesttransforms, SIGNAL(toggled(bool)), mapviz, SLOT(ToggleUseLatestTransforms(bool)));
        QObject::connect(actionSet_Capture_Directory, SIGNAL(triggered()), mapviz, SLOT(SetCaptureDirectory()));
        QObject::connect(actionShow_Status_Bar, SIGNAL(toggled(bool)), mapviz, SLOT(ToggleStatusBar(bool)));
        QObject::connect(actionShow_Capture_Tools, SIGNAL(triggered(bool)), mapviz, SLOT(ToggleCaptureTools(bool)));
        QObject::connect(actionRotate_90, SIGNAL(toggled(bool)), mapviz, SLOT(ToggleRotate90(bool)));
        QObject::connect(actionEnable_Antialiasing, SIGNAL(toggled(bool)), mapviz, SLOT(ToggleEnableAntialiasing(bool)));

        QMetaObject::connectSlotsByName(mapviz);
    } // setupUi

    void retranslateUi(QMainWindow *mapviz)
    {
        mapviz->setWindowTitle(QCoreApplication::translate("mapviz", "mapviz", nullptr));
        actionExit->setText(QCoreApplication::translate("mapviz", "Exit", nullptr));
        actionOpen_config->setText(QCoreApplication::translate("mapviz", "Open Config", nullptr));
        actionSave_config->setText(QCoreApplication::translate("mapviz", "Save Config", nullptr));
        actionConfig_Dock->setText(QCoreApplication::translate("mapviz", "Show Config Panel", nullptr));
#if QT_CONFIG(statustip)
        actionConfig_Dock->setStatusTip(QCoreApplication::translate("mapviz", "Show the display configuration panel", nullptr));
#endif // QT_CONFIG(statustip)
        actionFix_Orientation->setText(QCoreApplication::translate("mapviz", "Fix Orientation", nullptr));
#if QT_CONFIG(statustip)
        actionFix_Orientation->setStatusTip(QCoreApplication::translate("mapviz", "Fix the orientation of the camera", nullptr));
#endif // QT_CONFIG(statustip)
        actionForce_720p->setText(QCoreApplication::translate("mapviz", "Force 720p", nullptr));
#if QT_CONFIG(statustip)
        actionForce_720p->setStatusTip(QCoreApplication::translate("mapviz", "Lock the display canvas to 720p", nullptr));
#endif // QT_CONFIG(statustip)
        actionForce_480p->setText(QCoreApplication::translate("mapviz", "Force 480p", nullptr));
#if QT_CONFIG(statustip)
        actionForce_480p->setStatusTip(QCoreApplication::translate("mapviz", "Lock the display canvas to 480p", nullptr));
#endif // QT_CONFIG(statustip)
        actionResizable->setText(QCoreApplication::translate("mapviz", "Resizable", nullptr));
#if QT_CONFIG(statustip)
        actionResizable->setStatusTip(QCoreApplication::translate("mapviz", "Make the window resizable", nullptr));
#endif // QT_CONFIG(statustip)
        actionSet_Capture_Directory->setText(QCoreApplication::translate("mapviz", "Set Capture Directory", nullptr));
#if QT_CONFIG(statustip)
        actionSet_Capture_Directory->setStatusTip(QCoreApplication::translate("mapviz", "Set the capture directory for screeshots and videos", nullptr));
#endif // QT_CONFIG(statustip)
        actionShow_Status_Bar->setText(QCoreApplication::translate("mapviz", "Show Status Bar", nullptr));
#if QT_CONFIG(statustip)
        actionShow_Status_Bar->setStatusTip(QCoreApplication::translate("mapviz", "Show the status bar", nullptr));
#endif // QT_CONFIG(statustip)
        actionShow_Capture_Tools->setText(QCoreApplication::translate("mapviz", "Show Capture Tools", nullptr));
#if QT_CONFIG(statustip)
        actionShow_Capture_Tools->setStatusTip(QCoreApplication::translate("mapviz", "Show the capture tools on the status bar", nullptr));
#endif // QT_CONFIG(statustip)
        actionRotate_90->setText(QCoreApplication::translate("mapviz", "Rotate 90\302\260", nullptr));
#if QT_CONFIG(statustip)
        actionRotate_90->setStatusTip(QCoreApplication::translate("mapviz", "Rotate the camera by 90 degrees", nullptr));
#endif // QT_CONFIG(statustip)
        actionEnable_Antialiasing->setText(QCoreApplication::translate("mapviz", "Enable Antialiasing", nullptr));
#if QT_CONFIG(statustip)
        actionEnable_Antialiasing->setStatusTip(QCoreApplication::translate("mapviz", "Enable antialiasing on the GL surface", nullptr));
#endif // QT_CONFIG(statustip)
        actionImage_Transport->setText(QCoreApplication::translate("mapviz", "Image Transport", nullptr));
        actionClear_History->setText(QCoreApplication::translate("mapviz", "Clear History", nullptr));
        actionClear->setText(QCoreApplication::translate("mapviz", "Clear Config", nullptr));
        menuFile->setTitle(QCoreApplication::translate("mapviz", "&File", nullptr));
        menu_View->setTitle(QCoreApplication::translate("mapviz", "&View", nullptr));
        menuData->setTitle(QCoreApplication::translate("mapviz", "Data", nullptr));
        configdock->setWindowTitle(QCoreApplication::translate("mapviz", "Config", nullptr));
        label->setText(QCoreApplication::translate("mapviz", "Fixed Frame:", nullptr));
        label_2->setText(QCoreApplication::translate("mapviz", "Target Frame:", nullptr));
        label_3->setText(QCoreApplication::translate("mapviz", "Background:", nullptr));
#if QT_CONFIG(tooltip)
        bg_color->setToolTip(QCoreApplication::translate("mapviz", "Set the background color", nullptr));
#endif // QT_CONFIG(tooltip)
        bg_color->setText(QString());
#if QT_CONFIG(tooltip)
        targetframe->setToolTip(QCoreApplication::translate("mapviz", "The reference frame for the camera view", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fixedframe->setToolTip(QCoreApplication::translate("mapviz", "The reference frame used to denote the \"world\" frame\n"
"                                            ", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        uselatesttransforms->setToolTip(QCoreApplication::translate("mapviz", "Use the current time when transforming data instead of using the\n"
"                                                timestamps associated with the data\n"
"                                            ", nullptr));
#endif // QT_CONFIG(tooltip)
        uselatesttransforms->setText(QCoreApplication::translate("mapviz", "Use Latest Transforms", nullptr));
#if QT_CONFIG(tooltip)
        addbutton->setToolTip(QCoreApplication::translate("mapviz", "Add a new display (Ctrl + N)", nullptr));
#endif // QT_CONFIG(tooltip)
        addbutton->setText(QCoreApplication::translate("mapviz", "Add", nullptr));
#if QT_CONFIG(tooltip)
        removebutton->setToolTip(QCoreApplication::translate("mapviz", "Remove the selected display (Ctrl + X)", nullptr));
#endif // QT_CONFIG(tooltip)
        removebutton->setText(QCoreApplication::translate("mapviz", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapviz: public Ui_mapviz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPVIZ_H
