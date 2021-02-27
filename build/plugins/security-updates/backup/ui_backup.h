/********************************************************************************
** Form generated from reading UI file 'backup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUP_H
#define UI_BACKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Backup
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QLabel *backupLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *title2Label;
    QLabel *restoreLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *restoreBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Backup)
    {
        if (Backup->objectName().isEmpty())
            Backup->setObjectName(QString::fromUtf8("Backup"));
        Backup->resize(1041, 710);
        Backup->setMinimumSize(QSize(0, 0));
        Backup->setMaximumSize(QSize(16777215, 16777215));
        Backup->setWindowTitle(QString::fromUtf8("Backup"));
        verticalLayout_2 = new QVBoxLayout(Backup);
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 30);
        titleLabel = new QLabel(Backup);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout_2->addWidget(titleLabel);

        backupLabel = new QLabel(Backup);
        backupLabel->setObjectName(QString::fromUtf8("backupLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backupLabel->sizePolicy().hasHeightForWidth());
        backupLabel->setSizePolicy(sizePolicy1);
        backupLabel->setScaledContents(true);
        backupLabel->setWordWrap(true);

        verticalLayout_2->addWidget(backupLabel);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        backBtn = new QPushButton(Backup);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setMinimumSize(QSize(120, 36));
        backBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout->addWidget(backBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        title2Label = new QLabel(Backup);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);
        title2Label->setScaledContents(true);

        verticalLayout_2->addWidget(title2Label);

        restoreLabel = new QLabel(Backup);
        restoreLabel->setObjectName(QString::fromUtf8("restoreLabel"));
        sizePolicy.setHeightForWidth(restoreLabel->sizePolicy().hasHeightForWidth());
        restoreLabel->setSizePolicy(sizePolicy);
        restoreLabel->setScaledContents(true);

        verticalLayout_2->addWidget(restoreLabel);

        verticalSpacer_3 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        restoreBtn = new QPushButton(Backup);
        restoreBtn->setObjectName(QString::fromUtf8("restoreBtn"));
        restoreBtn->setMinimumSize(QSize(120, 36));
        restoreBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_2->addWidget(restoreBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(Backup);

        QMetaObject::connectSlotsByName(Backup);
    } // setupUi

    void retranslateUi(QWidget *Backup)
    {
        titleLabel->setText(QApplication::translate("Backup", "Backup", nullptr));
        backupLabel->setText(QApplication::translate("Backup", "Back up your files to other drives, and when the original files are lost, damaged, or deleted, \n"
"you can restore them to ensure the integrity of your system.", nullptr));
        backBtn->setText(QApplication::translate("Backup", "Begin backup", nullptr));
        title2Label->setText(QApplication::translate("Backup", "Restore", nullptr));
        restoreLabel->setText(QApplication::translate("Backup", "View a list of backed-upfiles to backed up files to the system", nullptr));
        restoreBtn->setText(QApplication::translate("Backup", "Begin restore", nullptr));
        Q_UNUSED(Backup);
    } // retranslateUi

};

namespace Ui {
    class Backup: public Ui_Backup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUP_H
