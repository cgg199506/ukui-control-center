/********************************************************************************
** Form generated from reading UI file 'shortcut.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUT_H
#define UI_SHORTCUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shortcut
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *systemLabel;
    QVBoxLayout *verticalLayout;
    QLabel *customLabel;
    QVBoxLayout *verticalLayout_2;
    QListWidget *customListWidget;
    QWidget *addWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *addLyt;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Shortcut)
    {
        if (Shortcut->objectName().isEmpty())
            Shortcut->setObjectName(QString::fromUtf8("Shortcut"));
        Shortcut->resize(847, 664);
        Shortcut->setMinimumSize(QSize(550, 0));
        Shortcut->setMaximumSize(QSize(960, 16777215));
        Shortcut->setWindowTitle(QString::fromUtf8("Shortcut"));
        verticalLayout_3 = new QVBoxLayout(Shortcut);
        verticalLayout_3->setSpacing(16);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 32, 48);
        systemLabel = new QLabel(Shortcut);
        systemLabel->setObjectName(QString::fromUtf8("systemLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(systemLabel->sizePolicy().hasHeightForWidth());
        systemLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(systemLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_3->addLayout(verticalLayout);

        customLabel = new QLabel(Shortcut);
        customLabel->setObjectName(QString::fromUtf8("customLabel"));
        sizePolicy.setHeightForWidth(customLabel->sizePolicy().hasHeightForWidth());
        customLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(customLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        customListWidget = new QListWidget(Shortcut);
        customListWidget->setObjectName(QString::fromUtf8("customListWidget"));

        verticalLayout_2->addWidget(customListWidget);

        addWidget = new QWidget(Shortcut);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));
        addWidget->setMinimumSize(QSize(0, 60));
        addWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_4 = new QHBoxLayout(addWidget);
        horizontalLayout_4->setSpacing(8);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(0);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, 0, -1);

        horizontalLayout_4->addLayout(addLyt);


        verticalLayout_2->addWidget(addWidget);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(17, 231, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(Shortcut);

        QMetaObject::connectSlotsByName(Shortcut);
    } // setupUi

    void retranslateUi(QWidget *Shortcut)
    {
        systemLabel->setText(QApplication::translate("Shortcut", "System Shortcut", nullptr));
        customLabel->setText(QApplication::translate("Shortcut", "Custom Shortcut", nullptr));
        Q_UNUSED(Shortcut);
    } // retranslateUi

};

namespace Ui {
    class Shortcut: public Ui_Shortcut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUT_H
