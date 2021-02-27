/********************************************************************************
** Form generated from reading UI file 'touchscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUCHSCREEN_H
#define UI_TOUCHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TouchScreen
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *touchscreenLabel;
    QFrame *screenFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *monitorLabel;
    QComboBox *monitorCombo;
    QFrame *touchscreenFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *touchLabel;
    QComboBox *touchscreenCombo;
    QFrame *deviceinfoFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *touchnameContent;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mapButton;
    QPushButton *CalibrationButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *tipLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *TouchScreen)
    {
        if (TouchScreen->objectName().isEmpty())
            TouchScreen->setObjectName(QString::fromUtf8("TouchScreen"));
        TouchScreen->resize(779, 461);
        verticalLayout_2 = new QVBoxLayout(TouchScreen);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        touchscreenLabel = new QLabel(TouchScreen);
        touchscreenLabel->setObjectName(QString::fromUtf8("touchscreenLabel"));

        verticalLayout_2->addWidget(touchscreenLabel);

        screenFrame = new QFrame(TouchScreen);
        screenFrame->setObjectName(QString::fromUtf8("screenFrame"));
        screenFrame->setMinimumSize(QSize(550, 50));
        screenFrame->setMaximumSize(QSize(16777215, 50));
        screenFrame->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(screenFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        monitorLabel = new QLabel(screenFrame);
        monitorLabel->setObjectName(QString::fromUtf8("monitorLabel"));
        monitorLabel->setMinimumSize(QSize(118, 30));
        monitorLabel->setMaximumSize(QSize(118, 30));

        horizontalLayout->addWidget(monitorLabel);

        monitorCombo = new QComboBox(screenFrame);
        monitorCombo->setObjectName(QString::fromUtf8("monitorCombo"));
        monitorCombo->setMinimumSize(QSize(200, 0));
        monitorCombo->setMaximumSize(QSize(16777215, 30));
        monitorCombo->setAutoFillBackground(false);
        monitorCombo->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(monitorCombo);


        verticalLayout_2->addWidget(screenFrame);

        touchscreenFrame = new QFrame(TouchScreen);
        touchscreenFrame->setObjectName(QString::fromUtf8("touchscreenFrame"));
        touchscreenFrame->setMinimumSize(QSize(550, 50));
        touchscreenFrame->setMaximumSize(QSize(16777215, 50));
        touchscreenFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(touchscreenFrame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        touchLabel = new QLabel(touchscreenFrame);
        touchLabel->setObjectName(QString::fromUtf8("touchLabel"));
        touchLabel->setMinimumSize(QSize(118, 30));
        touchLabel->setMaximumSize(QSize(118, 30));

        horizontalLayout_2->addWidget(touchLabel);

        touchscreenCombo = new QComboBox(touchscreenFrame);
        touchscreenCombo->setObjectName(QString::fromUtf8("touchscreenCombo"));
        touchscreenCombo->setMinimumSize(QSize(200, 0));
        touchscreenCombo->setMaximumSize(QSize(16777215, 30));
        touchscreenCombo->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(touchscreenCombo);


        verticalLayout_2->addWidget(touchscreenFrame);

        deviceinfoFrame = new QFrame(TouchScreen);
        deviceinfoFrame->setObjectName(QString::fromUtf8("deviceinfoFrame"));
        deviceinfoFrame->setMinimumSize(QSize(550, 50));
        deviceinfoFrame->setMaximumSize(QSize(16777215, 50));
        deviceinfoFrame->setFrameShape(QFrame::Box);
        deviceinfoFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(deviceinfoFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(deviceinfoFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setMinimumSize(QSize(118, 30));
        label->setMaximumSize(QSize(118, 30));

        horizontalLayout_3->addWidget(label);

        touchnameContent = new QLabel(deviceinfoFrame);
        touchnameContent->setObjectName(QString::fromUtf8("touchnameContent"));

        horizontalLayout_3->addWidget(touchnameContent);


        verticalLayout_2->addWidget(deviceinfoFrame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mapButton = new QPushButton(TouchScreen);
        mapButton->setObjectName(QString::fromUtf8("mapButton"));
        mapButton->setMinimumSize(QSize(120, 36));
        mapButton->setMaximumSize(QSize(16777215, 36));
        mapButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(mapButton);

        CalibrationButton = new QPushButton(TouchScreen);
        CalibrationButton->setObjectName(QString::fromUtf8("CalibrationButton"));
        CalibrationButton->setMinimumSize(QSize(120, 36));
        CalibrationButton->setMaximumSize(QSize(16777215, 36));
        CalibrationButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(CalibrationButton);

        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(16, -1, -1, -1);
        tipLabel = new QLabel(TouchScreen);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));

        verticalLayout->addWidget(tipLabel);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(558, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

#ifndef QT_NO_SHORTCUT
        monitorLabel->setBuddy(monitorCombo);
        touchLabel->setBuddy(touchscreenCombo);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(monitorCombo, touchscreenCombo);
        QWidget::setTabOrder(touchscreenCombo, mapButton);

        retranslateUi(TouchScreen);

        QMetaObject::connectSlotsByName(TouchScreen);
    } // setupUi

    void retranslateUi(QWidget *TouchScreen)
    {
        TouchScreen->setWindowTitle(QApplication::translate("TouchScreen", "TouchScreen", nullptr));
        touchscreenLabel->setText(QApplication::translate("TouchScreen", "TouchScreen", nullptr));
        monitorLabel->setText(QApplication::translate("TouchScreen", "monitor", nullptr));
        touchLabel->setText(QApplication::translate("TouchScreen", "touch id", nullptr));
        label->setText(QApplication::translate("TouchScreen", "input device", nullptr));
        touchnameContent->setText(QApplication::translate("TouchScreen", "TextLabel", nullptr));
        mapButton->setText(QApplication::translate("TouchScreen", "map", nullptr));
        CalibrationButton->setText(QApplication::translate("TouchScreen", "calibration", nullptr));
        tipLabel->setText(QApplication::translate("TouchScreen", "No touch screen found", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TouchScreen: public Ui_TouchScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUCHSCREEN_H
