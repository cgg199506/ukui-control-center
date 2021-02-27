/********************************************************************************
** Form generated from reading UI file 'autoboot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOBOOT_H
#define UI_AUTOBOOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoBoot
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QVBoxLayout *autoLayout;
    QWidget *addWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *addLyt;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AutoBoot)
    {
        if (AutoBoot->objectName().isEmpty())
            AutoBoot->setObjectName(QString::fromUtf8("AutoBoot"));
        AutoBoot->resize(800, 710);
        AutoBoot->setMinimumSize(QSize(0, 0));
        AutoBoot->setMaximumSize(QSize(16777215, 16777215));
        AutoBoot->setWindowTitle(QString::fromUtf8("AutoBoot"));
        verticalLayout_2 = new QVBoxLayout(AutoBoot);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        widget = new QWidget(AutoBoot);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, 0);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        titleLabel->setFont(font);
        titleLabel->setScaledContents(true);

        verticalLayout->addWidget(titleLabel);

        autoLayout = new QVBoxLayout();
        autoLayout->setSpacing(1);
        autoLayout->setObjectName(QString::fromUtf8("autoLayout"));

        verticalLayout->addLayout(autoLayout);

        addWidget = new QWidget(widget);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));
        addWidget->setMinimumSize(QSize(550, 60));
        addWidget->setMaximumSize(QSize(960, 60));
        horizontalLayout_2 = new QHBoxLayout(addWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(0);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, -1, -1);

        horizontalLayout_2->addLayout(addLyt);


        verticalLayout->addWidget(addWidget);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(AutoBoot);

        QMetaObject::connectSlotsByName(AutoBoot);
    } // setupUi

    void retranslateUi(QWidget *AutoBoot)
    {
        titleLabel->setText(QApplication::translate("AutoBoot", "Autoboot Settings", nullptr));
        Q_UNUSED(AutoBoot);
    } // retranslateUi

};

namespace Ui {
    class AutoBoot: public Ui_AutoBoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOBOOT_H
