/********************************************************************************
** Form generated from reading UI file 'changetypedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETYPEDIALOG_H
#define UI_CHANGETYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeTypeDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QLabel *tipLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *faceLabel;
    QVBoxLayout *verticalLayout_9;
    QLabel *usernameLabel;
    QLabel *typeLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *standardRadioButton;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *adminRadioButton;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushBtn;
    QPushButton *confirmPushBtn;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *ChangeTypeDialog)
    {
        if (ChangeTypeDialog->objectName().isEmpty())
            ChangeTypeDialog->setObjectName(QString::fromUtf8("ChangeTypeDialog"));
        ChangeTypeDialog->resize(542, 542);
        ChangeTypeDialog->setMinimumSize(QSize(397, 539));
        ChangeTypeDialog->setMaximumSize(QSize(542, 542));
        ChangeTypeDialog->setWindowTitle(QString::fromUtf8("Change AccountType"));
        verticalLayout_2 = new QVBoxLayout(ChangeTypeDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ChangeTypeDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(32, 32, 32, 24);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, -1);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(12);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(12);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tipLabel = new QLabel(frame);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        sizePolicy.setHeightForWidth(tipLabel->sizePolicy().hasHeightForWidth());
        tipLabel->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(tipLabel);


        verticalLayout_6->addLayout(verticalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 0, -1);
        faceLabel = new QLabel(frame);
        faceLabel->setObjectName(QString::fromUtf8("faceLabel"));
        sizePolicy.setHeightForWidth(faceLabel->sizePolicy().hasHeightForWidth());
        faceLabel->setSizePolicy(sizePolicy);
        faceLabel->setMinimumSize(QSize(48, 48));
        faceLabel->setMaximumSize(QSize(48, 48));
        faceLabel->setScaledContents(true);

        horizontalLayout_6->addWidget(faceLabel);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        usernameLabel = new QLabel(frame);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        sizePolicy.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(usernameLabel, 0, Qt::AlignBottom);

        typeLabel = new QLabel(frame);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        sizePolicy.setHeightForWidth(typeLabel->sizePolicy().hasHeightForWidth());
        typeLabel->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(typeLabel, 0, Qt::AlignTop);


        horizontalLayout_6->addLayout(verticalLayout_9);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setLineWidth(1);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 472, 177));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(scrollAreaWidgetContents_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(450, 68));
        widget->setMaximumSize(QSize(450, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(16);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, -1, 0, -1);
        standardRadioButton = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(ChangeTypeDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(standardRadioButton);
        standardRadioButton->setObjectName(QString::fromUtf8("standardRadioButton"));
        standardRadioButton->setMinimumSize(QSize(16, 0));
        standardRadioButton->setMaximumSize(QSize(16, 16777215));

        horizontalLayout->addWidget(standardRadioButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label, 0, Qt::AlignBottom);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignTop);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(scrollAreaWidgetContents_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(450, 68));
        widget_2->setMaximumSize(QSize(450, 16777215));
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(16);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(6, -1, 0, -1);
        adminRadioButton = new QRadioButton(widget_2);
        buttonGroup->addButton(adminRadioButton);
        adminRadioButton->setObjectName(QString::fromUtf8("adminRadioButton"));
        adminRadioButton->setMinimumSize(QSize(16, 0));
        adminRadioButton->setMaximumSize(QSize(16, 16777215));

        horizontalLayout_9->addWidget(adminRadioButton);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_10->addWidget(label_3, 0, Qt::AlignBottom);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setWordWrap(true);

        verticalLayout_10->addWidget(label_4, 0, Qt::AlignTop);


        horizontalLayout_9->addLayout(verticalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(widget_2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        widget_2->raise();
        widget->raise();

        verticalLayout_6->addWidget(scrollArea);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(16);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cancelPushBtn = new QPushButton(frame);
        cancelPushBtn->setObjectName(QString::fromUtf8("cancelPushBtn"));
        cancelPushBtn->setMinimumSize(QSize(120, 36));
        cancelPushBtn->setMaximumSize(QSize(120, 36));
        cancelPushBtn->setFlat(false);

        horizontalLayout_3->addWidget(cancelPushBtn);

        confirmPushBtn = new QPushButton(frame);
        confirmPushBtn->setObjectName(QString::fromUtf8("confirmPushBtn"));
        confirmPushBtn->setMinimumSize(QSize(120, 36));
        confirmPushBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_3->addWidget(confirmPushBtn);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ChangeTypeDialog);

        QMetaObject::connectSlotsByName(ChangeTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeTypeDialog)
    {
        titleLabel->setText(QApplication::translate("ChangeTypeDialog", "Change Account Type", nullptr));
        tipLabel->setText(QApplication::translate("ChangeTypeDialog", "Make sure that there is at least one administrator on the computer", nullptr));
        faceLabel->setText(QString());
        usernameLabel->setText(QString());
        typeLabel->setText(QString());
        standardRadioButton->setText(QString());
        label->setText(QApplication::translate("ChangeTypeDialog", "standard user", nullptr));
        label_2->setText(QApplication::translate("ChangeTypeDialog", "Standard users can use most software, but cannot install software and change system settings", nullptr));
        adminRadioButton->setText(QString());
        label_3->setText(QApplication::translate("ChangeTypeDialog", "administrator", nullptr));
        label_4->setText(QApplication::translate("ChangeTypeDialog", "Administrators can make any changes they need", nullptr));
        cancelPushBtn->setText(QApplication::translate("ChangeTypeDialog", "Cancel", nullptr));
        confirmPushBtn->setText(QApplication::translate("ChangeTypeDialog", "Confirm", nullptr));
        Q_UNUSED(ChangeTypeDialog);
    } // retranslateUi

};

namespace Ui {
    class ChangeTypeDialog: public Ui_ChangeTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETYPEDIALOG_H
