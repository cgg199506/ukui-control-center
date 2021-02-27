/********************************************************************************
** Form generated from reading UI file 'keyboardcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBOARDCONTROL_H
#define UI_KEYBOARDCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyboardControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QVBoxLayout *verticalLayout_4;
    QFrame *repeatFrame_0;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *enableHorLayout;
    QLabel *enableLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *repeatFrame_1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *delayLabel;
    QLabel *label_5;
    QSlider *delayHorSlider;
    QLabel *label_6;
    QFrame *repeatFrame_2;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *speedLabel;
    QLabel *label_8;
    QSlider *speedHorSlider;
    QLabel *label_9;
    QFrame *repeatFrame_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *repeatLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QFrame *repeatFrame_4;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *tipKeyboardHorLayout;
    QLabel *tipLabel;
    QSpacerItem *horizontalSpacer_3;
    QFrame *repeatFrame_5;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *numLockHorLayout;
    QLabel *numlockLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QLabel *title2Label;
    QVBoxLayout *verticalLayout_5;
    QFrame *layoutFrame_0;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *layoutLabel;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *layoutsComBox;
    QWidget *addLytWidget;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *addLyt;
    QPushButton *inputSettingsBtn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *KeyboardControl)
    {
        if (KeyboardControl->objectName().isEmpty())
            KeyboardControl->setObjectName(QString::fromUtf8("KeyboardControl"));
        KeyboardControl->resize(642, 690);
        KeyboardControl->setMinimumSize(QSize(0, 0));
        KeyboardControl->setMaximumSize(QSize(16777215, 16777215));
        KeyboardControl->setWindowTitle(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(KeyboardControl);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        widget = new QWidget(KeyboardControl);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout->addWidget(titleLabel);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        repeatFrame_0 = new QFrame(widget);
        repeatFrame_0->setObjectName(QString::fromUtf8("repeatFrame_0"));
        repeatFrame_0->setMinimumSize(QSize(0, 50));
        repeatFrame_0->setMaximumSize(QSize(16777215, 50));
        repeatFrame_0->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(repeatFrame_0);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        enableHorLayout = new QHBoxLayout();
        enableHorLayout->setSpacing(0);
        enableHorLayout->setObjectName(QString::fromUtf8("enableHorLayout"));
        enableHorLayout->setContentsMargins(16, -1, 16, -1);
        enableLabel = new QLabel(repeatFrame_0);
        enableLabel->setObjectName(QString::fromUtf8("enableLabel"));
        sizePolicy.setHeightForWidth(enableLabel->sizePolicy().hasHeightForWidth());
        enableLabel->setSizePolicy(sizePolicy);
        enableLabel->setScaledContents(true);

        enableHorLayout->addWidget(enableLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        enableHorLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(enableHorLayout);


        verticalLayout_4->addWidget(repeatFrame_0);

        repeatFrame_1 = new QFrame(widget);
        repeatFrame_1->setObjectName(QString::fromUtf8("repeatFrame_1"));
        repeatFrame_1->setMinimumSize(QSize(0, 50));
        repeatFrame_1->setMaximumSize(QSize(16777215, 50));
        repeatFrame_1->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(repeatFrame_1);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(16);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(16, -1, 16, -1);
        delayLabel = new QLabel(repeatFrame_1);
        delayLabel->setObjectName(QString::fromUtf8("delayLabel"));
        sizePolicy.setHeightForWidth(delayLabel->sizePolicy().hasHeightForWidth());
        delayLabel->setSizePolicy(sizePolicy);
        delayLabel->setMinimumSize(QSize(128, 0));
        delayLabel->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_3->addWidget(delayLabel);

        label_5 = new QLabel(repeatFrame_1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_5);

        delayHorSlider = new QSlider(repeatFrame_1);
        delayHorSlider->setObjectName(QString::fromUtf8("delayHorSlider"));
        delayHorSlider->setStyleSheet(QString::fromUtf8(""));
        delayHorSlider->setMinimum(100);
        delayHorSlider->setMaximum(2100);
        delayHorSlider->setPageStep(1);
        delayHorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(delayHorSlider);

        label_6 = new QLabel(repeatFrame_1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(repeatFrame_1);

        repeatFrame_2 = new QFrame(widget);
        repeatFrame_2->setObjectName(QString::fromUtf8("repeatFrame_2"));
        repeatFrame_2->setMinimumSize(QSize(0, 50));
        repeatFrame_2->setMaximumSize(QSize(16777215, 50));
        repeatFrame_2->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(repeatFrame_2);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(16);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(16, -1, 16, -1);
        speedLabel = new QLabel(repeatFrame_2);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));
        sizePolicy.setHeightForWidth(speedLabel->sizePolicy().hasHeightForWidth());
        speedLabel->setSizePolicy(sizePolicy);
        speedLabel->setMinimumSize(QSize(128, 0));
        speedLabel->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_5->addWidget(speedLabel);

        label_8 = new QLabel(repeatFrame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_8);

        speedHorSlider = new QSlider(repeatFrame_2);
        speedHorSlider->setObjectName(QString::fromUtf8("speedHorSlider"));
        speedHorSlider->setStyleSheet(QString::fromUtf8(""));
        speedHorSlider->setMinimum(10);
        speedHorSlider->setMaximum(110);
        speedHorSlider->setPageStep(1);
        speedHorSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(speedHorSlider);

        label_9 = new QLabel(repeatFrame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_9);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_4->addWidget(repeatFrame_2);

        repeatFrame_3 = new QFrame(widget);
        repeatFrame_3->setObjectName(QString::fromUtf8("repeatFrame_3"));
        repeatFrame_3->setMinimumSize(QSize(0, 50));
        repeatFrame_3->setMaximumSize(QSize(16777215, 50));
        repeatFrame_3->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(repeatFrame_3);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(48);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, -1, 16, -1);
        repeatLabel = new QLabel(repeatFrame_3);
        repeatLabel->setObjectName(QString::fromUtf8("repeatLabel"));
        sizePolicy.setHeightForWidth(repeatLabel->sizePolicy().hasHeightForWidth());
        repeatLabel->setSizePolicy(sizePolicy);
        repeatLabel->setScaledContents(true);

        horizontalLayout_7->addWidget(repeatLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(repeatFrame_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 30));
        lineEdit->setMaximumSize(QSize(200, 30));

        horizontalLayout_7->addWidget(lineEdit);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_4->addWidget(repeatFrame_3);

        repeatFrame_4 = new QFrame(widget);
        repeatFrame_4->setObjectName(QString::fromUtf8("repeatFrame_4"));
        repeatFrame_4->setMinimumSize(QSize(0, 50));
        repeatFrame_4->setMaximumSize(QSize(16777215, 50));
        repeatFrame_4->setFrameShape(QFrame::Box);
        repeatFrame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_10 = new QHBoxLayout(repeatFrame_4);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        tipKeyboardHorLayout = new QHBoxLayout();
        tipKeyboardHorLayout->setSpacing(0);
        tipKeyboardHorLayout->setObjectName(QString::fromUtf8("tipKeyboardHorLayout"));
        tipKeyboardHorLayout->setContentsMargins(16, -1, 16, -1);
        tipLabel = new QLabel(repeatFrame_4);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        sizePolicy.setHeightForWidth(tipLabel->sizePolicy().hasHeightForWidth());
        tipLabel->setSizePolicy(sizePolicy);
        tipLabel->setScaledContents(true);

        tipKeyboardHorLayout->addWidget(tipLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tipKeyboardHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_10->addLayout(tipKeyboardHorLayout);


        verticalLayout_4->addWidget(repeatFrame_4);

        repeatFrame_5 = new QFrame(widget);
        repeatFrame_5->setObjectName(QString::fromUtf8("repeatFrame_5"));
        repeatFrame_5->setMinimumSize(QSize(0, 50));
        repeatFrame_5->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_12 = new QHBoxLayout(repeatFrame_5);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        numLockHorLayout = new QHBoxLayout();
        numLockHorLayout->setSpacing(0);
        numLockHorLayout->setObjectName(QString::fromUtf8("numLockHorLayout"));
        numLockHorLayout->setContentsMargins(16, -1, 16, -1);
        numlockLabel = new QLabel(repeatFrame_5);
        numlockLabel->setObjectName(QString::fromUtf8("numlockLabel"));
        sizePolicy.setHeightForWidth(numlockLabel->sizePolicy().hasHeightForWidth());
        numlockLabel->setSizePolicy(sizePolicy);
        numlockLabel->setScaledContents(true);

        numLockHorLayout->addWidget(numlockLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        numLockHorLayout->addItem(horizontalSpacer_4);


        horizontalLayout_12->addLayout(numLockHorLayout);


        verticalLayout_4->addWidget(repeatFrame_5);


        verticalLayout->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        title2Label = new QLabel(widget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);
        title2Label->setScaledContents(true);

        verticalLayout->addWidget(title2Label);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        layoutFrame_0 = new QFrame(widget);
        layoutFrame_0->setObjectName(QString::fromUtf8("layoutFrame_0"));
        layoutFrame_0->setMinimumSize(QSize(0, 50));
        layoutFrame_0->setMaximumSize(QSize(16777215, 50));
        layoutFrame_0->setFrameShape(QFrame::Box);
        horizontalLayout_14 = new QHBoxLayout(layoutFrame_0);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(48);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(16, -1, 16, -1);
        layoutLabel = new QLabel(layoutFrame_0);
        layoutLabel->setObjectName(QString::fromUtf8("layoutLabel"));
        sizePolicy.setHeightForWidth(layoutLabel->sizePolicy().hasHeightForWidth());
        layoutLabel->setSizePolicy(sizePolicy);
        layoutLabel->setScaledContents(true);

        horizontalLayout_13->addWidget(layoutLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);

        layoutsComBox = new QComboBox(layoutFrame_0);
        layoutsComBox->setObjectName(QString::fromUtf8("layoutsComBox"));
        layoutsComBox->setMinimumSize(QSize(260, 30));
        layoutsComBox->setMaximumSize(QSize(260, 30));
        layoutsComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_13->addWidget(layoutsComBox);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_5->addWidget(layoutFrame_0);

        addLytWidget = new QWidget(widget);
        addLytWidget->setObjectName(QString::fromUtf8("addLytWidget"));
        addLytWidget->setMinimumSize(QSize(0, 60));
        addLytWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_16 = new QHBoxLayout(addLytWidget);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(8);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, 0, -1);

        horizontalLayout_16->addLayout(addLyt);


        verticalLayout_5->addWidget(addLytWidget);

        inputSettingsBtn = new QPushButton(widget);
        inputSettingsBtn->setObjectName(QString::fromUtf8("inputSettingsBtn"));
        inputSettingsBtn->setMinimumSize(QSize(120, 0));
        inputSettingsBtn->setMaximumSize(QSize(120, 16777215));

        verticalLayout_5->addWidget(inputSettingsBtn);


        verticalLayout->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(KeyboardControl);

        QMetaObject::connectSlotsByName(KeyboardControl);
    } // setupUi

    void retranslateUi(QWidget *KeyboardControl)
    {
        titleLabel->setText(QApplication::translate("KeyboardControl", "Keys Settings", nullptr));
        enableLabel->setText(QApplication::translate("KeyboardControl", "Enable repeat key", nullptr));
        delayLabel->setText(QApplication::translate("KeyboardControl", "Delay", nullptr));
        label_5->setText(QApplication::translate("KeyboardControl", "Short", nullptr));
        label_6->setText(QApplication::translate("KeyboardControl", "Long", nullptr));
        speedLabel->setText(QApplication::translate("KeyboardControl", "Speed", nullptr));
        label_8->setText(QApplication::translate("KeyboardControl", "Slow", nullptr));
        label_9->setText(QApplication::translate("KeyboardControl", "Fast", nullptr));
        repeatLabel->setText(QApplication::translate("KeyboardControl", "Input characters to test the repetition effect\357\274\232", nullptr));
        tipLabel->setText(QApplication::translate("KeyboardControl", "Tip of keyboard", nullptr));
        numlockLabel->setText(QApplication::translate("KeyboardControl", "Enable numlock", nullptr));
        title2Label->setText(QApplication::translate("KeyboardControl", "Input Settings", nullptr));
        layoutLabel->setText(QApplication::translate("KeyboardControl", "Keyboard layout", nullptr));
        inputSettingsBtn->setText(QApplication::translate("KeyboardControl", "Input Set", nullptr));
        Q_UNUSED(KeyboardControl);
    } // retranslateUi

};

namespace Ui {
    class KeyboardControl: public Ui_KeyboardControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBOARDCONTROL_H
