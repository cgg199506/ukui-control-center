/********************************************************************************
** Form generated from reading UI file 'screensaver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSAVER_H
#define UI_SCREENSAVER_H

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

class Ui_Screensaver
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QWidget *previewWidget;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QFrame *enableFrame;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *enableHorLayout;
    QLabel *enableLabel;
    QFrame *programFrame;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *programLabel;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QFrame *idleFrame;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *lockhorizontalLayout;
    QLabel *idleLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *lockFrame;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *lockHorLayout;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Screensaver)
    {
        if (Screensaver->objectName().isEmpty())
            Screensaver->setObjectName(QString::fromUtf8("Screensaver"));
        Screensaver->resize(800, 710);
        Screensaver->setMinimumSize(QSize(0, 0));
        Screensaver->setMaximumSize(QSize(16777215, 16777215));
        Screensaver->setWindowTitle(QString::fromUtf8("Screensaver"));
        verticalLayout_2 = new QVBoxLayout(Screensaver);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 40);
        titleLabel = new QLabel(Screensaver);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(titleLabel);

        verticalSpacer_2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 9, -1);
        previewWidget = new QWidget(Screensaver);
        previewWidget->setObjectName(QString::fromUtf8("previewWidget"));
        previewWidget->setMinimumSize(QSize(300, 180));
        previewWidget->setMaximumSize(QSize(300, 180));

        horizontalLayout->addWidget(previewWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        enableFrame = new QFrame(Screensaver);
        enableFrame->setObjectName(QString::fromUtf8("enableFrame"));
        enableFrame->setMinimumSize(QSize(550, 50));
        enableFrame->setMaximumSize(QSize(960, 50));
        enableFrame->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(enableFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        enableHorLayout = new QHBoxLayout();
        enableHorLayout->setSpacing(0);
        enableHorLayout->setObjectName(QString::fromUtf8("enableHorLayout"));
        enableHorLayout->setContentsMargins(16, -1, 16, -1);
        enableLabel = new QLabel(enableFrame);
        enableLabel->setObjectName(QString::fromUtf8("enableLabel"));
        sizePolicy.setHeightForWidth(enableLabel->sizePolicy().hasHeightForWidth());
        enableLabel->setSizePolicy(sizePolicy);

        enableHorLayout->addWidget(enableLabel);


        horizontalLayout_3->addLayout(enableHorLayout);


        verticalLayout_2->addWidget(enableFrame);

        programFrame = new QFrame(Screensaver);
        programFrame->setObjectName(QString::fromUtf8("programFrame"));
        programFrame->setMinimumSize(QSize(550, 50));
        programFrame->setMaximumSize(QSize(960, 50));
        programFrame->setFrameShape(QFrame::Box);
        horizontalLayout_5 = new QHBoxLayout(programFrame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(16, -1, 16, -1);
        programLabel = new QLabel(programFrame);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        sizePolicy.setHeightForWidth(programLabel->sizePolicy().hasHeightForWidth());
        programLabel->setSizePolicy(sizePolicy);
        programLabel->setMinimumSize(QSize(182, 0));
        programLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(programLabel);

        comboBox = new QComboBox(programFrame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(300, 0));
        comboBox->setMaximumSize(QSize(300, 30));
        comboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(programFrame);

        idleFrame = new QFrame(Screensaver);
        idleFrame->setObjectName(QString::fromUtf8("idleFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(69);
        sizePolicy1.setHeightForWidth(idleFrame->sizePolicy().hasHeightForWidth());
        idleFrame->setSizePolicy(sizePolicy1);
        idleFrame->setMinimumSize(QSize(550, 80));
        idleFrame->setMaximumSize(QSize(960, 80));
        idleFrame->setFrameShape(QFrame::Box);
        horizontalLayout_7 = new QHBoxLayout(idleFrame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lockhorizontalLayout = new QHBoxLayout();
        lockhorizontalLayout->setSpacing(0);
        lockhorizontalLayout->setObjectName(QString::fromUtf8("lockhorizontalLayout"));
        lockhorizontalLayout->setContentsMargins(16, -1, 16, -1);
        idleLabel = new QLabel(idleFrame);
        idleLabel->setObjectName(QString::fromUtf8("idleLabel"));
        sizePolicy.setHeightForWidth(idleLabel->sizePolicy().hasHeightForWidth());
        idleLabel->setSizePolicy(sizePolicy);
        idleLabel->setMinimumSize(QSize(182, 0));
        idleLabel->setMaximumSize(QSize(182, 16777215));

        lockhorizontalLayout->addWidget(idleLabel);


        horizontalLayout_7->addLayout(lockhorizontalLayout);


        verticalLayout_2->addWidget(idleFrame);

        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        lockFrame = new QFrame(Screensaver);
        lockFrame->setObjectName(QString::fromUtf8("lockFrame"));
        lockFrame->setMinimumSize(QSize(550, 50));
        lockFrame->setMaximumSize(QSize(960, 50));
        lockFrame->setFrameShape(QFrame::Box);
        horizontalLayout_9 = new QHBoxLayout(lockFrame);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        lockHorLayout = new QHBoxLayout();
        lockHorLayout->setSpacing(0);
        lockHorLayout->setObjectName(QString::fromUtf8("lockHorLayout"));
        lockHorLayout->setContentsMargins(16, -1, 16, -1);
        label_5 = new QLabel(lockFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        lockHorLayout->addWidget(label_5);


        horizontalLayout_9->addLayout(lockHorLayout);


        verticalLayout_2->addWidget(lockFrame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(Screensaver);

        QMetaObject::connectSlotsByName(Screensaver);
    } // setupUi

    void retranslateUi(QWidget *Screensaver)
    {
        titleLabel->setText(QApplication::translate("Screensaver", "Screensaver", nullptr));
        enableLabel->setText(QApplication::translate("Screensaver", "Enable screensaver", nullptr));
        programLabel->setText(QApplication::translate("Screensaver", "Screensaver program", nullptr));
        idleLabel->setText(QApplication::translate("Screensaver", "idle time", nullptr));
        label_5->setText(QApplication::translate("Screensaver", "Lock screen when screensaver boot", nullptr));
        Q_UNUSED(Screensaver);
    } // retranslateUi

};

namespace Ui {
    class Screensaver: public Ui_Screensaver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSAVER_H
