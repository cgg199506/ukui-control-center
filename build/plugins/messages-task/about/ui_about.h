/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout_6;
    QLabel *titleLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *versionLabel;
    QLabel *versionContent;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *logoLabel;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *kernalLabel;
    QLabel *kernalContent;
    QHBoxLayout *horizontalLayout_10;
    QLabel *cpuLabel;
    QLabel *cpuContent;
    QHBoxLayout *horizontalLayout_11;
    QLabel *memoryLabel;
    QLabel *memoryContent;
    QHBoxLayout *horizontalLayout_12;
    QLabel *diskLabel;
    QLabel *diskContent;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *desktopContent;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *userContent;
    QFrame *activeFrame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *activeContent;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLabel *serviceContent;
    QPushButton *activeButton;
    QPushButton *trialButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(800, 710);
        About->setMinimumSize(QSize(0, 0));
        About->setMaximumSize(QSize(16777215, 16777215));
        About->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_6 = new QVBoxLayout(About);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 32, -1);
        titleLabel = new QLabel(About);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        titleLabel->setFont(font);
        titleLabel->setScaledContents(true);

        verticalLayout_6->addWidget(titleLabel);

        widget = new QWidget(About);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, -1, -1);
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(550, 0));
        frame->setMaximumSize(QSize(960, 16777215));
        frame->setSizeIncrement(QSize(0, 0));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 2, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        versionLabel = new QLabel(frame);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(versionLabel->sizePolicy().hasHeightForWidth());
        versionLabel->setSizePolicy(sizePolicy2);
        versionLabel->setMinimumSize(QSize(90, 0));
        versionLabel->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(versionLabel);

        versionContent = new QLabel(frame);
        versionContent->setObjectName(QString::fromUtf8("versionContent"));

        horizontalLayout->addWidget(versionContent);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(90, 0));
        label_4->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_4);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        logoLabel = new QLabel(frame);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        sizePolicy.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy);
        logoLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(logoLabel);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(frame);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setMinimumSize(QSize(550, 0));
        frame_3->setMaximumSize(QSize(960, 16777215));
        frame_3->setSizeIncrement(QSize(0, 0));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        kernalLabel = new QLabel(frame_3);
        kernalLabel->setObjectName(QString::fromUtf8("kernalLabel"));
        sizePolicy2.setHeightForWidth(kernalLabel->sizePolicy().hasHeightForWidth());
        kernalLabel->setSizePolicy(sizePolicy2);
        kernalLabel->setMinimumSize(QSize(90, 0));
        kernalLabel->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_9->addWidget(kernalLabel);

        kernalContent = new QLabel(frame_3);
        kernalContent->setObjectName(QString::fromUtf8("kernalContent"));
        kernalContent->setWordWrap(true);

        horizontalLayout_9->addWidget(kernalContent);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        cpuLabel = new QLabel(frame_3);
        cpuLabel->setObjectName(QString::fromUtf8("cpuLabel"));
        sizePolicy2.setHeightForWidth(cpuLabel->sizePolicy().hasHeightForWidth());
        cpuLabel->setSizePolicy(sizePolicy2);
        cpuLabel->setMinimumSize(QSize(90, 0));
        cpuLabel->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_10->addWidget(cpuLabel);

        cpuContent = new QLabel(frame_3);
        cpuContent->setObjectName(QString::fromUtf8("cpuContent"));
        sizePolicy2.setHeightForWidth(cpuContent->sizePolicy().hasHeightForWidth());
        cpuContent->setSizePolicy(sizePolicy2);
        cpuContent->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_10->addWidget(cpuContent);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        memoryLabel = new QLabel(frame_3);
        memoryLabel->setObjectName(QString::fromUtf8("memoryLabel"));
        sizePolicy2.setHeightForWidth(memoryLabel->sizePolicy().hasHeightForWidth());
        memoryLabel->setSizePolicy(sizePolicy2);
        memoryLabel->setMinimumSize(QSize(90, 0));
        memoryLabel->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_11->addWidget(memoryLabel);

        memoryContent = new QLabel(frame_3);
        memoryContent->setObjectName(QString::fromUtf8("memoryContent"));
        sizePolicy2.setHeightForWidth(memoryContent->sizePolicy().hasHeightForWidth());
        memoryContent->setSizePolicy(sizePolicy2);
        memoryContent->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_11->addWidget(memoryContent);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        diskLabel = new QLabel(frame_3);
        diskLabel->setObjectName(QString::fromUtf8("diskLabel"));
        sizePolicy2.setHeightForWidth(diskLabel->sizePolicy().hasHeightForWidth());
        diskLabel->setSizePolicy(sizePolicy2);
        diskLabel->setMinimumSize(QSize(90, 0));
        diskLabel->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_12->addWidget(diskLabel);

        diskContent = new QLabel(frame_3);
        diskContent->setObjectName(QString::fromUtf8("diskContent"));
        sizePolicy2.setHeightForWidth(diskContent->sizePolicy().hasHeightForWidth());
        diskContent->setSizePolicy(sizePolicy2);
        diskContent->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(diskContent);


        verticalLayout_7->addLayout(horizontalLayout_12);


        verticalLayout_4->addWidget(frame_3);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 0));
        label_3->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_5->addWidget(label_3);

        desktopContent = new QLabel(frame_2);
        desktopContent->setObjectName(QString::fromUtf8("desktopContent"));

        horizontalLayout_5->addWidget(desktopContent);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(90, 0));
        label_6->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_6->addWidget(label_6);

        userContent = new QLabel(frame_2);
        userContent->setObjectName(QString::fromUtf8("userContent"));

        horizontalLayout_6->addWidget(userContent);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_4->addWidget(frame_2);

        activeFrame = new QFrame(widget);
        activeFrame->setObjectName(QString::fromUtf8("activeFrame"));
        activeFrame->setFrameShape(QFrame::Box);
        activeFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(activeFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(activeFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(label_5);

        activeContent = new QLabel(activeFrame);
        activeContent->setObjectName(QString::fromUtf8("activeContent"));

        horizontalLayout_7->addWidget(activeContent);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(activeFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(label_7);

        serviceContent = new QLabel(activeFrame);
        serviceContent->setObjectName(QString::fromUtf8("serviceContent"));

        horizontalLayout_8->addWidget(serviceContent);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_13->addLayout(verticalLayout_2);

        activeButton = new QPushButton(activeFrame);
        activeButton->setObjectName(QString::fromUtf8("activeButton"));
        sizePolicy1.setHeightForWidth(activeButton->sizePolicy().hasHeightForWidth());
        activeButton->setSizePolicy(sizePolicy1);
        activeButton->setMinimumSize(QSize(121, 37));
        activeButton->setMaximumSize(QSize(121, 37));

        horizontalLayout_13->addWidget(activeButton);


        verticalLayout_5->addLayout(horizontalLayout_13);


        verticalLayout_4->addWidget(activeFrame);

        trialButton = new QPushButton(widget);
        trialButton->setObjectName(QString::fromUtf8("trialButton"));
        trialButton->setMinimumSize(QSize(150, 0));
        trialButton->setMaximumSize(QSize(220, 16777215));
        trialButton->setSizeIncrement(QSize(0, 0));

        verticalLayout_4->addWidget(trialButton);


        verticalLayout_6->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        widget->raise();
        titleLabel->raise();

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        titleLabel->setText(QApplication::translate("About", "System Summary", nullptr));
        versionLabel->setText(QApplication::translate("About", "version", nullptr));
        versionContent->setText(QString());
        label_4->setText(QString());
        label_2->setText(QApplication::translate("About", "Copyright 2009-2021 @ Kylinos All rights reserved", nullptr));
        logoLabel->setText(QString());
        kernalLabel->setText(QApplication::translate("About", "Kernel", nullptr));
        kernalContent->setText(QString());
        cpuLabel->setText(QApplication::translate("About", "CPU", nullptr));
        cpuContent->setText(QString());
        memoryLabel->setText(QApplication::translate("About", "Memory", nullptr));
        memoryContent->setText(QString());
        diskLabel->setText(QApplication::translate("About", "Disk", nullptr));
        diskContent->setText(QString());
        label_3->setText(QApplication::translate("About", "Desktop", nullptr));
        desktopContent->setText(QString());
        label_6->setText(QApplication::translate("About", "User", nullptr));
        userContent->setText(QString());
        label_5->setText(QApplication::translate("About", "Active Status", nullptr));
        activeContent->setText(QString());
        label_7->setText(QApplication::translate("About", "Service serial number", nullptr));
        serviceContent->setText(QString());
        activeButton->setText(QApplication::translate("About", "Active", nullptr));
        trialButton->setText(QApplication::translate("About", "Trial version disclaimer", nullptr));
        Q_UNUSED(About);
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
