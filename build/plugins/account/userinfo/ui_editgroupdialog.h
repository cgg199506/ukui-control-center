/********************************************************************************
** Form generated from reading UI file 'editgroupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITGROUPDIALOG_H
#define UI_EDITGROUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditGroupDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelBtn;
    QPushButton *certainBtn;

    void setupUi(QDialog *EditGroupDialog)
    {
        if (EditGroupDialog->objectName().isEmpty())
            EditGroupDialog->setObjectName(QString::fromUtf8("EditGroupDialog"));
        EditGroupDialog->resize(390, 523);
        EditGroupDialog->setMinimumSize(QSize(390, 523));
        EditGroupDialog->setMaximumSize(QSize(390, 523));
        verticalLayout_4 = new QVBoxLayout(EditGroupDialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(42, 42, 42, 34);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(24);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 40);
        titleLabel = new QLabel(EditGroupDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(titleLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(8);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(EditGroupDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        lineEdit_name = new QLineEdit(EditGroupDialog);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setMinimumSize(QSize(248, 0));
        lineEdit_name->setMaximumSize(QSize(248, 16777215));

        horizontalLayout_5->addWidget(lineEdit_name);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_3 = new QLabel(EditGroupDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        horizontalLayout_8->addLayout(horizontalLayout);

        lineEdit_id = new QLineEdit(EditGroupDialog);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setMinimumSize(QSize(248, 0));
        lineEdit_id->setMaximumSize(QSize(248, 16777215));

        horizontalLayout_8->addWidget(lineEdit_id);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_2 = new QLabel(EditGroupDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 32));
        label_2->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_9->addLayout(verticalLayout);

        listWidget = new QListWidget(EditGroupDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(248, 194));
        listWidget->setMaximumSize(QSize(248, 194));

        horizontalLayout_9->addWidget(listWidget);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(16);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        cancelBtn = new QPushButton(EditGroupDialog);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(100, 36));
        cancelBtn->setMaximumSize(QSize(100, 36));
        cancelBtn->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(cancelBtn);

        certainBtn = new QPushButton(EditGroupDialog);
        certainBtn->setObjectName(QString::fromUtf8("certainBtn"));
        certainBtn->setMinimumSize(QSize(100, 36));
        certainBtn->setMaximumSize(QSize(100, 36));
        certainBtn->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(certainBtn);


        verticalLayout_4->addLayout(horizontalLayout_6);


        retranslateUi(EditGroupDialog);

        QMetaObject::connectSlotsByName(EditGroupDialog);
    } // setupUi

    void retranslateUi(QDialog *EditGroupDialog)
    {
        EditGroupDialog->setWindowTitle(QApplication::translate("EditGroupDialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("EditGroupDialog", "Edit User Group", nullptr));
        label->setText(QApplication::translate("EditGroupDialog", "Name", nullptr));
        label_3->setText(QApplication::translate("EditGroupDialog", "Id", nullptr));
        label_2->setText(QApplication::translate("EditGroupDialog", "Members", nullptr));
        cancelBtn->setText(QApplication::translate("EditGroupDialog", "Cancel", nullptr));
        certainBtn->setText(QApplication::translate("EditGroupDialog", "Certain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditGroupDialog: public Ui_EditGroupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITGROUPDIALOG_H
