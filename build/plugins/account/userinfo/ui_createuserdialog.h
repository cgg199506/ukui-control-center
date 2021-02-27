/********************************************************************************
** Form generated from reading UI file 'createuserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSERDIALOG_H
#define UI_CREATEUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateUserDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QComboBox *pwdTypeComBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_4;
    QLineEdit *pwdLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QLineEdit *pwdsureLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *tipLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *standardRadioBtn;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *adminRadioBtn;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *confirmBtn;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *CreateUserDialog)
    {
        if (CreateUserDialog->objectName().isEmpty())
            CreateUserDialog->setObjectName(QString::fromUtf8("CreateUserDialog"));
        CreateUserDialog->resize(450, 660);
        CreateUserDialog->setMinimumSize(QSize(450, 660));
        CreateUserDialog->setMaximumSize(QSize(637, 749));
        CreateUserDialog->setWindowTitle(QString::fromUtf8("Create User"));
        verticalLayout_2 = new QVBoxLayout(CreateUserDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(CreateUserDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(32, 32, 32, 24);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, -1);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 16, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_10 = new QVBoxLayout(widget_3);
        verticalLayout_10->setSpacing(8);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 10);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(104, 0));
        label_2->setMaximumSize(QSize(104, 16777215));

        horizontalLayout_5->addWidget(label_2);

        usernameLineEdit = new QLineEdit(widget_3);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setMinimumSize(QSize(0, 33));
        usernameLineEdit->setMaximumSize(QSize(16777215, 33));

        horizontalLayout_5->addWidget(usernameLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(104, 0));
        label_3->setMaximumSize(QSize(104, 16777215));

        horizontalLayout_11->addWidget(label_3);

        pwdTypeComBox = new QComboBox(widget_3);
        pwdTypeComBox->setObjectName(QString::fromUtf8("pwdTypeComBox"));
        pwdTypeComBox->setMinimumSize(QSize(0, 33));
        pwdTypeComBox->setMaximumSize(QSize(16777215, 33));

        horizontalLayout_11->addWidget(pwdTypeComBox);


        verticalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(104, 0));
        label_4->setMaximumSize(QSize(104, 16777215));

        horizontalLayout_12->addWidget(label_4);

        pwdLineEdit = new QLineEdit(widget_3);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setMinimumSize(QSize(0, 33));
        pwdLineEdit->setMaximumSize(QSize(16777215, 33));

        horizontalLayout_12->addWidget(pwdLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(104, 0));
        label_5->setMaximumSize(QSize(104, 16777215));

        horizontalLayout_13->addWidget(label_5);

        pwdsureLineEdit = new QLineEdit(widget_3);
        pwdsureLineEdit->setObjectName(QString::fromUtf8("pwdsureLineEdit"));
        pwdsureLineEdit->setMinimumSize(QSize(0, 33));
        pwdsureLineEdit->setMaximumSize(QSize(16777215, 33));

        horizontalLayout_13->addWidget(pwdsureLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tipLabel = new QLabel(widget_3);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tipLabel->sizePolicy().hasHeightForWidth());
        tipLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(tipLabel);


        verticalLayout_10->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(widget_3);


        verticalLayout_7->addLayout(verticalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, -1);
        standardRadioBtn = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(CreateUserDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(standardRadioBtn);
        standardRadioBtn->setObjectName(QString::fromUtf8("standardRadioBtn"));
        standardRadioBtn->setMinimumSize(QSize(20, 0));
        standardRadioBtn->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_6->addWidget(standardRadioBtn);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, -1);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMaximumSize(QSize(16777215, 23));

        verticalLayout_5->addWidget(label_7, 0, Qt::AlignBottom);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_8, 0, Qt::AlignTop);


        horizontalLayout_6->addLayout(verticalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_9->addWidget(widget);

        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 0));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_9 = new QHBoxLayout(widget_2);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(6, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, 0, -1);
        adminRadioBtn = new QRadioButton(widget_2);
        buttonGroup->addButton(adminRadioBtn);
        adminRadioBtn->setObjectName(QString::fromUtf8("adminRadioBtn"));
        adminRadioBtn->setMinimumSize(QSize(20, 0));
        adminRadioBtn->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(adminRadioBtn);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_9, 0, Qt::AlignBottom);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_10, 0, Qt::AlignTop);


        horizontalLayout_8->addLayout(verticalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_9->addWidget(widget_2);


        verticalLayout_7->addLayout(verticalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(16);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(frame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_10->addWidget(cancelBtn);

        confirmBtn = new QPushButton(frame);
        confirmBtn->setObjectName(QString::fromUtf8("confirmBtn"));
        confirmBtn->setMinimumSize(QSize(120, 36));
        confirmBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_10->addWidget(confirmBtn);


        verticalLayout_7->addLayout(horizontalLayout_10);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_2->addWidget(frame);


        retranslateUi(CreateUserDialog);

        QMetaObject::connectSlotsByName(CreateUserDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateUserDialog)
    {
        titleLabel->setText(QApplication::translate("CreateUserDialog", "Add New Account", nullptr));
        label_2->setText(QApplication::translate("CreateUserDialog", "UserName", nullptr));
        label_3->setText(QApplication::translate("CreateUserDialog", "PwdType", nullptr));
        label_4->setText(QApplication::translate("CreateUserDialog", "Password", nullptr));
        label_5->setText(QApplication::translate("CreateUserDialog", "PasswordSure", nullptr));
        tipLabel->setText(QString());
        label_6->setText(QApplication::translate("CreateUserDialog", "Account Type", nullptr));
        standardRadioBtn->setText(QString());
        label_7->setText(QApplication::translate("CreateUserDialog", "standard user", nullptr));
        label_8->setText(QApplication::translate("CreateUserDialog", "Standard users can use most software, but cannot install the software and \n"
"change system settings", nullptr));
        adminRadioBtn->setText(QString());
        label_9->setText(QApplication::translate("CreateUserDialog", "administrator", nullptr));
        label_10->setText(QApplication::translate("CreateUserDialog", "Administrators can make any changes they need", nullptr));
        cancelBtn->setText(QApplication::translate("CreateUserDialog", "Cancel", nullptr));
        confirmBtn->setText(QApplication::translate("CreateUserDialog", "Confirm", nullptr));
        Q_UNUSED(CreateUserDialog);
    } // retranslateUi

};

namespace Ui {
    class CreateUserDialog: public Ui_CreateUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSERDIALOG_H
