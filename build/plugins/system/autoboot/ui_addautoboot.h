/********************************************************************************
** Form generated from reading UI file 'addautoboot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUTOBOOT_H
#define UI_ADDAUTOBOOT_H

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

QT_BEGIN_NAMESPACE

class Ui_AddAutoBoot
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *execLineEdit;
    QPushButton *openBtn;
    QLineEdit *commentLineEdit;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *certainBtn;

    void setupUi(QDialog *AddAutoBoot)
    {
        if (AddAutoBoot->objectName().isEmpty())
            AddAutoBoot->setObjectName(QString::fromUtf8("AddAutoBoot"));
        AddAutoBoot->resize(460, 320);
        AddAutoBoot->setMinimumSize(QSize(460, 320));
        AddAutoBoot->setMaximumSize(QSize(481, 320));
        verticalLayout_2 = new QVBoxLayout(AddAutoBoot);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(32, 32, 32, 24);
        frame = new QFrame(AddAutoBoot);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 90));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, -1);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(titleLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 12, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(110, 0));
        label->setMaximumSize(QSize(140, 16777215));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(110, 0));
        label_2->setMaximumSize(QSize(140, 16777215));
        label_2->setScaledContents(true);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(110, 0));
        label_3->setMaximumSize(QSize(140, 16777215));
        label_3->setScaledContents(true);

        verticalLayout->addWidget(label_3);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, -1, 0);
        nameLineEdit = new QLineEdit(frame);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(0, 33));
        nameLineEdit->setMaximumSize(QSize(258, 33));

        verticalLayout_6->addWidget(nameLineEdit);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        execLineEdit = new QLineEdit(frame);
        execLineEdit->setObjectName(QString::fromUtf8("execLineEdit"));
        execLineEdit->setMinimumSize(QSize(0, 33));
        execLineEdit->setMaximumSize(QSize(190, 33));

        horizontalLayout_8->addWidget(execLineEdit);

        openBtn = new QPushButton(frame);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setMinimumSize(QSize(60, 33));
        openBtn->setMaximumSize(QSize(60, 33));

        horizontalLayout_8->addWidget(openBtn);


        verticalLayout_6->addLayout(horizontalLayout_8);

        commentLineEdit = new QLineEdit(frame);
        commentLineEdit->setObjectName(QString::fromUtf8("commentLineEdit"));
        commentLineEdit->setMinimumSize(QSize(0, 33));
        commentLineEdit->setMaximumSize(QSize(258, 33));

        verticalLayout_6->addWidget(commentLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_5->addLayout(horizontalLayout_4);

        hintLabel = new QLabel(frame);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));

        verticalLayout_5->addWidget(hintLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(frame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));
        cancelBtn->setAutoDefault(true);
        cancelBtn->setFlat(false);

        horizontalLayout_3->addWidget(cancelBtn);

        certainBtn = new QPushButton(frame);
        certainBtn->setObjectName(QString::fromUtf8("certainBtn"));
        certainBtn->setMinimumSize(QSize(120, 36));
        certainBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_3->addWidget(certainBtn);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(frame);


        retranslateUi(AddAutoBoot);

        QMetaObject::connectSlotsByName(AddAutoBoot);
    } // setupUi

    void retranslateUi(QDialog *AddAutoBoot)
    {
        AddAutoBoot->setWindowTitle(QApplication::translate("AddAutoBoot", "Add AutoBoot", nullptr));
        titleLabel->setText(QApplication::translate("AddAutoBoot", "Add autoboot program", nullptr));
        label->setText(QApplication::translate("AddAutoBoot", "Program name", nullptr));
        label_2->setText(QApplication::translate("AddAutoBoot", "Program exec", nullptr));
        label_3->setText(QApplication::translate("AddAutoBoot", "Program comment", nullptr));
        openBtn->setText(QApplication::translate("AddAutoBoot", "Open", nullptr));
        hintLabel->setText(QString());
        cancelBtn->setText(QApplication::translate("AddAutoBoot", "Cancel", nullptr));
        certainBtn->setText(QApplication::translate("AddAutoBoot", "Certain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAutoBoot: public Ui_AddAutoBoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUTOBOOT_H
