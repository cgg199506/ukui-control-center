/********************************************************************************
** Form generated from reading UI file 'power.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWER_H
#define UI_POWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Power
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *powerLayout;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QFrame *balanceFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *balanceLabel;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *balanceRadioBtn;
    QFrame *savingFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *saveLabel;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *savingRadioBtn;
    QVBoxLayout *verticalLayout_5;
    QFrame *customFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *customLabel;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *custdomRadioBtn;
    QFrame *custom1Frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *acBtn;
    QPushButton *batteryBtn;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QLabel *sleepLabel;
    QComboBox *sleepComboBox;
    QFrame *custom2Frame;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *closeLabel;
    QComboBox *closeComboBox;
    QFrame *closeLidFrame;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_12;
    QComboBox *closeLidCombo;
    QFrame *darkenFrame;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QComboBox *darkenCombo;
    QSpacerItem *verticalSpacer_2;
    QLabel *title2Label;
    QFrame *iconFrame;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QComboBox *iconComboBox;
    QSpacerItem *verticalSpacer_3;
    QButtonGroup *powerModeBtnGroup;
    QButtonGroup *powerTypeBtnGroup;

    void setupUi(QWidget *Power)
    {
        if (Power->objectName().isEmpty())
            Power->setObjectName(QString::fromUtf8("Power"));
        Power->resize(800, 772);
        Power->setMinimumSize(QSize(0, 0));
        Power->setMaximumSize(QSize(16777215, 16777215));
        Power->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(Power);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        widget = new QWidget(Power);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        powerLayout = new QVBoxLayout();
        powerLayout->setSpacing(8);
        powerLayout->setObjectName(QString::fromUtf8("powerLayout"));
        powerLayout->setContentsMargins(-1, -1, -1, 20);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        powerLayout->addWidget(titleLabel);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        powerLayout->addItem(verticalSpacer);

        balanceFrame = new QFrame(widget);
        balanceFrame->setObjectName(QString::fromUtf8("balanceFrame"));
        balanceFrame->setMinimumSize(QSize(0, 50));
        balanceFrame->setMaximumSize(QSize(16777215, 50));
        balanceFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(balanceFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(16, -1, 16, -1);
        balanceLabel = new QLabel(balanceFrame);
        balanceLabel->setObjectName(QString::fromUtf8("balanceLabel"));
        sizePolicy.setHeightForWidth(balanceLabel->sizePolicy().hasHeightForWidth());
        balanceLabel->setSizePolicy(sizePolicy);
        balanceLabel->setScaledContents(true);

        horizontalLayout->addWidget(balanceLabel);

        label_3 = new QLabel(balanceFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setScaledContents(true);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        balanceRadioBtn = new QRadioButton(balanceFrame);
        powerModeBtnGroup = new QButtonGroup(Power);
        powerModeBtnGroup->setObjectName(QString::fromUtf8("powerModeBtnGroup"));
        powerModeBtnGroup->addButton(balanceRadioBtn);
        balanceRadioBtn->setObjectName(QString::fromUtf8("balanceRadioBtn"));
        sizePolicy.setHeightForWidth(balanceRadioBtn->sizePolicy().hasHeightForWidth());
        balanceRadioBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(balanceRadioBtn);


        horizontalLayout_2->addLayout(horizontalLayout);


        powerLayout->addWidget(balanceFrame);

        savingFrame = new QFrame(widget);
        savingFrame->setObjectName(QString::fromUtf8("savingFrame"));
        savingFrame->setMinimumSize(QSize(0, 50));
        savingFrame->setMaximumSize(QSize(16777215, 50));
        savingFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(savingFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(16, -1, 16, -1);
        saveLabel = new QLabel(savingFrame);
        saveLabel->setObjectName(QString::fromUtf8("saveLabel"));
        sizePolicy.setHeightForWidth(saveLabel->sizePolicy().hasHeightForWidth());
        saveLabel->setSizePolicy(sizePolicy);
        saveLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(saveLabel);

        label_5 = new QLabel(savingFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setScaledContents(true);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        savingRadioBtn = new QRadioButton(savingFrame);
        powerModeBtnGroup->addButton(savingRadioBtn);
        savingRadioBtn->setObjectName(QString::fromUtf8("savingRadioBtn"));
        sizePolicy.setHeightForWidth(savingRadioBtn->sizePolicy().hasHeightForWidth());
        savingRadioBtn->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(savingRadioBtn);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        powerLayout->addWidget(savingFrame);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 10);
        customFrame = new QFrame(widget);
        customFrame->setObjectName(QString::fromUtf8("customFrame"));
        customFrame->setMinimumSize(QSize(0, 50));
        customFrame->setMaximumSize(QSize(16777215, 50));
        customFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(customFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(16, -1, 16, -1);
        customLabel = new QLabel(customFrame);
        customLabel->setObjectName(QString::fromUtf8("customLabel"));
        sizePolicy.setHeightForWidth(customLabel->sizePolicy().hasHeightForWidth());
        customLabel->setSizePolicy(sizePolicy);
        customLabel->setScaledContents(true);

        horizontalLayout_5->addWidget(customLabel);

        label_7 = new QLabel(customFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setScaledContents(true);

        horizontalLayout_5->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        custdomRadioBtn = new QRadioButton(customFrame);
        powerModeBtnGroup->addButton(custdomRadioBtn);
        custdomRadioBtn->setObjectName(QString::fromUtf8("custdomRadioBtn"));
        sizePolicy.setHeightForWidth(custdomRadioBtn->sizePolicy().hasHeightForWidth());
        custdomRadioBtn->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(custdomRadioBtn);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_5->addWidget(customFrame);

        custom1Frame = new QFrame(widget);
        custom1Frame->setObjectName(QString::fromUtf8("custom1Frame"));
        custom1Frame->setMinimumSize(QSize(0, 118));
        custom1Frame->setMaximumSize(QSize(16777215, 118));
        custom1Frame->setFrameShape(QFrame::Box);
        verticalLayout_3 = new QVBoxLayout(custom1Frame);
        verticalLayout_3->setSpacing(16);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(24);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, -1, 16, -1);
        acBtn = new QPushButton(custom1Frame);
        powerTypeBtnGroup = new QButtonGroup(Power);
        powerTypeBtnGroup->setObjectName(QString::fromUtf8("powerTypeBtnGroup"));
        powerTypeBtnGroup->addButton(acBtn);
        acBtn->setObjectName(QString::fromUtf8("acBtn"));
        sizePolicy.setHeightForWidth(acBtn->sizePolicy().hasHeightForWidth());
        acBtn->setSizePolicy(sizePolicy);
        acBtn->setMinimumSize(QSize(120, 36));
        acBtn->setMaximumSize(QSize(120, 36));
        acBtn->setCheckable(true);
        acBtn->setFlat(true);

        horizontalLayout_7->addWidget(acBtn);

        batteryBtn = new QPushButton(custom1Frame);
        powerTypeBtnGroup->addButton(batteryBtn);
        batteryBtn->setObjectName(QString::fromUtf8("batteryBtn"));
        sizePolicy.setHeightForWidth(batteryBtn->sizePolicy().hasHeightForWidth());
        batteryBtn->setSizePolicy(sizePolicy);
        batteryBtn->setMinimumSize(QSize(120, 36));
        batteryBtn->setMaximumSize(QSize(120, 36));
        batteryBtn->setCheckable(true);
        batteryBtn->setFlat(true);

        horizontalLayout_7->addWidget(batteryBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(48);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(16, -1, 16, -1);
        sleepLabel = new QLabel(custom1Frame);
        sleepLabel->setObjectName(QString::fromUtf8("sleepLabel"));
        sizePolicy.setHeightForWidth(sleepLabel->sizePolicy().hasHeightForWidth());
        sleepLabel->setSizePolicy(sizePolicy);
        sleepLabel->setMinimumSize(QSize(300, 0));
        sleepLabel->setMaximumSize(QSize(16777215, 16777215));
        sleepLabel->setScaledContents(false);

        horizontalLayout_8->addWidget(sleepLabel);

        sleepComboBox = new QComboBox(custom1Frame);
        sleepComboBox->setObjectName(QString::fromUtf8("sleepComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sleepComboBox->sizePolicy().hasHeightForWidth());
        sleepComboBox->setSizePolicy(sizePolicy1);
        sleepComboBox->setMinimumSize(QSize(0, 0));
        sleepComboBox->setMaximumSize(QSize(16777215, 32));
        sleepComboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(sleepComboBox);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_5->addWidget(custom1Frame);

        custom2Frame = new QFrame(widget);
        custom2Frame->setObjectName(QString::fromUtf8("custom2Frame"));
        custom2Frame->setMinimumSize(QSize(0, 50));
        custom2Frame->setMaximumSize(QSize(16777215, 50));
        custom2Frame->setFrameShape(QFrame::Box);
        horizontalLayout_10 = new QHBoxLayout(custom2Frame);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(48);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(16, -1, 16, -1);
        closeLabel = new QLabel(custom2Frame);
        closeLabel->setObjectName(QString::fromUtf8("closeLabel"));
        sizePolicy.setHeightForWidth(closeLabel->sizePolicy().hasHeightForWidth());
        closeLabel->setSizePolicy(sizePolicy);
        closeLabel->setMinimumSize(QSize(300, 0));
        closeLabel->setMaximumSize(QSize(16777215, 16777215));
        closeLabel->setScaledContents(false);

        horizontalLayout_9->addWidget(closeLabel);

        closeComboBox = new QComboBox(custom2Frame);
        closeComboBox->setObjectName(QString::fromUtf8("closeComboBox"));
        sizePolicy1.setHeightForWidth(closeComboBox->sizePolicy().hasHeightForWidth());
        closeComboBox->setSizePolicy(sizePolicy1);
        closeComboBox->setMinimumSize(QSize(0, 0));
        closeComboBox->setMaximumSize(QSize(16777215, 32));
        closeComboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(closeComboBox);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_5->addWidget(custom2Frame);

        closeLidFrame = new QFrame(widget);
        closeLidFrame->setObjectName(QString::fromUtf8("closeLidFrame"));
        closeLidFrame->setMinimumSize(QSize(0, 50));
        closeLidFrame->setMaximumSize(QSize(16777215, 50));
        closeLidFrame->setFrameShape(QFrame::Box);
        closeLidFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_18 = new QHBoxLayout(closeLidFrame);
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(48);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(16, -1, 16, -1);
        label_12 = new QLabel(closeLidFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(300, 0));
        label_12->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_17->addWidget(label_12);

        closeLidCombo = new QComboBox(closeLidFrame);
        closeLidCombo->setObjectName(QString::fromUtf8("closeLidCombo"));

        horizontalLayout_17->addWidget(closeLidCombo);


        horizontalLayout_18->addLayout(horizontalLayout_17);


        verticalLayout_5->addWidget(closeLidFrame);

        darkenFrame = new QFrame(widget);
        darkenFrame->setObjectName(QString::fromUtf8("darkenFrame"));
        darkenFrame->setMinimumSize(QSize(0, 50));
        darkenFrame->setMaximumSize(QSize(16777215, 50));
        darkenFrame->setFrameShape(QFrame::Box);
        darkenFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_14 = new QHBoxLayout(darkenFrame);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(48);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(16, -1, 16, -1);
        label_10 = new QLabel(darkenFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(300, 0));
        label_10->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_11->addWidget(label_10);

        darkenCombo = new QComboBox(darkenFrame);
        darkenCombo->setObjectName(QString::fromUtf8("darkenCombo"));
        darkenCombo->setMinimumSize(QSize(0, 32));
        darkenCombo->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_11->addWidget(darkenCombo);


        horizontalLayout_14->addLayout(horizontalLayout_11);


        verticalLayout_5->addWidget(darkenFrame);


        powerLayout->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        powerLayout->addItem(verticalSpacer_2);

        title2Label = new QLabel(widget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);

        powerLayout->addWidget(title2Label);

        iconFrame = new QFrame(widget);
        iconFrame->setObjectName(QString::fromUtf8("iconFrame"));
        iconFrame->setMinimumSize(QSize(0, 50));
        iconFrame->setMaximumSize(QSize(16777215, 50));
        iconFrame->setFrameShape(QFrame::Box);
        horizontalLayout_13 = new QHBoxLayout(iconFrame);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(48);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(16, -1, 16, -1);
        label = new QLabel(iconFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(300, 0));
        label->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(label);

        iconComboBox = new QComboBox(iconFrame);
        iconComboBox->setObjectName(QString::fromUtf8("iconComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(iconComboBox->sizePolicy().hasHeightForWidth());
        iconComboBox->setSizePolicy(sizePolicy2);
        iconComboBox->setMinimumSize(QSize(0, 0));
        iconComboBox->setMaximumSize(QSize(16777215, 32));
        iconComboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_12->addWidget(iconComboBox);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        powerLayout->addWidget(iconFrame);


        verticalLayout_4->addLayout(powerLayout);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        retranslateUi(Power);

        QMetaObject::connectSlotsByName(Power);
    } // setupUi

    void retranslateUi(QWidget *Power)
    {
        titleLabel->setText(QApplication::translate("Power", "select power plan", nullptr));
        balanceLabel->setText(QApplication::translate("Power", "Balance (suggest)", nullptr));
        label_3->setText(QApplication::translate("Power", "Autobalance energy and performance with available hardware", nullptr));
        balanceRadioBtn->setText(QString());
        saveLabel->setText(QApplication::translate("Power", "Saving", nullptr));
        label_5->setText(QApplication::translate("Power", "Minimize performance", nullptr));
        savingRadioBtn->setText(QString());
        customLabel->setText(QApplication::translate("Power", "Custom", nullptr));
        label_7->setText(QApplication::translate("Power", "Users develop personalized power plans", nullptr));
        custdomRadioBtn->setText(QString());
        acBtn->setText(QApplication::translate("Power", "Power supply", nullptr));
        batteryBtn->setText(QApplication::translate("Power", "Battery powered", nullptr));
        sleepLabel->setText(QApplication::translate("Power", "Change PC sleep time:", nullptr));
        closeLabel->setText(QApplication::translate("Power", "Change DP close time:", nullptr));
        label_12->setText(QApplication::translate("Power", "When close lid:", nullptr));
        label_10->setText(QApplication::translate("Power", "Screen darkens use battery:", nullptr));
        title2Label->setText(QApplication::translate("Power", "General Settings", nullptr));
        label->setText(QApplication::translate("Power", "Power icon:", nullptr));
        Q_UNUSED(Power);
    } // retranslateUi

};

namespace Ui {
    class Power: public Ui_Power {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWER_H
