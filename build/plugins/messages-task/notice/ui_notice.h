/********************************************************************************
** Form generated from reading UI file 'notice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICE_H
#define UI_NOTICE_H

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

class Ui_Notice
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *noticeLabel;
    QVBoxLayout *verticalLayout_4;
    QWidget *newfeatureWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *newfeatureHorLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *enableFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *enableHorLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *lockscreenWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *lockscreenHorLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *title2Label;
    QListWidget *applistWidget;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Notice)
    {
        if (Notice->objectName().isEmpty())
            Notice->setObjectName(QString::fromUtf8("Notice"));
        Notice->resize(800, 600);
        Notice->setWindowTitle(QString::fromUtf8("Notice"));
        verticalLayout_2 = new QVBoxLayout(Notice);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        widget = new QWidget(Notice);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout = new QVBoxLayout(widget);
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

        verticalSpacer_3 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        noticeLabel = new QLabel(widget);
        noticeLabel->setObjectName(QString::fromUtf8("noticeLabel"));
        sizePolicy.setHeightForWidth(noticeLabel->sizePolicy().hasHeightForWidth());
        noticeLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(noticeLabel);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        newfeatureWidget = new QWidget(widget);
        newfeatureWidget->setObjectName(QString::fromUtf8("newfeatureWidget"));
        newfeatureWidget->setMinimumSize(QSize(0, 56));
        newfeatureWidget->setMaximumSize(QSize(16777215, 56));
        horizontalLayout_2 = new QHBoxLayout(newfeatureWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        newfeatureHorLayout = new QHBoxLayout();
        newfeatureHorLayout->setSpacing(0);
        newfeatureHorLayout->setObjectName(QString::fromUtf8("newfeatureHorLayout"));
        newfeatureHorLayout->setContentsMargins(16, -1, 16, -1);
        label = new QLabel(newfeatureWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        newfeatureHorLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        newfeatureHorLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(newfeatureHorLayout);


        verticalLayout_4->addWidget(newfeatureWidget);

        enableFrame = new QFrame(widget);
        enableFrame->setObjectName(QString::fromUtf8("enableFrame"));
        enableFrame->setMinimumSize(QSize(0, 56));
        enableFrame->setMaximumSize(QSize(16777215, 56));
        enableFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(enableFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        enableHorLayout = new QHBoxLayout();
        enableHorLayout->setSpacing(0);
        enableHorLayout->setObjectName(QString::fromUtf8("enableHorLayout"));
        enableHorLayout->setContentsMargins(16, -1, 16, -1);
        label_3 = new QLabel(enableFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        enableHorLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        enableHorLayout->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(enableHorLayout);


        verticalLayout_4->addWidget(enableFrame);

        lockscreenWidget = new QWidget(widget);
        lockscreenWidget->setObjectName(QString::fromUtf8("lockscreenWidget"));
        lockscreenWidget->setMinimumSize(QSize(0, 56));
        lockscreenWidget->setMaximumSize(QSize(16777215, 56));
        horizontalLayout_6 = new QHBoxLayout(lockscreenWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lockscreenHorLayout = new QHBoxLayout();
        lockscreenHorLayout->setSpacing(0);
        lockscreenHorLayout->setObjectName(QString::fromUtf8("lockscreenHorLayout"));
        lockscreenHorLayout->setContentsMargins(16, -1, 16, -1);
        label_4 = new QLabel(lockscreenWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        lockscreenHorLayout->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        lockscreenHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(lockscreenHorLayout);


        verticalLayout_4->addWidget(lockscreenWidget);


        verticalLayout->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        title2Label = new QLabel(widget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(title2Label);

        applistWidget = new QListWidget(widget);
        applistWidget->setObjectName(QString::fromUtf8("applistWidget"));

        verticalLayout->addWidget(applistWidget);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Notice);

        QMetaObject::connectSlotsByName(Notice);
    } // setupUi

    void retranslateUi(QWidget *Notice)
    {
        titleLabel->setText(QApplication::translate("Notice", "Notice Settings", nullptr));
        noticeLabel->setText(QApplication::translate("Notice", "Set notice type of operation center", nullptr));
        label->setText(QApplication::translate("Notice", "Show new feature ater system upgrade", nullptr));
        label_3->setText(QApplication::translate("Notice", "Get notifications from the app", nullptr));
        label_4->setText(QApplication::translate("Notice", "Show notifications on the lock screen", nullptr));
        title2Label->setText(QApplication::translate("Notice", "Notice Origin", nullptr));
        Q_UNUSED(Notice);
    } // retranslateUi

};

namespace Ui {
    class Notice: public Ui_Notice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICE_H
