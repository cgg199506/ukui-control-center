/********************************************************************************
** Form generated from reading UI file 'desktop.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOP_H
#define UI_DESKTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Desktop
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QVBoxLayout *verticalLayout;
    QFrame *deskComputerFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *deskComputerHorLayout;
    QLabel *deskComputerLabel;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer;
    QFrame *deskTrashFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *deskTrashHorLayout;
    QLabel *deskTrashLabel;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QFrame *deskHomeFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *deskHomeHorLayout;
    QLabel *deskHomeLabel;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_3;
    QFrame *deskVolumeFrame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *deskVolumeHorLayout;
    QLabel *deskVolumeLabel;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_4;
    QFrame *deskNetworkFrame;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *deskNetworkHorLayout;
    QLabel *deskNetworkLabel;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title2Label;
    QFrame *fullScreenMenuFrame;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *fullScreenMenuLayout;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_11;
    QLabel *menuLabel;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *menuComputerFrame;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *menuComputerHorLayout;
    QLabel *menuComputerLabel;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_6;
    QFrame *menuTrashFrame;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *menuSettingHorLayout;
    QLabel *menuSettingsLabel;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_9;
    QFrame *menuFilesystemFrame;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *menuFilesystemHorLayout;
    QLabel *menuFilesystemLabel;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_8;
    QFrame *menuSettingFrame;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *menuTrashHorLayout;
    QLabel *menuTrashLabel;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QLabel *title3Label;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Desktop)
    {
        if (Desktop->objectName().isEmpty())
            Desktop->setObjectName(QString::fromUtf8("Desktop"));
        Desktop->resize(795, 814);
        Desktop->setMinimumSize(QSize(0, 0));
        Desktop->setMaximumSize(QSize(16777215, 16777215));
        Desktop->setWindowTitle(QString::fromUtf8("Desktop"));
        verticalLayout_3 = new QVBoxLayout(Desktop);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 32, 48);
        titleLabel = new QLabel(Desktop);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(titleLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        deskComputerFrame = new QFrame(Desktop);
        deskComputerFrame->setObjectName(QString::fromUtf8("deskComputerFrame"));
        deskComputerFrame->setMinimumSize(QSize(550, 50));
        deskComputerFrame->setMaximumSize(QSize(960, 50));
        deskComputerFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(deskComputerFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        deskComputerHorLayout = new QHBoxLayout();
        deskComputerHorLayout->setSpacing(8);
        deskComputerHorLayout->setObjectName(QString::fromUtf8("deskComputerHorLayout"));
        deskComputerHorLayout->setContentsMargins(16, -1, 16, -1);
        deskComputerLabel = new QLabel(deskComputerFrame);
        deskComputerLabel->setObjectName(QString::fromUtf8("deskComputerLabel"));
        sizePolicy.setHeightForWidth(deskComputerLabel->sizePolicy().hasHeightForWidth());
        deskComputerLabel->setSizePolicy(sizePolicy);
        deskComputerLabel->setScaledContents(true);

        deskComputerHorLayout->addWidget(deskComputerLabel);

        label_11 = new QLabel(deskComputerFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        deskComputerHorLayout->addWidget(label_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        deskComputerHorLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(deskComputerHorLayout);


        verticalLayout->addWidget(deskComputerFrame);

        deskTrashFrame = new QFrame(Desktop);
        deskTrashFrame->setObjectName(QString::fromUtf8("deskTrashFrame"));
        deskTrashFrame->setMinimumSize(QSize(550, 50));
        deskTrashFrame->setMaximumSize(QSize(960, 50));
        deskTrashFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(deskTrashFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        deskTrashHorLayout = new QHBoxLayout();
        deskTrashHorLayout->setSpacing(8);
        deskTrashHorLayout->setObjectName(QString::fromUtf8("deskTrashHorLayout"));
        deskTrashHorLayout->setContentsMargins(16, -1, 16, -1);
        deskTrashLabel = new QLabel(deskTrashFrame);
        deskTrashLabel->setObjectName(QString::fromUtf8("deskTrashLabel"));
        sizePolicy.setHeightForWidth(deskTrashLabel->sizePolicy().hasHeightForWidth());
        deskTrashLabel->setSizePolicy(sizePolicy);
        deskTrashLabel->setScaledContents(true);

        deskTrashHorLayout->addWidget(deskTrashLabel);

        label_12 = new QLabel(deskTrashFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        deskTrashHorLayout->addWidget(label_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        deskTrashHorLayout->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(deskTrashHorLayout);


        verticalLayout->addWidget(deskTrashFrame);

        deskHomeFrame = new QFrame(Desktop);
        deskHomeFrame->setObjectName(QString::fromUtf8("deskHomeFrame"));
        deskHomeFrame->setMinimumSize(QSize(550, 50));
        deskHomeFrame->setMaximumSize(QSize(960, 50));
        deskHomeFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(deskHomeFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        deskHomeHorLayout = new QHBoxLayout();
        deskHomeHorLayout->setSpacing(8);
        deskHomeHorLayout->setObjectName(QString::fromUtf8("deskHomeHorLayout"));
        deskHomeHorLayout->setContentsMargins(16, -1, 16, -1);
        deskHomeLabel = new QLabel(deskHomeFrame);
        deskHomeLabel->setObjectName(QString::fromUtf8("deskHomeLabel"));
        sizePolicy.setHeightForWidth(deskHomeLabel->sizePolicy().hasHeightForWidth());
        deskHomeLabel->setSizePolicy(sizePolicy);
        deskHomeLabel->setScaledContents(true);

        deskHomeHorLayout->addWidget(deskHomeLabel);

        label_13 = new QLabel(deskHomeFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        deskHomeHorLayout->addWidget(label_13);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        deskHomeHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(deskHomeHorLayout);


        verticalLayout->addWidget(deskHomeFrame);

        deskVolumeFrame = new QFrame(Desktop);
        deskVolumeFrame->setObjectName(QString::fromUtf8("deskVolumeFrame"));
        deskVolumeFrame->setMinimumSize(QSize(550, 50));
        deskVolumeFrame->setMaximumSize(QSize(960, 50));
        deskVolumeFrame->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(deskVolumeFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        deskVolumeHorLayout = new QHBoxLayout();
        deskVolumeHorLayout->setSpacing(8);
        deskVolumeHorLayout->setObjectName(QString::fromUtf8("deskVolumeHorLayout"));
        deskVolumeHorLayout->setContentsMargins(16, -1, 16, -1);
        deskVolumeLabel = new QLabel(deskVolumeFrame);
        deskVolumeLabel->setObjectName(QString::fromUtf8("deskVolumeLabel"));
        sizePolicy.setHeightForWidth(deskVolumeLabel->sizePolicy().hasHeightForWidth());
        deskVolumeLabel->setSizePolicy(sizePolicy);
        deskVolumeLabel->setScaledContents(true);

        deskVolumeHorLayout->addWidget(deskVolumeLabel);

        label_14 = new QLabel(deskVolumeFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        deskVolumeHorLayout->addWidget(label_14);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        deskVolumeHorLayout->addItem(horizontalSpacer_4);


        horizontalLayout_8->addLayout(deskVolumeHorLayout);


        verticalLayout->addWidget(deskVolumeFrame);

        deskNetworkFrame = new QFrame(Desktop);
        deskNetworkFrame->setObjectName(QString::fromUtf8("deskNetworkFrame"));
        deskNetworkFrame->setMinimumSize(QSize(550, 50));
        deskNetworkFrame->setMaximumSize(QSize(960, 50));
        deskNetworkFrame->setFrameShape(QFrame::Box);
        horizontalLayout_10 = new QHBoxLayout(deskNetworkFrame);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        deskNetworkHorLayout = new QHBoxLayout();
        deskNetworkHorLayout->setSpacing(8);
        deskNetworkHorLayout->setObjectName(QString::fromUtf8("deskNetworkHorLayout"));
        deskNetworkHorLayout->setContentsMargins(16, -1, 16, -1);
        deskNetworkLabel = new QLabel(deskNetworkFrame);
        deskNetworkLabel->setObjectName(QString::fromUtf8("deskNetworkLabel"));
        sizePolicy.setHeightForWidth(deskNetworkLabel->sizePolicy().hasHeightForWidth());
        deskNetworkLabel->setSizePolicy(sizePolicy);
        deskNetworkLabel->setScaledContents(true);

        deskNetworkHorLayout->addWidget(deskNetworkLabel);

        label_15 = new QLabel(deskNetworkFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        deskNetworkHorLayout->addWidget(label_15);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        deskNetworkHorLayout->addItem(horizontalSpacer_5);


        horizontalLayout_10->addLayout(deskNetworkHorLayout);


        verticalLayout->addWidget(deskNetworkFrame);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        title2Label = new QLabel(Desktop);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));

        horizontalLayout_3->addWidget(title2Label);


        verticalLayout_3->addLayout(horizontalLayout_3);

        fullScreenMenuFrame = new QFrame(Desktop);
        fullScreenMenuFrame->setObjectName(QString::fromUtf8("fullScreenMenuFrame"));
        fullScreenMenuFrame->setMinimumSize(QSize(550, 50));
        fullScreenMenuFrame->setMaximumSize(QSize(960, 50));
        fullScreenMenuFrame->setFrameShape(QFrame::Box);
        horizontalLayout_13 = new QHBoxLayout(fullScreenMenuFrame);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        fullScreenMenuLayout = new QHBoxLayout();
        fullScreenMenuLayout->setSpacing(8);
        fullScreenMenuLayout->setObjectName(QString::fromUtf8("fullScreenMenuLayout"));
        fullScreenMenuLayout->setContentsMargins(16, -1, 16, -1);
        label_21 = new QLabel(fullScreenMenuFrame);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        fullScreenMenuLayout->addWidget(label_21);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        fullScreenMenuLayout->addItem(horizontalSpacer_11);


        horizontalLayout_13->addLayout(fullScreenMenuLayout);


        verticalLayout_3->addWidget(fullScreenMenuFrame);

        menuLabel = new QLabel(Desktop);
        menuLabel->setObjectName(QString::fromUtf8("menuLabel"));
        sizePolicy.setHeightForWidth(menuLabel->sizePolicy().hasHeightForWidth());
        menuLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(menuLabel);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        menuComputerFrame = new QFrame(Desktop);
        menuComputerFrame->setObjectName(QString::fromUtf8("menuComputerFrame"));
        menuComputerFrame->setMinimumSize(QSize(550, 50));
        menuComputerFrame->setMaximumSize(QSize(960, 50));
        menuComputerFrame->setFrameShape(QFrame::Box);
        horizontalLayout_12 = new QHBoxLayout(menuComputerFrame);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        menuComputerHorLayout = new QHBoxLayout();
        menuComputerHorLayout->setSpacing(8);
        menuComputerHorLayout->setObjectName(QString::fromUtf8("menuComputerHorLayout"));
        menuComputerHorLayout->setContentsMargins(16, -1, 16, -1);
        menuComputerLabel = new QLabel(menuComputerFrame);
        menuComputerLabel->setObjectName(QString::fromUtf8("menuComputerLabel"));
        sizePolicy.setHeightForWidth(menuComputerLabel->sizePolicy().hasHeightForWidth());
        menuComputerLabel->setSizePolicy(sizePolicy);
        menuComputerLabel->setScaledContents(true);

        menuComputerHorLayout->addWidget(menuComputerLabel);

        label_16 = new QLabel(menuComputerFrame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        menuComputerHorLayout->addWidget(label_16);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        menuComputerHorLayout->addItem(horizontalSpacer_6);


        horizontalLayout_12->addLayout(menuComputerHorLayout);


        verticalLayout_2->addWidget(menuComputerFrame);

        menuTrashFrame = new QFrame(Desktop);
        menuTrashFrame->setObjectName(QString::fromUtf8("menuTrashFrame"));
        menuTrashFrame->setMinimumSize(QSize(550, 50));
        menuTrashFrame->setMaximumSize(QSize(960, 50));
        menuTrashFrame->setFrameShape(QFrame::Box);
        horizontalLayout_14 = new QHBoxLayout(menuTrashFrame);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        menuSettingHorLayout = new QHBoxLayout();
        menuSettingHorLayout->setSpacing(8);
        menuSettingHorLayout->setObjectName(QString::fromUtf8("menuSettingHorLayout"));
        menuSettingHorLayout->setContentsMargins(16, -1, 16, -1);
        menuSettingsLabel = new QLabel(menuTrashFrame);
        menuSettingsLabel->setObjectName(QString::fromUtf8("menuSettingsLabel"));
        sizePolicy.setHeightForWidth(menuSettingsLabel->sizePolicy().hasHeightForWidth());
        menuSettingsLabel->setSizePolicy(sizePolicy);
        menuSettingsLabel->setScaledContents(true);

        menuSettingHorLayout->addWidget(menuSettingsLabel);

        label_19 = new QLabel(menuTrashFrame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);

        menuSettingHorLayout->addWidget(label_19);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        menuSettingHorLayout->addItem(horizontalSpacer_9);


        horizontalLayout_14->addLayout(menuSettingHorLayout);


        verticalLayout_2->addWidget(menuTrashFrame);

        menuFilesystemFrame = new QFrame(Desktop);
        menuFilesystemFrame->setObjectName(QString::fromUtf8("menuFilesystemFrame"));
        menuFilesystemFrame->setMinimumSize(QSize(550, 50));
        menuFilesystemFrame->setMaximumSize(QSize(960, 50));
        menuFilesystemFrame->setFrameShape(QFrame::Box);
        horizontalLayout_16 = new QHBoxLayout(menuFilesystemFrame);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        menuFilesystemHorLayout = new QHBoxLayout();
        menuFilesystemHorLayout->setSpacing(8);
        menuFilesystemHorLayout->setObjectName(QString::fromUtf8("menuFilesystemHorLayout"));
        menuFilesystemHorLayout->setContentsMargins(16, -1, 16, -1);
        menuFilesystemLabel = new QLabel(menuFilesystemFrame);
        menuFilesystemLabel->setObjectName(QString::fromUtf8("menuFilesystemLabel"));
        sizePolicy.setHeightForWidth(menuFilesystemLabel->sizePolicy().hasHeightForWidth());
        menuFilesystemLabel->setSizePolicy(sizePolicy);
        menuFilesystemLabel->setScaledContents(true);

        menuFilesystemHorLayout->addWidget(menuFilesystemLabel);

        label_18 = new QLabel(menuFilesystemFrame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        menuFilesystemHorLayout->addWidget(label_18);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        menuFilesystemHorLayout->addItem(horizontalSpacer_8);


        horizontalLayout_16->addLayout(menuFilesystemHorLayout);


        verticalLayout_2->addWidget(menuFilesystemFrame);

        menuSettingFrame = new QFrame(Desktop);
        menuSettingFrame->setObjectName(QString::fromUtf8("menuSettingFrame"));
        menuSettingFrame->setMinimumSize(QSize(550, 50));
        menuSettingFrame->setMaximumSize(QSize(960, 50));
        menuSettingFrame->setFrameShape(QFrame::Box);
        horizontalLayout_18 = new QHBoxLayout(menuSettingFrame);
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        menuTrashHorLayout = new QHBoxLayout();
        menuTrashHorLayout->setSpacing(8);
        menuTrashHorLayout->setObjectName(QString::fromUtf8("menuTrashHorLayout"));
        menuTrashHorLayout->setContentsMargins(16, -1, 16, -1);
        menuTrashLabel = new QLabel(menuSettingFrame);
        menuTrashLabel->setObjectName(QString::fromUtf8("menuTrashLabel"));
        sizePolicy.setHeightForWidth(menuTrashLabel->sizePolicy().hasHeightForWidth());
        menuTrashLabel->setSizePolicy(sizePolicy);
        menuTrashLabel->setScaledContents(true);

        menuTrashHorLayout->addWidget(menuTrashLabel);

        label_17 = new QLabel(menuSettingFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        menuTrashHorLayout->addWidget(label_17);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        menuTrashHorLayout->addItem(horizontalSpacer_7);


        horizontalLayout_18->addLayout(menuTrashHorLayout);


        verticalLayout_2->addWidget(menuSettingFrame);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 9);
        title3Label = new QLabel(Desktop);
        title3Label->setObjectName(QString::fromUtf8("title3Label"));

        horizontalLayout->addWidget(title3Label);


        verticalLayout_3->addLayout(horizontalLayout);

        listWidget = new QListWidget(Desktop);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(550, 0));
        listWidget->setMaximumSize(QSize(960, 16777215));

        verticalLayout_3->addWidget(listWidget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        retranslateUi(Desktop);

        QMetaObject::connectSlotsByName(Desktop);
    } // setupUi

    void retranslateUi(QWidget *Desktop)
    {
        titleLabel->setText(QApplication::translate("Desktop", "Icon Show On Desktop", nullptr));
        deskComputerLabel->setText(QString());
        label_11->setText(QApplication::translate("Desktop", "Computerdesktop", nullptr));
        deskTrashLabel->setText(QString());
        label_12->setText(QApplication::translate("Desktop", "Trashdesktop", nullptr));
        deskHomeLabel->setText(QString());
        label_13->setText(QApplication::translate("Desktop", "Homedesktop", nullptr));
        deskVolumeLabel->setText(QString());
        label_14->setText(QApplication::translate("Desktop", "Volumedesktop", nullptr));
        deskNetworkLabel->setText(QString());
        label_15->setText(QApplication::translate("Desktop", "Networkdesktop", nullptr));
        title2Label->setText(QApplication::translate("Desktop", "Set Start Menu", nullptr));
        label_21->setText(QApplication::translate("Desktop", "Always use the start menu in full screen", nullptr));
        menuLabel->setText(QApplication::translate("Desktop", "Icon Lock on Menu", nullptr));
        menuComputerLabel->setText(QString());
        label_16->setText(QApplication::translate("Desktop", "Computermenu", nullptr));
        menuSettingsLabel->setText(QString());
        label_19->setText(QApplication::translate("Desktop", "Settingmenu", nullptr));
        menuFilesystemLabel->setText(QString());
        label_18->setText(QApplication::translate("Desktop", "Filesystemmenu", nullptr));
        menuTrashLabel->setText(QString());
        label_17->setText(QApplication::translate("Desktop", "Trashmenu", nullptr));
        title3Label->setText(QApplication::translate("Desktop", "Tray icon", nullptr));
        Q_UNUSED(Desktop);
    } // retranslateUi

};

namespace Ui {
    class Desktop: public Ui_Desktop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOP_H
