/********************************************************************************
** Form generated from reading UI file 'layoutmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTMANAGER_H
#define UI_LAYOUTMANAGER_H

#include <CloseButton/closebutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LayoutManager
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *closeFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    CloseButton *closeBtn;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QFrame *selectedFrame;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *languageRadioButton;
    QRadioButton *countryRadioButton;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *selectListWidget;
    QFrame *variantFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *variantComboBox;
    QFrame *installedFrame;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *PreBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBtn;
    QPushButton *installBtn;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *LayoutManager)
    {
        if (LayoutManager->objectName().isEmpty())
            LayoutManager->setObjectName(QString::fromUtf8("LayoutManager"));
        LayoutManager->resize(572, 594);
        LayoutManager->setMinimumSize(QSize(572, 594));
        LayoutManager->setMaximumSize(QSize(572, 594));
        verticalLayout_2 = new QVBoxLayout(LayoutManager);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 15, 15, 0);
        frame = new QFrame(LayoutManager);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        closeFrame = new QFrame(frame);
        closeFrame->setObjectName(QString::fromUtf8("closeFrame"));
        closeFrame->setMinimumSize(QSize(0, 36));
        closeFrame->setMaximumSize(QSize(16777215, 36));
        closeFrame->setFrameShape(QFrame::StyledPanel);
        closeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(closeFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(16, -1, -1, -1);
        titleLabel = new QLabel(closeFrame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBtn = new CloseButton(closeFrame);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setMinimumSize(QSize(32, 32));
        closeBtn->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(closeBtn);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(closeFrame);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(24);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(32, 16, 32, 48);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(24);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        selectedFrame = new QFrame(frame);
        selectedFrame->setObjectName(QString::fromUtf8("selectedFrame"));
        selectedFrame->setMinimumSize(QSize(240, 0));
        selectedFrame->setMaximumSize(QSize(240, 16777215));
        selectedFrame->setFrameShape(QFrame::StyledPanel);
        selectedFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(selectedFrame);
        verticalLayout_6->setSpacing(16);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(32);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        languageRadioButton = new QRadioButton(selectedFrame);
        buttonGroup = new QButtonGroup(LayoutManager);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(languageRadioButton);
        languageRadioButton->setObjectName(QString::fromUtf8("languageRadioButton"));
        sizePolicy.setHeightForWidth(languageRadioButton->sizePolicy().hasHeightForWidth());
        languageRadioButton->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(languageRadioButton);

        countryRadioButton = new QRadioButton(selectedFrame);
        buttonGroup->addButton(countryRadioButton);
        countryRadioButton->setObjectName(QString::fromUtf8("countryRadioButton"));
        sizePolicy.setHeightForWidth(countryRadioButton->sizePolicy().hasHeightForWidth());
        countryRadioButton->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(countryRadioButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_8);

        selectListWidget = new QListWidget(selectedFrame);
        selectListWidget->setObjectName(QString::fromUtf8("selectListWidget"));

        verticalLayout_6->addWidget(selectListWidget);

        variantFrame = new QFrame(selectedFrame);
        variantFrame->setObjectName(QString::fromUtf8("variantFrame"));
        variantFrame->setFrameShape(QFrame::StyledPanel);
        variantFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(variantFrame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(variantFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        variantComboBox = new QComboBox(variantFrame);
        variantComboBox->setObjectName(QString::fromUtf8("variantComboBox"));

        horizontalLayout_3->addWidget(variantComboBox);


        verticalLayout_6->addWidget(variantFrame);


        horizontalLayout_6->addWidget(selectedFrame);

        installedFrame = new QFrame(frame);
        installedFrame->setObjectName(QString::fromUtf8("installedFrame"));
        installedFrame->setMinimumSize(QSize(240, 0));
        installedFrame->setMaximumSize(QSize(240, 16777215));
        installedFrame->setFrameShape(QFrame::StyledPanel);
        installedFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(installedFrame);
        verticalLayout_7->setSpacing(16);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(installedFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label);

        listWidget = new QListWidget(installedFrame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_7->addWidget(listWidget);


        horizontalLayout_6->addWidget(installedFrame);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        PreBtn = new QPushButton(frame);
        PreBtn->setObjectName(QString::fromUtf8("PreBtn"));
        PreBtn->setMinimumSize(QSize(120, 36));
        PreBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_7->addWidget(PreBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        cancelBtn = new QPushButton(frame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_7->addWidget(cancelBtn);

        installBtn = new QPushButton(frame);
        installBtn->setObjectName(QString::fromUtf8("installBtn"));
        installBtn->setMinimumSize(QSize(120, 36));
        installBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_7->addWidget(installBtn);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(frame);


        retranslateUi(LayoutManager);

        QMetaObject::connectSlotsByName(LayoutManager);
    } // setupUi

    void retranslateUi(QDialog *LayoutManager)
    {
        LayoutManager->setWindowTitle(QApplication::translate("LayoutManager", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("LayoutManager", "Manager Keyboard Layout", nullptr));
        closeBtn->setText(QString());
        languageRadioButton->setText(QApplication::translate("LayoutManager", "Language", nullptr));
        countryRadioButton->setText(QApplication::translate("LayoutManager", "Country", nullptr));
        label_2->setText(QApplication::translate("LayoutManager", "Variant", nullptr));
        label->setText(QApplication::translate("LayoutManager", "Layout installed", nullptr));
        PreBtn->setText(QApplication::translate("LayoutManager", "Preview", nullptr));
        cancelBtn->setText(QApplication::translate("LayoutManager", "Cancel", nullptr));
        installBtn->setText(QApplication::translate("LayoutManager", "Install", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayoutManager: public Ui_LayoutManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTMANAGER_H
