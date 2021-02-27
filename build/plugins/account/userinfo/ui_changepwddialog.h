/********************************************************************************
** Form generated from reading UI file 'changepwddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPWDDIALOG_H
#define UI_CHANGEPWDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePwdDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *faceLabel;
    QVBoxLayout *verticalLayout_8;
    QLabel *usernameLabel;
    QLabel *aTypeLabel;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QFrame *pwdFrame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *pwdtypeComboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLineEdit *curPwdLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *pwdLabel;
    QLineEdit *pwdLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *pwdsureLabel;
    QLineEdit *pwdsureLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *tipLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushBtn;
    QPushButton *confirmPushBtn;

    void setupUi(QDialog *ChangePwdDialog)
    {
        if (ChangePwdDialog->objectName().isEmpty())
            ChangePwdDialog->setObjectName(QString::fromUtf8("ChangePwdDialog"));
        ChangePwdDialog->resize(401, 458);
        ChangePwdDialog->setMinimumSize(QSize(401, 458));
        ChangePwdDialog->setMaximumSize(QSize(401, 458));
        ChangePwdDialog->setWindowTitle(QString::fromUtf8("Change Pwd"));
        verticalLayout_2 = new QVBoxLayout(ChangePwdDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ChangePwdDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 80));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(32, 32, 32, 24);
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

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(16);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        faceLabel = new QLabel(frame);
        faceLabel->setObjectName(QString::fromUtf8("faceLabel"));
        sizePolicy.setHeightForWidth(faceLabel->sizePolicy().hasHeightForWidth());
        faceLabel->setSizePolicy(sizePolicy);
        faceLabel->setMinimumSize(QSize(48, 48));
        faceLabel->setMaximumSize(QSize(48, 48));
        faceLabel->setScaledContents(true);

        horizontalLayout_4->addWidget(faceLabel);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        usernameLabel = new QLabel(frame);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        sizePolicy.setHeightForWidth(usernameLabel->sizePolicy().hasHeightForWidth());
        usernameLabel->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(usernameLabel, 0, Qt::AlignBottom);

        aTypeLabel = new QLabel(frame);
        aTypeLabel->setObjectName(QString::fromUtf8("aTypeLabel"));
        sizePolicy.setHeightForWidth(aTypeLabel->sizePolicy().hasHeightForWidth());
        aTypeLabel->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(aTypeLabel, 0, Qt::AlignTop);


        horizontalLayout_4->addLayout(verticalLayout_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        verticalLayout_11 = new QVBoxLayout(widget);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 10);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(104, 0));
        label_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(label_5);

        pwdFrame = new QFrame(widget);
        pwdFrame->setObjectName(QString::fromUtf8("pwdFrame"));
        pwdFrame->setMinimumSize(QSize(0, 0));
        pwdFrame->setMaximumSize(QSize(16777215, 16777215));
        pwdFrame->setFrameShape(QFrame::StyledPanel);
        pwdFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(pwdFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pwdtypeComboBox = new QLabel(pwdFrame);
        pwdtypeComboBox->setObjectName(QString::fromUtf8("pwdtypeComboBox"));
        sizePolicy.setHeightForWidth(pwdtypeComboBox->sizePolicy().hasHeightForWidth());
        pwdtypeComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(pwdtypeComboBox);


        horizontalLayout_5->addWidget(pwdFrame);


        verticalLayout_10->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(104, 0));
        label->setMaximumSize(QSize(104, 16777215));

        horizontalLayout_9->addWidget(label);

        curPwdLineEdit = new QLineEdit(widget);
        curPwdLineEdit->setObjectName(QString::fromUtf8("curPwdLineEdit"));

        horizontalLayout_9->addWidget(curPwdLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pwdLabel = new QLabel(widget);
        pwdLabel->setObjectName(QString::fromUtf8("pwdLabel"));
        sizePolicy2.setHeightForWidth(pwdLabel->sizePolicy().hasHeightForWidth());
        pwdLabel->setSizePolicy(sizePolicy2);
        pwdLabel->setMinimumSize(QSize(104, 0));
        pwdLabel->setMaximumSize(QSize(104, 16777215));

        horizontalLayout_6->addWidget(pwdLabel);

        pwdLineEdit = new QLineEdit(widget);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setMinimumSize(QSize(0, 0));
        pwdLineEdit->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(pwdLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pwdsureLabel = new QLabel(widget);
        pwdsureLabel->setObjectName(QString::fromUtf8("pwdsureLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pwdsureLabel->sizePolicy().hasHeightForWidth());
        pwdsureLabel->setSizePolicy(sizePolicy3);
        pwdsureLabel->setMinimumSize(QSize(104, 0));
        pwdsureLabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(pwdsureLabel);

        pwdsureLineEdit = new QLineEdit(widget);
        pwdsureLineEdit->setObjectName(QString::fromUtf8("pwdsureLineEdit"));
        pwdsureLineEdit->setMinimumSize(QSize(0, 0));
        pwdsureLineEdit->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(pwdsureLineEdit);


        verticalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tipLabel = new QLabel(widget);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tipLabel->sizePolicy().hasHeightForWidth());
        tipLabel->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(tipLabel);


        verticalLayout_10->addLayout(horizontalLayout_3);


        verticalLayout_11->addLayout(verticalLayout_10);


        verticalLayout_4->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelPushBtn = new QPushButton(frame);
        cancelPushBtn->setObjectName(QString::fromUtf8("cancelPushBtn"));
        cancelPushBtn->setMinimumSize(QSize(120, 36));
        cancelPushBtn->setMaximumSize(QSize(120, 36));
        cancelPushBtn->setFlat(false);

        horizontalLayout->addWidget(cancelPushBtn);

        confirmPushBtn = new QPushButton(frame);
        confirmPushBtn->setObjectName(QString::fromUtf8("confirmPushBtn"));
        confirmPushBtn->setMinimumSize(QSize(120, 36));
        confirmPushBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout->addWidget(confirmPushBtn);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ChangePwdDialog);

        QMetaObject::connectSlotsByName(ChangePwdDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangePwdDialog)
    {
        titleLabel->setText(QApplication::translate("ChangePwdDialog", "Change Pwd", nullptr));
        faceLabel->setText(QString());
        usernameLabel->setText(QString());
        aTypeLabel->setText(QString());
        label_5->setText(QApplication::translate("ChangePwdDialog", "Pwd type", nullptr));
        pwdtypeComboBox->setText(QString());
        label->setText(QApplication::translate("ChangePwdDialog", "Cur pwd", nullptr));
        pwdLabel->setText(QApplication::translate("ChangePwdDialog", "New pwd", nullptr));
        pwdsureLabel->setText(QApplication::translate("ChangePwdDialog", "New pwd sure", nullptr));
        tipLabel->setText(QString());
        cancelPushBtn->setText(QApplication::translate("ChangePwdDialog", "Cancel", nullptr));
        confirmPushBtn->setText(QApplication::translate("ChangePwdDialog", "Confirm", nullptr));
        Q_UNUSED(ChangePwdDialog);
    } // retranslateUi

};

namespace Ui {
    class ChangePwdDialog: public Ui_ChangePwdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPWDDIALOG_H
