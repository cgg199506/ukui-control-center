/********************************************************************************
** Form generated from reading UI file 'screenlock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENLOCK_H
#define UI_SCREENLOCK_H

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

class Ui_Screenlock
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *previewLabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QLabel *title2Label;
    QFrame *loginFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *loginbgHorLayout;
    QLabel *loginpicLabel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *lockFrame;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *lockHorLayout;
    QLabel *activepicLabel;
    QSpacerItem *horizontalSpacer_6;
    QFrame *enableFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *lockhorizontalLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *title1Label;
    QWidget *backgroundsWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *browserOnlinewpBtn;
    QPushButton *browserLocalwpBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Screenlock)
    {
        if (Screenlock->objectName().isEmpty())
            Screenlock->setObjectName(QString::fromUtf8("Screenlock"));
        Screenlock->resize(673, 664);
        Screenlock->setMinimumSize(QSize(0, 0));
        Screenlock->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(Screenlock);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 30);
        widget = new QWidget(Screenlock);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(titleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 13, -1, -1);
        previewLabel = new QLabel(widget);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        sizePolicy.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy);
        previewLabel->setMinimumSize(QSize(300, 180));
        previewLabel->setMaximumSize(QSize(300, 180));
        previewLabel->setScaledContents(true);

        horizontalLayout->addWidget(previewLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        title2Label = new QLabel(widget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        title2Label->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(title2Label);

        loginFrame = new QFrame(widget);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        loginFrame->setMinimumSize(QSize(0, 50));
        loginFrame->setMaximumSize(QSize(16777215, 50));
        loginFrame->setFrameShape(QFrame::Box);
        loginFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(loginFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(16, 0, 16, 0);
        loginbgHorLayout = new QHBoxLayout();
        loginbgHorLayout->setSpacing(0);
        loginbgHorLayout->setObjectName(QString::fromUtf8("loginbgHorLayout"));
        loginpicLabel = new QLabel(loginFrame);
        loginpicLabel->setObjectName(QString::fromUtf8("loginpicLabel"));
        sizePolicy.setHeightForWidth(loginpicLabel->sizePolicy().hasHeightForWidth());
        loginpicLabel->setSizePolicy(sizePolicy);

        loginbgHorLayout->addWidget(loginpicLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        loginbgHorLayout->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(loginbgHorLayout);


        verticalLayout->addWidget(loginFrame);

        lockFrame = new QFrame(widget);
        lockFrame->setObjectName(QString::fromUtf8("lockFrame"));
        lockFrame->setMinimumSize(QSize(0, 50));
        lockFrame->setMaximumSize(QSize(16777215, 50));
        lockFrame->setFrameShape(QFrame::Box);
        lockFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_7 = new QHBoxLayout(lockFrame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, 0, 16, 0);
        lockHorLayout = new QHBoxLayout();
        lockHorLayout->setSpacing(0);
        lockHorLayout->setObjectName(QString::fromUtf8("lockHorLayout"));
        activepicLabel = new QLabel(lockFrame);
        activepicLabel->setObjectName(QString::fromUtf8("activepicLabel"));
        sizePolicy.setHeightForWidth(activepicLabel->sizePolicy().hasHeightForWidth());
        activepicLabel->setSizePolicy(sizePolicy);

        lockHorLayout->addWidget(activepicLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lockHorLayout->addItem(horizontalSpacer_6);


        horizontalLayout_7->addLayout(lockHorLayout);


        verticalLayout->addWidget(lockFrame);

        enableFrame = new QFrame(widget);
        enableFrame->setObjectName(QString::fromUtf8("enableFrame"));
        enableFrame->setMinimumSize(QSize(0, 69));
        enableFrame->setMaximumSize(QSize(16777215, 69));
        enableFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(enableFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(16, 0, 16, 0);
        lockhorizontalLayout = new QHBoxLayout();
        lockhorizontalLayout->setSpacing(0);
        lockhorizontalLayout->setObjectName(QString::fromUtf8("lockhorizontalLayout"));
        lockhorizontalLayout->setContentsMargins(-1, -1, 15, -1);
        label_5 = new QLabel(enableFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        lockhorizontalLayout->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        lockhorizontalLayout->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(lockhorizontalLayout);


        verticalLayout->addWidget(enableFrame);

        title1Label = new QLabel(widget);
        title1Label->setObjectName(QString::fromUtf8("title1Label"));
        sizePolicy.setHeightForWidth(title1Label->sizePolicy().hasHeightForWidth());
        title1Label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(title1Label);

        backgroundsWidget = new QWidget(widget);
        backgroundsWidget->setObjectName(QString::fromUtf8("backgroundsWidget"));
        backgroundsWidget->setMinimumSize(QSize(0, 345));

        verticalLayout->addWidget(backgroundsWidget);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(16);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        browserOnlinewpBtn = new QPushButton(widget);
        browserOnlinewpBtn->setObjectName(QString::fromUtf8("browserOnlinewpBtn"));
        browserOnlinewpBtn->setMinimumSize(QSize(132, 36));
        browserOnlinewpBtn->setMaximumSize(QSize(132, 36));

        horizontalLayout_2->addWidget(browserOnlinewpBtn);

        browserLocalwpBtn = new QPushButton(widget);
        browserLocalwpBtn->setObjectName(QString::fromUtf8("browserLocalwpBtn"));
        browserLocalwpBtn->setMinimumSize(QSize(132, 36));
        browserLocalwpBtn->setMaximumSize(QSize(132, 36));

        horizontalLayout_2->addWidget(browserLocalwpBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(widget);


        retranslateUi(Screenlock);

        QMetaObject::connectSlotsByName(Screenlock);
    } // setupUi

    void retranslateUi(QWidget *Screenlock)
    {
        Screenlock->setWindowTitle(QApplication::translate("Screenlock", "Screenlock", nullptr));
        titleLabel->setText(QApplication::translate("Screenlock", "Screenlock Interface", nullptr));
        previewLabel->setText(QString());
        title2Label->setText(QApplication::translate("Screenlock", "Screenlock Set", nullptr));
        loginpicLabel->setText(QApplication::translate("Screenlock", "Show picture of screenlock on screenlogin", nullptr));
        activepicLabel->setText(QApplication::translate("Screenlock", "Lock screen when screensaver boot", nullptr));
        label_5->setText(QApplication::translate("Screenlock", "Lock screen delay", nullptr));
        title1Label->setText(QApplication::translate("Screenlock", "Select screenlock background", nullptr));
        browserOnlinewpBtn->setText(QApplication::translate("Screenlock", "Browser online wp", nullptr));
        browserLocalwpBtn->setText(QApplication::translate("Screenlock", "Browser local wp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Screenlock: public Ui_Screenlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENLOCK_H
