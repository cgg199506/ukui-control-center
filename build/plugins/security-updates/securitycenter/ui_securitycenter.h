/********************************************************************************
** Form generated from reading UI file 'securitycenter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITYCENTER_H
#define UI_SECURITYCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecurityCenter
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *modulesWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SecurityCenter)
    {
        if (SecurityCenter->objectName().isEmpty())
            SecurityCenter->setObjectName(QString::fromUtf8("SecurityCenter"));
        SecurityCenter->resize(800, 600);
        horizontalLayout_2 = new QHBoxLayout(SecurityCenter);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 32, 48);
        widget = new QWidget(SecurityCenter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 10);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(titleLabel);

        verticalSpacer_3 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 8, -1, -1);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 36));
        pushButton->setMaximumSize(QSize(16777215, 36));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        modulesWidget = new QWidget(widget);
        modulesWidget->setObjectName(QString::fromUtf8("modulesWidget"));

        verticalLayout_2->addWidget(modulesWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(SecurityCenter);

        QMetaObject::connectSlotsByName(SecurityCenter);
    } // setupUi

    void retranslateUi(QWidget *SecurityCenter)
    {
        SecurityCenter->setWindowTitle(QApplication::translate("SecurityCenter", "SecurityCenter", nullptr));
        titleLabel->setText(QApplication::translate("SecurityCenter", "Computer Security Overview", nullptr));
        label->setText(QApplication::translate("SecurityCenter", "Understand current computer security situation and take measures", nullptr));
        pushButton->setText(QApplication::translate("SecurityCenter", "Run Security Center", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecurityCenter: public Ui_SecurityCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYCENTER_H
