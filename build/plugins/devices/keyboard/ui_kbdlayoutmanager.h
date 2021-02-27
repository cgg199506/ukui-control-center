/********************************************************************************
** Form generated from reading UI file 'kbdlayoutmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KBDLAYOUTMANAGER_H
#define UI_KBDLAYOUTMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KbdLayoutManager
{
public:
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *countryRadioButton;
    QWidget *countryWidget;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *countryComboBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *languageRadioButton;
    QWidget *languageWidget;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *languageComboBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *variantComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *addBtn;
    QSpacerItem *verticalSpacer_2;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *KbdLayoutManager)
    {
        if (KbdLayoutManager->objectName().isEmpty())
            KbdLayoutManager->setObjectName(QString::fromUtf8("KbdLayoutManager"));
        KbdLayoutManager->resize(742, 432);
        KbdLayoutManager->setMinimumSize(QSize(742, 432));
        KbdLayoutManager->setMaximumSize(QSize(742, 432));
        KbdLayoutManager->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_2 = new QHBoxLayout(KbdLayoutManager);
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(25, 35, 25, 10);
        listWidget = new QListWidget(KbdLayoutManager);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(330, 0));
        listWidget->setMaximumSize(QSize(330, 16777215));

        horizontalLayout_2->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        countryRadioButton = new QRadioButton(KbdLayoutManager);
        buttonGroup = new QButtonGroup(KbdLayoutManager);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(countryRadioButton);
        countryRadioButton->setObjectName(QString::fromUtf8("countryRadioButton"));

        verticalLayout->addWidget(countryRadioButton);

        countryWidget = new QWidget(KbdLayoutManager);
        countryWidget->setObjectName(QString::fromUtf8("countryWidget"));
        horizontalLayout_5 = new QHBoxLayout(countryWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        countryComboBox = new QComboBox(countryWidget);
        countryComboBox->setObjectName(QString::fromUtf8("countryComboBox"));
        countryComboBox->setMinimumSize(QSize(0, 32));
        countryComboBox->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_5->addWidget(countryComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(countryWidget);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        languageRadioButton = new QRadioButton(KbdLayoutManager);
        buttonGroup->addButton(languageRadioButton);
        languageRadioButton->setObjectName(QString::fromUtf8("languageRadioButton"));

        verticalLayout->addWidget(languageRadioButton);

        languageWidget = new QWidget(KbdLayoutManager);
        languageWidget->setObjectName(QString::fromUtf8("languageWidget"));
        horizontalLayout_6 = new QHBoxLayout(languageWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        languageComboBox = new QComboBox(languageWidget);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        languageComboBox->setMinimumSize(QSize(0, 32));
        languageComboBox->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_6->addWidget(languageComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(languageWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(KbdLayoutManager);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        variantComboBox = new QComboBox(KbdLayoutManager);
        variantComboBox->setObjectName(QString::fromUtf8("variantComboBox"));
        variantComboBox->setMinimumSize(QSize(0, 32));
        variantComboBox->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_3->addWidget(variantComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        addBtn = new QPushButton(KbdLayoutManager);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setMinimumSize(QSize(0, 32));
        addBtn->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_3->addWidget(addBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(KbdLayoutManager);

        QMetaObject::connectSlotsByName(KbdLayoutManager);
    } // setupUi

    void retranslateUi(QWidget *KbdLayoutManager)
    {
        countryRadioButton->setText(QApplication::translate("KbdLayoutManager", "C", nullptr));
        languageRadioButton->setText(QApplication::translate("KbdLayoutManager", "L", nullptr));
        label->setText(QApplication::translate("KbdLayoutManager", "Variant", nullptr));
        addBtn->setText(QApplication::translate("KbdLayoutManager", "Add", nullptr));
        Q_UNUSED(KbdLayoutManager);
    } // retranslateUi

};

namespace Ui {
    class KbdLayoutManager: public Ui_KbdLayoutManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KBDLAYOUTMANAGER_H
