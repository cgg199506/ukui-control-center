/********************************************************************************
** Form generated from reading UI file 'changegroupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEGROUPDIALOG_H
#define UI_CHANGEGROUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeGroupDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QWidget *addUserWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *addLyt;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelPushBtn;

    void setupUi(QDialog *ChangeGroupDialog)
    {
        if (ChangeGroupDialog->objectName().isEmpty())
            ChangeGroupDialog->setObjectName(QString::fromUtf8("ChangeGroupDialog"));
        ChangeGroupDialog->resize(540, 645);
        ChangeGroupDialog->setMinimumSize(QSize(540, 645));
        ChangeGroupDialog->setMaximumSize(QSize(540, 645));
        verticalLayout_2 = new QVBoxLayout(ChangeGroupDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(32, 32, 32, 24);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(ChangeGroupDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setMinimumSize(QSize(0, 38));
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(ChangeGroupDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(455, 360));
        listWidget->setMaximumSize(QSize(455, 360));

        verticalLayout->addWidget(listWidget);

        addUserWidget = new QWidget(ChangeGroupDialog);
        addUserWidget->setObjectName(QString::fromUtf8("addUserWidget"));
        addUserWidget->setMinimumSize(QSize(454, 50));
        addUserWidget->setMaximumSize(QSize(454, 50));
        horizontalLayout_5 = new QHBoxLayout(addUserWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(8);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, -1, -1);

        horizontalLayout_5->addLayout(addLyt);


        verticalLayout->addWidget(addUserWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cancelPushBtn = new QPushButton(ChangeGroupDialog);
        cancelPushBtn->setObjectName(QString::fromUtf8("cancelPushBtn"));

        horizontalLayout_3->addWidget(cancelPushBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ChangeGroupDialog);

        QMetaObject::connectSlotsByName(ChangeGroupDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeGroupDialog)
    {
        ChangeGroupDialog->setWindowTitle(QApplication::translate("ChangeGroupDialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("ChangeGroupDialog", "User Group Settings", nullptr));
        cancelPushBtn->setText(QApplication::translate("ChangeGroupDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeGroupDialog: public Ui_ChangeGroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEGROUPDIALOG_H
