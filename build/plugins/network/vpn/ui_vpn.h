/********************************************************************************
** Form generated from reading UI file 'vpn.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPN_H
#define UI_VPN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vpn
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QWidget *addWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *addLyt;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Vpn)
    {
        if (Vpn->objectName().isEmpty())
            Vpn->setObjectName(QString::fromUtf8("Vpn"));
        Vpn->resize(800, 710);
        Vpn->setMinimumSize(QSize(0, 0));
        Vpn->setMaximumSize(QSize(16777215, 16777215));
        Vpn->setWindowTitle(QString::fromUtf8("Vpn"));
        verticalLayout_2 = new QVBoxLayout(Vpn);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 60);
        titleLabel = new QLabel(Vpn);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(titleLabel);

        addWidget = new QWidget(Vpn);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));
        addWidget->setMinimumSize(QSize(550, 60));
        addWidget->setMaximumSize(QSize(960, 60));
        horizontalLayout_3 = new QHBoxLayout(addWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(8);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, -1, -1);

        horizontalLayout_3->addLayout(addLyt);


        verticalLayout_2->addWidget(addWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(Vpn);

        QMetaObject::connectSlotsByName(Vpn);
    } // setupUi

    void retranslateUi(QWidget *Vpn)
    {
        titleLabel->setText(QApplication::translate("Vpn", "Add Vpn Connect", nullptr));
        Q_UNUSED(Vpn);
    } // retranslateUi

};

namespace Ui {
    class Vpn: public Ui_Vpn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPN_H
