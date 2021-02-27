/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayWindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_2;
    QFrame *mainframe;
    QHBoxLayout *horizontalLayout_3;
    QQuickWidget *quickWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *screenframe;
    QHBoxLayout *horizontalLayout;
    QLabel *primaryLabel;
    QComboBox *primaryCombo;
    QPushButton *mainScreenButton;
    QVBoxLayout *controlPanelLayout;
    QFrame *showMonitorframe;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *showScreenLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *advancedHorLayout;
    QPushButton *advancedBtn;
    QSpacerItem *horizontalSpacer_8;
    QFrame *unionframe;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *unionLayout;
    QLabel *unifyLabel;
    QSpacerItem *horizontalSpacer_3;
    QFrame *brightnessframe;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *brightnessSlider;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QFrame *nightframe;
    QFrame *themeFrame;
    QFrame *sunframe;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QRadioButton *sunradioBtn;
    QFrame *customframe;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *customradioBtn;
    QFrame *opframe;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *opHourCom;
    QComboBox *opMinCom;
    QFrame *clsframe;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *clHourCom;
    QComboBox *clMinCom;
    QFrame *temptframe;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_18;
    QLabel *label_19;
    QSlider *temptSlider;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *applyButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DisplayWindow)
    {
        if (DisplayWindow->objectName().isEmpty())
            DisplayWindow->setObjectName(QString::fromUtf8("DisplayWindow"));
        DisplayWindow->resize(945, 1117);
        verticalLayout_5 = new QVBoxLayout(DisplayWindow);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 32, 48);
        titleLabel = new QLabel(DisplayWindow);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout_5->addWidget(titleLabel);

        verticalSpacer_2 = new QSpacerItem(12, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        mainframe = new QFrame(DisplayWindow);
        mainframe->setObjectName(QString::fromUtf8("mainframe"));
        mainframe->setMinimumSize(QSize(550, 0));
        mainframe->setMaximumSize(QSize(960, 16777215));
        mainframe->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(mainframe);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        quickWidget = new QQuickWidget(mainframe);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setMinimumSize(QSize(550, 300));
        quickWidget->setMaximumSize(QSize(550, 300));

        horizontalLayout_3->addWidget(quickWidget);


        verticalLayout_5->addWidget(mainframe);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        screenframe = new QFrame(DisplayWindow);
        screenframe->setObjectName(QString::fromUtf8("screenframe"));
        screenframe->setMinimumSize(QSize(550, 50));
        screenframe->setMaximumSize(QSize(960, 50));
        screenframe->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(screenframe);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        primaryLabel = new QLabel(screenframe);
        primaryLabel->setObjectName(QString::fromUtf8("primaryLabel"));
        primaryLabel->setMinimumSize(QSize(118, 30));
        primaryLabel->setMaximumSize(QSize(118, 30));

        horizontalLayout->addWidget(primaryLabel);

        primaryCombo = new QComboBox(screenframe);
        primaryCombo->setObjectName(QString::fromUtf8("primaryCombo"));
        primaryCombo->setMinimumSize(QSize(200, 0));
        primaryCombo->setMaximumSize(QSize(16777215, 30));
        primaryCombo->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(primaryCombo);

        mainScreenButton = new QPushButton(screenframe);
        mainScreenButton->setObjectName(QString::fromUtf8("mainScreenButton"));
        mainScreenButton->setMinimumSize(QSize(120, 30));
        mainScreenButton->setMaximumSize(QSize(150, 30));
        QFont font;
        font.setPointSize(11);
        mainScreenButton->setFont(font);
        mainScreenButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(mainScreenButton);


        verticalLayout_3->addWidget(screenframe);

        controlPanelLayout = new QVBoxLayout();
        controlPanelLayout->setSpacing(1);
        controlPanelLayout->setObjectName(QString::fromUtf8("controlPanelLayout"));
        controlPanelLayout->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout_3->addLayout(controlPanelLayout);

        showMonitorframe = new QFrame(DisplayWindow);
        showMonitorframe->setObjectName(QString::fromUtf8("showMonitorframe"));
        showMonitorframe->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(showMonitorframe->sizePolicy().hasHeightForWidth());
        showMonitorframe->setSizePolicy(sizePolicy);
        showMonitorframe->setMinimumSize(QSize(550, 50));
        showMonitorframe->setMaximumSize(QSize(960, 50));
        showMonitorframe->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(showMonitorframe);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        showScreenLayout = new QHBoxLayout();
        showScreenLayout->setObjectName(QString::fromUtf8("showScreenLayout"));
        label = new QLabel(showMonitorframe);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(118, 30));
        label->setMaximumSize(QSize(16777215, 30));

        showScreenLayout->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(78, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        showScreenLayout->addItem(horizontalSpacer_6);


        horizontalLayout_2->addLayout(showScreenLayout);


        verticalLayout_3->addWidget(showMonitorframe);

        advancedHorLayout = new QHBoxLayout();
        advancedHorLayout->setSpacing(0);
        advancedHorLayout->setObjectName(QString::fromUtf8("advancedHorLayout"));
        advancedHorLayout->setContentsMargins(9, 8, 9, 32);
        advancedBtn = new QPushButton(DisplayWindow);
        advancedBtn->setObjectName(QString::fromUtf8("advancedBtn"));
        advancedBtn->setMinimumSize(QSize(120, 36));
        advancedBtn->setMaximumSize(QSize(120, 36));

        advancedHorLayout->addWidget(advancedBtn);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        advancedHorLayout->addItem(horizontalSpacer_8);


        verticalLayout_3->addLayout(advancedHorLayout);

        unionframe = new QFrame(DisplayWindow);
        unionframe->setObjectName(QString::fromUtf8("unionframe"));
        unionframe->setMinimumSize(QSize(550, 50));
        unionframe->setMaximumSize(QSize(960, 50));
        unionframe->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(unionframe);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        unionLayout = new QHBoxLayout();
        unionLayout->setObjectName(QString::fromUtf8("unionLayout"));
        unifyLabel = new QLabel(unionframe);
        unifyLabel->setObjectName(QString::fromUtf8("unifyLabel"));

        unionLayout->addWidget(unifyLabel);

        horizontalSpacer_3 = new QSpacerItem(98, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        unionLayout->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(unionLayout);


        verticalLayout_3->addWidget(unionframe);


        verticalLayout_5->addLayout(verticalLayout_3);

        brightnessframe = new QFrame(DisplayWindow);
        brightnessframe->setObjectName(QString::fromUtf8("brightnessframe"));
        brightnessframe->setMinimumSize(QSize(550, 50));
        brightnessframe->setMaximumSize(QSize(960, 50));
        brightnessframe->setFrameShape(QFrame::Box);
        horizontalLayout_7 = new QHBoxLayout(brightnessframe);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(brightnessframe);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(118, 30));
        label_3->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(brightnessframe);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        brightnessSlider = new QSlider(brightnessframe);
        brightnessSlider->setObjectName(QString::fromUtf8("brightnessSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(brightnessSlider->sizePolicy().hasHeightForWidth());
        brightnessSlider->setSizePolicy(sizePolicy1);
        brightnessSlider->setStyleSheet(QString::fromUtf8(""));
        brightnessSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(brightnessSlider);

        label_5 = new QLabel(brightnessframe);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(brightnessframe);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nightframe = new QFrame(DisplayWindow);
        nightframe->setObjectName(QString::fromUtf8("nightframe"));
        nightframe->setMinimumSize(QSize(550, 50));
        nightframe->setMaximumSize(QSize(960, 50));
        nightframe->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(nightframe);

        themeFrame = new QFrame(DisplayWindow);
        themeFrame->setObjectName(QString::fromUtf8("themeFrame"));
        themeFrame->setMinimumSize(QSize(550, 50));
        themeFrame->setMaximumSize(QSize(960, 50));
        themeFrame->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(themeFrame);

        sunframe = new QFrame(DisplayWindow);
        sunframe->setObjectName(QString::fromUtf8("sunframe"));
        sunframe->setMinimumSize(QSize(550, 50));
        sunframe->setMaximumSize(QSize(960, 50));
        sunframe->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(sunframe);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(sunframe);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(118, 30));
        label_6->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_9->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        sunradioBtn = new QRadioButton(sunframe);
        sunradioBtn->setObjectName(QString::fromUtf8("sunradioBtn"));

        horizontalLayout_9->addWidget(sunradioBtn);


        horizontalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(sunframe);

        customframe = new QFrame(DisplayWindow);
        customframe->setObjectName(QString::fromUtf8("customframe"));
        customframe->setMinimumSize(QSize(550, 50));
        customframe->setMaximumSize(QSize(960, 50));
        customframe->setFrameShape(QFrame::Box);
        horizontalLayout_12 = new QHBoxLayout(customframe);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_12 = new QLabel(customframe);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(118, 30));
        label_12->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_13->addWidget(label_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        customradioBtn = new QRadioButton(customframe);
        customradioBtn->setObjectName(QString::fromUtf8("customradioBtn"));

        horizontalLayout_13->addWidget(customradioBtn);


        horizontalLayout_12->addLayout(horizontalLayout_13);


        verticalLayout->addWidget(customframe);

        opframe = new QFrame(DisplayWindow);
        opframe->setObjectName(QString::fromUtf8("opframe"));
        opframe->setMinimumSize(QSize(550, 50));
        opframe->setMaximumSize(QSize(960, 50));
        opframe->setFrameShape(QFrame::Box);
        horizontalLayout_18 = new QHBoxLayout(opframe);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_21 = new QLabel(opframe);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(118, 30));
        label_21->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_19->addWidget(label_21);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_5);

        opHourCom = new QComboBox(opframe);
        opHourCom->setObjectName(QString::fromUtf8("opHourCom"));
        opHourCom->setMinimumSize(QSize(80, 32));
        opHourCom->setMaximumSize(QSize(80, 32));
        opHourCom->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_19->addWidget(opHourCom);

        opMinCom = new QComboBox(opframe);
        opMinCom->setObjectName(QString::fromUtf8("opMinCom"));
        opMinCom->setMinimumSize(QSize(80, 32));
        opMinCom->setMaximumSize(QSize(80, 32));
        opMinCom->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_19->addWidget(opMinCom);


        horizontalLayout_18->addLayout(horizontalLayout_19);


        verticalLayout->addWidget(opframe);

        clsframe = new QFrame(DisplayWindow);
        clsframe->setObjectName(QString::fromUtf8("clsframe"));
        clsframe->setMinimumSize(QSize(550, 50));
        clsframe->setMaximumSize(QSize(960, 50));
        clsframe->setFrameShape(QFrame::Box);
        horizontalLayout_10 = new QHBoxLayout(clsframe);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_10 = new QLabel(clsframe);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_11->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        clHourCom = new QComboBox(clsframe);
        clHourCom->setObjectName(QString::fromUtf8("clHourCom"));
        clHourCom->setMinimumSize(QSize(80, 32));
        clHourCom->setMaximumSize(QSize(80, 32));
        clHourCom->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_11->addWidget(clHourCom);

        clMinCom = new QComboBox(clsframe);
        clMinCom->setObjectName(QString::fromUtf8("clMinCom"));
        clMinCom->setMinimumSize(QSize(80, 32));
        clMinCom->setMaximumSize(QSize(80, 32));
        clMinCom->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_11->addWidget(clMinCom);


        horizontalLayout_10->addLayout(horizontalLayout_11);


        verticalLayout->addWidget(clsframe);

        temptframe = new QFrame(DisplayWindow);
        temptframe->setObjectName(QString::fromUtf8("temptframe"));
        temptframe->setMinimumSize(QSize(550, 50));
        temptframe->setMaximumSize(QSize(960, 50));
        temptframe->setFrameShape(QFrame::Box);
        horizontalLayout_16 = new QHBoxLayout(temptframe);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_18 = new QLabel(temptframe);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(118, 30));
        label_18->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_17->addWidget(label_18);

        label_19 = new QLabel(temptframe);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_17->addWidget(label_19);

        temptSlider = new QSlider(temptframe);
        temptSlider->setObjectName(QString::fromUtf8("temptSlider"));
        sizePolicy1.setHeightForWidth(temptSlider->sizePolicy().hasHeightForWidth());
        temptSlider->setSizePolicy(sizePolicy1);
        temptSlider->setStyleSheet(QString::fromUtf8(""));
        temptSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(temptSlider);

        label_20 = new QLabel(temptframe);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_17->addWidget(label_20);


        horizontalLayout_16->addLayout(horizontalLayout_17);


        verticalLayout->addWidget(temptframe);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        applyButton = new QPushButton(DisplayWindow);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setMinimumSize(QSize(120, 36));
        applyButton->setMaximumSize(QSize(16777215, 36));
        applyButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_5->addWidget(applyButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        retranslateUi(DisplayWindow);

        QMetaObject::connectSlotsByName(DisplayWindow);
    } // setupUi

    void retranslateUi(QWidget *DisplayWindow)
    {
        DisplayWindow->setWindowTitle(QApplication::translate("DisplayWindow", "Form", nullptr));
        titleLabel->setText(QApplication::translate("DisplayWindow", "Display", nullptr));
        primaryLabel->setText(QApplication::translate("DisplayWindow", "monitor", nullptr));
        mainScreenButton->setText(QApplication::translate("DisplayWindow", "set as home screen", nullptr));
        label->setText(QApplication::translate("DisplayWindow", "open monitor", nullptr));
        advancedBtn->setText(QApplication::translate("DisplayWindow", "Advanced", nullptr));
        unifyLabel->setText(QApplication::translate("DisplayWindow", "unify output", nullptr));
        label_3->setText(QApplication::translate("DisplayWindow", "screen brightness adjustment", nullptr));
        label_4->setText(QApplication::translate("DisplayWindow", "dark", nullptr));
        label_5->setText(QApplication::translate("DisplayWindow", "bright", nullptr));
        label_6->setText(QApplication::translate("DisplayWindow", "follow the sunrise and sunset(17:55-05:04)", nullptr));
        sunradioBtn->setText(QString());
        label_12->setText(QApplication::translate("DisplayWindow", "custom time", nullptr));
        customradioBtn->setText(QString());
        label_21->setText(QApplication::translate("DisplayWindow", "opening time", nullptr));
        label_10->setText(QApplication::translate("DisplayWindow", "closing time", nullptr));
        label_18->setText(QApplication::translate("DisplayWindow", "color temperature", nullptr));
        label_19->setText(QApplication::translate("DisplayWindow", "warm", nullptr));
        label_20->setText(QApplication::translate("DisplayWindow", "cold", nullptr));
        applyButton->setText(QApplication::translate("DisplayWindow", "apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayWindow: public Ui_DisplayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
