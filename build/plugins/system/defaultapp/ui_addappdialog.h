/********************************************************************************
** Form generated from reading UI file 'addappdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAPPDIALOG_H
#define UI_ADDAPPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddAppDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *appListWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *okPushBtm;
    QPushButton *cancelPushBtn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AddAppDialog)
    {
        if (AddAppDialog->objectName().isEmpty())
            AddAppDialog->setObjectName(QString::fromUtf8("AddAppDialog"));
        AddAppDialog->resize(377, 418);
        AddAppDialog->setWindowTitle(QString::fromUtf8("Dialog"));
        horizontalLayout_2 = new QHBoxLayout(AddAppDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        appListWidget = new QListWidget(AddAppDialog);
        appListWidget->setObjectName(QString::fromUtf8("appListWidget"));
        appListWidget->setMinimumSize(QSize(0, 0));
        appListWidget->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(appListWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        okPushBtm = new QPushButton(AddAppDialog);
        okPushBtm->setObjectName(QString::fromUtf8("okPushBtm"));

        verticalLayout->addWidget(okPushBtm);

        cancelPushBtn = new QPushButton(AddAppDialog);
        cancelPushBtn->setObjectName(QString::fromUtf8("cancelPushBtn"));

        verticalLayout->addWidget(cancelPushBtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AddAppDialog);

        QMetaObject::connectSlotsByName(AddAppDialog);
    } // setupUi

    void retranslateUi(QDialog *AddAppDialog)
    {
        okPushBtm->setText(QApplication::translate("AddAppDialog", "OK", nullptr));
        cancelPushBtn->setText(QApplication::translate("AddAppDialog", "Cancel", nullptr));
        Q_UNUSED(AddAppDialog);
    } // retranslateUi

};

namespace Ui {
    class AddAppDialog: public Ui_AddAppDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAPPDIALOG_H
