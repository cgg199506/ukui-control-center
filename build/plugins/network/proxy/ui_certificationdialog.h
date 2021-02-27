/********************************************************************************
** Form generated from reading UI file 'certificationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CERTIFICATIONDIALOG_H
#define UI_CERTIFICATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CertificationDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *activeHLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *userLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *closePushBtn;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CertificationDialog)
    {
        if (CertificationDialog->objectName().isEmpty())
            CertificationDialog->setObjectName(QString::fromUtf8("CertificationDialog"));
        CertificationDialog->resize(500, 246);
        CertificationDialog->setMinimumSize(QSize(500, 246));
        CertificationDialog->setMaximumSize(QSize(500, 246));
        verticalLayout_2 = new QVBoxLayout(CertificationDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 25, -1, -1);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        activeHLayout = new QHBoxLayout();
        activeHLayout->setSpacing(10);
        activeHLayout->setObjectName(QString::fromUtf8("activeHLayout"));
        activeHLayout->setContentsMargins(20, -1, -1, -1);
        label_3 = new QLabel(CertificationDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setScaledContents(true);

        activeHLayout->addWidget(label_3);


        verticalLayout->addLayout(activeHLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        widget = new QWidget(CertificationDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label);

        userLineEdit = new QLineEdit(widget);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setMinimumSize(QSize(180, 0));
        userLineEdit->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_3->addWidget(userLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_4->addWidget(label_2);

        pwdLineEdit = new QLineEdit(widget);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setMinimumSize(QSize(180, 0));
        pwdLineEdit->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_4->addWidget(pwdLineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_2->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        closePushBtn = new QPushButton(CertificationDialog);
        closePushBtn->setObjectName(QString::fromUtf8("closePushBtn"));

        horizontalLayout_6->addWidget(closePushBtn);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CertificationDialog);

        QMetaObject::connectSlotsByName(CertificationDialog);
    } // setupUi

    void retranslateUi(QDialog *CertificationDialog)
    {
        CertificationDialog->setWindowTitle(QApplication::translate("CertificationDialog", "UserCertification", nullptr));
        label_3->setText(QApplication::translate("CertificationDialog", "UserCertification", nullptr));
        label->setText(QApplication::translate("CertificationDialog", "User:", nullptr));
        label_2->setText(QApplication::translate("CertificationDialog", "Passwd:", nullptr));
        closePushBtn->setText(QApplication::translate("CertificationDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CertificationDialog: public Ui_CertificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CERTIFICATIONDIALOG_H
