/********************************************************************************
** Form generated from reading UI file 'printer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTER_H
#define UI_PRINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Printer
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QWidget *addWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *addLyt;
    QSpacerItem *verticalSpacer_2;
    QLabel *title2Label;
    QListWidget *listWidget;

    void setupUi(QWidget *Printer)
    {
        if (Printer->objectName().isEmpty())
            Printer->setObjectName(QString::fromUtf8("Printer"));
        Printer->resize(800, 710);
        Printer->setMinimumSize(QSize(0, 0));
        Printer->setMaximumSize(QSize(16777215, 16777215));
        Printer->setWindowTitle(QString::fromUtf8("Printer"));
        verticalLayout_2 = new QVBoxLayout(Printer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        widget = new QWidget(Printer);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout->addWidget(titleLabel);

        addWidget = new QWidget(widget);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));
        addWidget->setMinimumSize(QSize(0, 60));
        addWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(addWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(8);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, -1, -1);

        horizontalLayout_2->addLayout(addLyt);


        verticalLayout->addWidget(addWidget);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        title2Label = new QLabel(widget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);
        title2Label->setScaledContents(true);

        verticalLayout->addWidget(title2Label);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(550, 0));
        listWidget->setMaximumSize(QSize(960, 16777215));

        verticalLayout->addWidget(listWidget);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);


        retranslateUi(Printer);

        QMetaObject::connectSlotsByName(Printer);
    } // setupUi

    void retranslateUi(QWidget *Printer)
    {
        titleLabel->setText(QApplication::translate("Printer", "Add Printers And Scanners", nullptr));
        title2Label->setText(QApplication::translate("Printer", "List Of Existing Printers", nullptr));
        Q_UNUSED(Printer);
    } // retranslateUi

};

namespace Ui {
    class Printer: public Ui_Printer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTER_H
