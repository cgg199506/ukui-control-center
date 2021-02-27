/********************************************************************************
** Form generated from reading UI file 'mousecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSECONTROL_H
#define UI_MOUSECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MouseControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *handFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *handLabel;
    QComboBox *handHabitComBox;
    QFrame *midSpeedFrame;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *slowLabel;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_6;
    QSlider *midHorSlider;
    QLabel *label_7;
    QFrame *doubleClickFrame;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *doubleClickHorLayout;
    QLabel *delayLabel;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_21;
    QSlider *doubleclickHorSlider;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QLabel *title2Label;
    QSpacerItem *verticalSpacer_10;
    QFrame *pointerSpeedFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *speedLabel;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_2;
    QSlider *pointerSpeedSlider;
    QLabel *label_3;
    QFrame *accelFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *accelLayout;
    QLabel *accelLabel;
    QFrame *visibilityFrame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *visibilityHorLayout;
    QLabel *visLabel;
    QSpacerItem *horizontalSpacer_3;
    QFrame *pointerSizeFrame;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *sizeLabel;
    QComboBox *pointerSizeComBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *title3Label;
    QSpacerItem *verticalSpacer_4;
    QFrame *flashingFrame;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *enableFlashingHorLayout;
    QLabel *flashLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *cursorWeightFrame;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLabel *label_14;
    QSlider *cursorWeightSlider;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QFrame *cursorSpeedFrame;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *cursorspdLabel;
    QLabel *label_17;
    QSlider *cursorSpeedSlider;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *MouseControl)
    {
        if (MouseControl->objectName().isEmpty())
            MouseControl->setObjectName(QString::fromUtf8("MouseControl"));
        MouseControl->resize(800, 817);
        MouseControl->setMinimumSize(QSize(0, 0));
        MouseControl->setMaximumSize(QSize(16777215, 16777215));
        MouseControl->setWindowTitle(QString::fromUtf8("Template"));
        verticalLayout_2 = new QVBoxLayout(MouseControl);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        titleLabel = new QLabel(MouseControl);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(titleLabel);

        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        handFrame = new QFrame(MouseControl);
        handFrame->setObjectName(QString::fromUtf8("handFrame"));
        handFrame->setMinimumSize(QSize(550, 50));
        handFrame->setMaximumSize(QSize(960, 50));
        handFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(handFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(16, 0, 16, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        handLabel = new QLabel(handFrame);
        handLabel->setObjectName(QString::fromUtf8("handLabel"));
        sizePolicy.setHeightForWidth(handLabel->sizePolicy().hasHeightForWidth());
        handLabel->setSizePolicy(sizePolicy);
        handLabel->setMinimumSize(QSize(128, 0));
        handLabel->setMaximumSize(QSize(128, 16777215));

        horizontalLayout->addWidget(handLabel);

        handHabitComBox = new QComboBox(handFrame);
        handHabitComBox->setObjectName(QString::fromUtf8("handHabitComBox"));
        handHabitComBox->setMinimumSize(QSize(0, 30));
        handHabitComBox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(handHabitComBox);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(handFrame);

        midSpeedFrame = new QFrame(MouseControl);
        midSpeedFrame->setObjectName(QString::fromUtf8("midSpeedFrame"));
        midSpeedFrame->setMinimumSize(QSize(550, 50));
        midSpeedFrame->setMaximumSize(QSize(960, 50));
        midSpeedFrame->setFrameShape(QFrame::Box);
        midSpeedFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_15 = new QHBoxLayout(midSpeedFrame);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(16, 0, 16, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        slowLabel = new QLabel(midSpeedFrame);
        slowLabel->setObjectName(QString::fromUtf8("slowLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slowLabel->sizePolicy().hasHeightForWidth());
        slowLabel->setSizePolicy(sizePolicy1);
        slowLabel->setMinimumSize(QSize(136, 0));
        slowLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(slowLabel);

        verticalSpacer_6 = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_6);

        label_6 = new QLabel(midSpeedFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(40, 0));
        label_6->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(label_6);

        midHorSlider = new QSlider(midSpeedFrame);
        midHorSlider->setObjectName(QString::fromUtf8("midHorSlider"));
        midHorSlider->setStyleSheet(QString::fromUtf8(""));
        midHorSlider->setMinimum(1);
        midHorSlider->setMaximum(10);
        midHorSlider->setPageStep(1);
        midHorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(midHorSlider);

        label_7 = new QLabel(midSpeedFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(40, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));
        label_7->setLayoutDirection(Qt::LeftToRight);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);


        horizontalLayout_15->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(midSpeedFrame);

        doubleClickFrame = new QFrame(MouseControl);
        doubleClickFrame->setObjectName(QString::fromUtf8("doubleClickFrame"));
        doubleClickFrame->setMinimumSize(QSize(550, 60));
        doubleClickFrame->setMaximumSize(QSize(960, 60));
        doubleClickFrame->setFrameShape(QFrame::Box);
        doubleClickFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_18 = new QHBoxLayout(doubleClickFrame);
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(16, 0, 16, 0);
        doubleClickHorLayout = new QHBoxLayout();
        doubleClickHorLayout->setSpacing(0);
        doubleClickHorLayout->setObjectName(QString::fromUtf8("doubleClickHorLayout"));
        delayLabel = new QLabel(doubleClickFrame);
        delayLabel->setObjectName(QString::fromUtf8("delayLabel"));
        sizePolicy1.setHeightForWidth(delayLabel->sizePolicy().hasHeightForWidth());
        delayLabel->setSizePolicy(sizePolicy1);
        delayLabel->setMinimumSize(QSize(136, 0));
        delayLabel->setMaximumSize(QSize(16777215, 16777215));

        doubleClickHorLayout->addWidget(delayLabel);

        verticalSpacer_7 = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        doubleClickHorLayout->addItem(verticalSpacer_7);

        label_21 = new QLabel(doubleClickFrame);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMinimumSize(QSize(40, 0));
        label_21->setMaximumSize(QSize(16777215, 16777215));

        doubleClickHorLayout->addWidget(label_21);

        doubleclickHorSlider = new QSlider(doubleClickFrame);
        doubleclickHorSlider->setObjectName(QString::fromUtf8("doubleclickHorSlider"));
        doubleclickHorSlider->setStyleSheet(QString::fromUtf8(""));
        doubleclickHorSlider->setMinimum(170);
        doubleclickHorSlider->setMaximum(1000);
        doubleclickHorSlider->setSingleStep(100);
        doubleclickHorSlider->setPageStep(100);
        doubleclickHorSlider->setOrientation(Qt::Horizontal);

        doubleClickHorLayout->addWidget(doubleclickHorSlider);

        label_22 = new QLabel(doubleClickFrame);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMinimumSize(QSize(40, 0));
        label_22->setMaximumSize(QSize(16777215, 16777215));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        doubleClickHorLayout->addWidget(label_22);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        doubleClickHorLayout->addItem(horizontalSpacer_4);


        horizontalLayout_18->addLayout(doubleClickHorLayout);


        verticalLayout_2->addWidget(doubleClickFrame);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        title2Label = new QLabel(MouseControl);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(title2Label);

        verticalSpacer_10 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_10);

        pointerSpeedFrame = new QFrame(MouseControl);
        pointerSpeedFrame->setObjectName(QString::fromUtf8("pointerSpeedFrame"));
        pointerSpeedFrame->setMinimumSize(QSize(550, 50));
        pointerSpeedFrame->setMaximumSize(QSize(960, 50));
        pointerSpeedFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(pointerSpeedFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(16, 0, 16, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, -1, -1);
        speedLabel = new QLabel(pointerSpeedFrame);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        sizePolicy.setHeightForWidth(speedLabel->sizePolicy().hasHeightForWidth());
        speedLabel->setSizePolicy(sizePolicy);
        speedLabel->setMinimumSize(QSize(136, 0));
        speedLabel->setMaximumSize(QSize(136, 16777215));

        horizontalLayout_3->addWidget(speedLabel);

        verticalSpacer_8 = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_8);

        label_2 = new QLabel(pointerSpeedFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(label_2);

        pointerSpeedSlider = new QSlider(pointerSpeedFrame);
        pointerSpeedSlider->setObjectName(QString::fromUtf8("pointerSpeedSlider"));
        pointerSpeedSlider->setStyleSheet(QString::fromUtf8(""));
        pointerSpeedSlider->setMinimum(100);
        pointerSpeedSlider->setMaximum(1000);
        pointerSpeedSlider->setSingleStep(50);
        pointerSpeedSlider->setPageStep(50);
        pointerSpeedSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(pointerSpeedSlider);

        label_3 = new QLabel(pointerSpeedFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(40, 0));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(pointerSpeedFrame);

        accelFrame = new QFrame(MouseControl);
        accelFrame->setObjectName(QString::fromUtf8("accelFrame"));
        accelFrame->setMinimumSize(QSize(550, 50));
        accelFrame->setMaximumSize(QSize(960, 50));
        accelFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(accelFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(16, 0, 16, 0);
        accelLayout = new QHBoxLayout();
        accelLayout->setSpacing(0);
        accelLayout->setObjectName(QString::fromUtf8("accelLayout"));
        accelLabel = new QLabel(accelFrame);
        accelLabel->setObjectName(QString::fromUtf8("accelLabel"));
        sizePolicy.setHeightForWidth(accelLabel->sizePolicy().hasHeightForWidth());
        accelLabel->setSizePolicy(sizePolicy);
        accelLabel->setMinimumSize(QSize(136, 0));
        accelLabel->setMaximumSize(QSize(136, 16777215));

        accelLayout->addWidget(accelLabel);


        horizontalLayout_6->addLayout(accelLayout);


        verticalLayout_2->addWidget(accelFrame);

        visibilityFrame = new QFrame(MouseControl);
        visibilityFrame->setObjectName(QString::fromUtf8("visibilityFrame"));
        visibilityFrame->setMinimumSize(QSize(550, 50));
        visibilityFrame->setMaximumSize(QSize(960, 50));
        visibilityFrame->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(visibilityFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(16, 0, 16, 0);
        visibilityHorLayout = new QHBoxLayout();
        visibilityHorLayout->setSpacing(6);
        visibilityHorLayout->setObjectName(QString::fromUtf8("visibilityHorLayout"));
        visLabel = new QLabel(visibilityFrame);
        visLabel->setObjectName(QString::fromUtf8("visLabel"));
        sizePolicy.setHeightForWidth(visLabel->sizePolicy().hasHeightForWidth());
        visLabel->setSizePolicy(sizePolicy);
        visLabel->setMinimumSize(QSize(128, 0));
        visLabel->setMaximumSize(QSize(16777215, 16777215));

        visibilityHorLayout->addWidget(visLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        visibilityHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_8->addLayout(visibilityHorLayout);


        verticalLayout_2->addWidget(visibilityFrame);

        pointerSizeFrame = new QFrame(MouseControl);
        pointerSizeFrame->setObjectName(QString::fromUtf8("pointerSizeFrame"));
        pointerSizeFrame->setMinimumSize(QSize(550, 50));
        pointerSizeFrame->setMaximumSize(QSize(960, 50));
        pointerSizeFrame->setFrameShape(QFrame::Box);
        horizontalLayout_10 = new QHBoxLayout(pointerSizeFrame);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(16, 0, 16, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        sizeLabel = new QLabel(pointerSizeFrame);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));
        sizePolicy.setHeightForWidth(sizeLabel->sizePolicy().hasHeightForWidth());
        sizeLabel->setSizePolicy(sizePolicy);
        sizeLabel->setMinimumSize(QSize(128, 0));
        sizeLabel->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_9->addWidget(sizeLabel);

        pointerSizeComBox = new QComboBox(pointerSizeFrame);
        pointerSizeComBox->setObjectName(QString::fromUtf8("pointerSizeComBox"));
        pointerSizeComBox->setMinimumSize(QSize(0, 30));
        pointerSizeComBox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_9->addWidget(pointerSizeComBox);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_2->addWidget(pointerSizeFrame);

        verticalSpacer_2 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        title3Label = new QLabel(MouseControl);
        title3Label->setObjectName(QString::fromUtf8("title3Label"));
        sizePolicy.setHeightForWidth(title3Label->sizePolicy().hasHeightForWidth());
        title3Label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(title3Label);

        verticalSpacer_4 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        flashingFrame = new QFrame(MouseControl);
        flashingFrame->setObjectName(QString::fromUtf8("flashingFrame"));
        flashingFrame->setMinimumSize(QSize(550, 50));
        flashingFrame->setMaximumSize(QSize(960, 50));
        flashingFrame->setFrameShape(QFrame::Box);
        horizontalLayout_16 = new QHBoxLayout(flashingFrame);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(16, 0, 16, 0);
        enableFlashingHorLayout = new QHBoxLayout();
        enableFlashingHorLayout->setSpacing(0);
        enableFlashingHorLayout->setObjectName(QString::fromUtf8("enableFlashingHorLayout"));
        flashLabel = new QLabel(flashingFrame);
        flashLabel->setObjectName(QString::fromUtf8("flashLabel"));
        sizePolicy.setHeightForWidth(flashLabel->sizePolicy().hasHeightForWidth());
        flashLabel->setSizePolicy(sizePolicy);

        enableFlashingHorLayout->addWidget(flashLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        enableFlashingHorLayout->addItem(horizontalSpacer);


        horizontalLayout_16->addLayout(enableFlashingHorLayout);


        verticalLayout_2->addWidget(flashingFrame);

        cursorWeightFrame = new QFrame(MouseControl);
        cursorWeightFrame->setObjectName(QString::fromUtf8("cursorWeightFrame"));
        cursorWeightFrame->setMinimumSize(QSize(550, 50));
        cursorWeightFrame->setMaximumSize(QSize(960, 50));
        cursorWeightFrame->setFrameShape(QFrame::Box);
        horizontalLayout_12 = new QHBoxLayout(cursorWeightFrame);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(16, 0, 16, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(cursorWeightFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setMinimumSize(QSize(136, 0));
        label_13->setMaximumSize(QSize(136, 16777215));

        horizontalLayout_11->addWidget(label_13);

        label_14 = new QLabel(cursorWeightFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(40, 0));
        label_14->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_11->addWidget(label_14);

        cursorWeightSlider = new QSlider(cursorWeightFrame);
        cursorWeightSlider->setObjectName(QString::fromUtf8("cursorWeightSlider"));
        cursorWeightSlider->setStyleSheet(QString::fromUtf8(""));
        cursorWeightSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(cursorWeightSlider);

        label_15 = new QLabel(cursorWeightFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setMinimumSize(QSize(50, 0));
        label_15->setMaximumSize(QSize(50, 16777215));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(label_15);

        horizontalSpacer_2 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(cursorWeightFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(80, 30));
        lineEdit->setSizeIncrement(QSize(80, 30));

        horizontalLayout_11->addWidget(lineEdit);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(cursorWeightFrame);

        cursorSpeedFrame = new QFrame(MouseControl);
        cursorSpeedFrame->setObjectName(QString::fromUtf8("cursorSpeedFrame"));
        cursorSpeedFrame->setMinimumSize(QSize(550, 50));
        cursorSpeedFrame->setMaximumSize(QSize(960, 50));
        cursorSpeedFrame->setFrameShape(QFrame::Box);
        horizontalLayout_14 = new QHBoxLayout(cursorSpeedFrame);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(16, 0, 16, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        cursorspdLabel = new QLabel(cursorSpeedFrame);
        cursorspdLabel->setObjectName(QString::fromUtf8("cursorspdLabel"));
        sizePolicy.setHeightForWidth(cursorspdLabel->sizePolicy().hasHeightForWidth());
        cursorspdLabel->setSizePolicy(sizePolicy);
        cursorspdLabel->setMinimumSize(QSize(136, 0));
        cursorspdLabel->setMaximumSize(QSize(136, 16777215));

        horizontalLayout_13->addWidget(cursorspdLabel);

        label_17 = new QLabel(cursorSpeedFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setMinimumSize(QSize(40, 0));
        label_17->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_13->addWidget(label_17);

        cursorSpeedSlider = new QSlider(cursorSpeedFrame);
        cursorSpeedSlider->setObjectName(QString::fromUtf8("cursorSpeedSlider"));
        cursorSpeedSlider->setStyleSheet(QString::fromUtf8(""));
        cursorSpeedSlider->setMinimum(100);
        cursorSpeedSlider->setMaximum(2500);
        cursorSpeedSlider->setSingleStep(200);
        cursorSpeedSlider->setPageStep(200);
        cursorSpeedSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(cursorSpeedSlider);

        label_18 = new QLabel(cursorSpeedFrame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setMinimumSize(QSize(40, 0));
        label_18->setMaximumSize(QSize(40, 16777215));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_18);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_2->addWidget(cursorSpeedFrame);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);


        retranslateUi(MouseControl);

        QMetaObject::connectSlotsByName(MouseControl);
    } // setupUi

    void retranslateUi(QWidget *MouseControl)
    {
        titleLabel->setText(QApplication::translate("MouseControl", "Mouse Key Settings", nullptr));
        handLabel->setText(QApplication::translate("MouseControl", "Hand habit", nullptr));
        slowLabel->setText(QApplication::translate("MouseControl", "mouse wheel speed", nullptr));
        label_6->setText(QApplication::translate("MouseControl", "Slow", nullptr));
        label_7->setText(QApplication::translate("MouseControl", "Fast", nullptr));
        delayLabel->setText(QApplication::translate("MouseControl", "Doubleclick  delay", nullptr));
        label_21->setText(QApplication::translate("MouseControl", "Short", nullptr));
        label_22->setText(QApplication::translate("MouseControl", "Long", nullptr));
        title2Label->setText(QApplication::translate("MouseControl", "Pointer Settings", nullptr));
        speedLabel->setText(QApplication::translate("MouseControl", "Speed", nullptr));
        label_2->setText(QApplication::translate("MouseControl", "Slow", nullptr));
        label_3->setText(QApplication::translate("MouseControl", "Fast", nullptr));
        accelLabel->setText(QApplication::translate("MouseControl", "Acceleration", nullptr));
        visLabel->setText(QApplication::translate("MouseControl", "Visibility", nullptr));
        sizeLabel->setText(QApplication::translate("MouseControl", "Pointer size", nullptr));
        title3Label->setText(QApplication::translate("MouseControl", "Cursor Settings", nullptr));
        flashLabel->setText(QApplication::translate("MouseControl", "Enable flashing on text area", nullptr));
        label_13->setText(QApplication::translate("MouseControl", "Cursor weight", nullptr));
        label_14->setText(QApplication::translate("MouseControl", "Thin", nullptr));
        label_15->setText(QApplication::translate("MouseControl", "Coarse", nullptr));
        cursorspdLabel->setText(QApplication::translate("MouseControl", "Cursor speed", nullptr));
        label_17->setText(QApplication::translate("MouseControl", "Fast", nullptr));
        label_18->setText(QApplication::translate("MouseControl", "Slow", nullptr));
        Q_UNUSED(MouseControl);
    } // retranslateUi

};

namespace Ui {
    class MouseControl: public Ui_MouseControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSECONTROL_H
