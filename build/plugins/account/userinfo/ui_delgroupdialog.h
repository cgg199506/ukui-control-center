/********************************************************************************
** Form generated from reading UI file 'delgroupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELGROUPDIALOG_H
#define UI_DELGROUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DelGroupDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPic;
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *delBtn;

    void setupUi(QDialog *DelGroupDialog)
    {
        if (DelGroupDialog->objectName().isEmpty())
            DelGroupDialog->setObjectName(QString::fromUtf8("DelGroupDialog"));
        DelGroupDialog->resize(452, 232);
        DelGroupDialog->setMinimumSize(QSize(452, 232));
        DelGroupDialog->setMaximumSize(QSize(452, 232));
        verticalLayout_3 = new QVBoxLayout(DelGroupDialog);
        verticalLayout_3->setSpacing(32);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 42, 42, 34);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(32, -1, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPic = new QLabel(DelGroupDialog);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setMinimumSize(QSize(30, 30));
        labelPic->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(labelPic);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(16);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        titleLabel = new QLabel(DelGroupDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout_2->addWidget(titleLabel);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(16);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(DelGroupDialog);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));
        cancelBtn->setFocusPolicy(Qt::NoFocus);
        cancelBtn->setFlat(false);

        horizontalLayout_2->addWidget(cancelBtn);

        delBtn = new QPushButton(DelGroupDialog);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setMinimumSize(QSize(120, 36));
        delBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_2->addWidget(delBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(DelGroupDialog);

        QMetaObject::connectSlotsByName(DelGroupDialog);
    } // setupUi

    void retranslateUi(QDialog *DelGroupDialog)
    {
        DelGroupDialog->setWindowTitle(QApplication::translate("DelGroupDialog", "Dialog", nullptr));
        labelPic->setText(QString());
        titleLabel->setText(QApplication::translate("DelGroupDialog", "TextLabel", nullptr));
        cancelBtn->setText(QApplication::translate("DelGroupDialog", "Cancel", nullptr));
        delBtn->setText(QApplication::translate("DelGroupDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DelGroupDialog: public Ui_DelGroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELGROUPDIALOG_H
