/********************************************************************************
** Form generated from reading UI file 'touchpad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUCHPAD_H
#define UI_TOUCHPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Touchpad
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QFrame *enableFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *enableHorLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *typingFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *typingHorLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *clickFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *clickHorLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *scrollingFrame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QComboBox *scrollingTypeComBox;
    QHBoxLayout *horizontalLayout;
    QLabel *tipLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Touchpad)
    {
        if (Touchpad->objectName().isEmpty())
            Touchpad->setObjectName(QString::fromUtf8("Touchpad"));
        Touchpad->resize(775, 493);
        Touchpad->setWindowTitle(QString::fromUtf8("Touchpad"));
        verticalLayout_2 = new QVBoxLayout(Touchpad);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        titleLabel = new QLabel(Touchpad);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(titleLabel);

        verticalSpacer = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        enableFrame = new QFrame(Touchpad);
        enableFrame->setObjectName(QString::fromUtf8("enableFrame"));
        enableFrame->setMinimumSize(QSize(550, 50));
        enableFrame->setMaximumSize(QSize(960, 50));
        enableFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(enableFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(16, 0, 16, 0);
        enableHorLayout = new QHBoxLayout();
        enableHorLayout->setSpacing(0);
        enableHorLayout->setObjectName(QString::fromUtf8("enableHorLayout"));
        label = new QLabel(enableFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        enableHorLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        enableHorLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(enableHorLayout);


        verticalLayout_2->addWidget(enableFrame);

        typingFrame = new QFrame(Touchpad);
        typingFrame->setObjectName(QString::fromUtf8("typingFrame"));
        typingFrame->setMinimumSize(QSize(550, 50));
        typingFrame->setMaximumSize(QSize(960, 50));
        typingFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(typingFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(16, 0, 16, 0);
        typingHorLayout = new QHBoxLayout();
        typingHorLayout->setSpacing(0);
        typingHorLayout->setObjectName(QString::fromUtf8("typingHorLayout"));
        label_2 = new QLabel(typingFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        typingHorLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        typingHorLayout->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(typingHorLayout);


        verticalLayout_2->addWidget(typingFrame);

        clickFrame = new QFrame(Touchpad);
        clickFrame->setObjectName(QString::fromUtf8("clickFrame"));
        clickFrame->setMinimumSize(QSize(550, 50));
        clickFrame->setMaximumSize(QSize(960, 50));
        clickFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(clickFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(16, 0, 16, 0);
        clickHorLayout = new QHBoxLayout();
        clickHorLayout->setSpacing(0);
        clickHorLayout->setObjectName(QString::fromUtf8("clickHorLayout"));
        label_3 = new QLabel(clickFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        clickHorLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        clickHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(clickHorLayout);


        verticalLayout_2->addWidget(clickFrame);

        scrollingFrame = new QFrame(Touchpad);
        scrollingFrame->setObjectName(QString::fromUtf8("scrollingFrame"));
        scrollingFrame->setMinimumSize(QSize(550, 50));
        scrollingFrame->setMaximumSize(QSize(960, 50));
        scrollingFrame->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(scrollingFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(16, 0, 16, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(scrollingFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(128, 0));
        label_4->setMaximumSize(QSize(128, 16777215));

        horizontalLayout_7->addWidget(label_4);

        scrollingTypeComBox = new QComboBox(scrollingFrame);
        scrollingTypeComBox->setObjectName(QString::fromUtf8("scrollingTypeComBox"));
        scrollingTypeComBox->setMinimumSize(QSize(0, 30));
        scrollingTypeComBox->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_7->addWidget(scrollingTypeComBox);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(scrollingFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(16, -1, -1, -1);
        tipLabel = new QLabel(Touchpad);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));

        horizontalLayout->addWidget(tipLabel);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Touchpad);

        QMetaObject::connectSlotsByName(Touchpad);
    } // setupUi

    void retranslateUi(QWidget *Touchpad)
    {
        titleLabel->setText(QApplication::translate("Touchpad", "Touchpad Settings", nullptr));
        label->setText(QApplication::translate("Touchpad", "Enabled touchpad", nullptr));
        label_2->setText(QApplication::translate("Touchpad", "Disable touchpad while typing", nullptr));
        label_3->setText(QApplication::translate("Touchpad", "Enable mouse clicks with touchpad", nullptr));
        label_4->setText(QApplication::translate("Touchpad", "Scrolling", nullptr));
        tipLabel->setText(QApplication::translate("Touchpad", "No touchpad found", nullptr));
        Q_UNUSED(Touchpad);
    } // retranslateUi

};

namespace Ui {
    class Touchpad: public Ui_Touchpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUCHPAD_H
