/********************************************************************************
** Form generated from reading UI file 'changevaliddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEVALIDDIALOG_H
#define UI_CHANGEVALIDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeValidDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFrame *closeFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QFrame *infoFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *faceLabel;
    QVBoxLayout *verticalLayout_6;
    QLabel *nameLabel;
    QLabel *typeLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLabel *validDateLabel;
    QSpacerItem *horizontalSpacer_4;
    QFrame *adjustFrame;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QFrame *validFrame;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *yearCombox;
    QComboBox *monthCombox;
    QComboBox *dayCombox;
    QSpacerItem *verticalSpacer_2;
    QFrame *btnFrame;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelBtn;
    QPushButton *certainBtn;

    void setupUi(QDialog *ChangeValidDialog)
    {
        if (ChangeValidDialog->objectName().isEmpty())
            ChangeValidDialog->setObjectName(QString::fromUtf8("ChangeValidDialog"));
        ChangeValidDialog->resize(370, 410);
        ChangeValidDialog->setMinimumSize(QSize(370, 410));
        ChangeValidDialog->setMaximumSize(QSize(370, 410));
        verticalLayout_2 = new QVBoxLayout(ChangeValidDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ChangeValidDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(32, 32, 32, 24);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
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


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(closeFrame);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(12);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        infoFrame = new QFrame(frame);
        infoFrame->setObjectName(QString::fromUtf8("infoFrame"));
        infoFrame->setMinimumSize(QSize(0, 60));
        infoFrame->setMaximumSize(QSize(16777215, 60));
        infoFrame->setFrameShape(QFrame::StyledPanel);
        infoFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(infoFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        faceLabel = new QLabel(infoFrame);
        faceLabel->setObjectName(QString::fromUtf8("faceLabel"));
        sizePolicy.setHeightForWidth(faceLabel->sizePolicy().hasHeightForWidth());
        faceLabel->setSizePolicy(sizePolicy);
        faceLabel->setMinimumSize(QSize(48, 48));
        faceLabel->setMaximumSize(QSize(48, 48));
        faceLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(faceLabel);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        nameLabel = new QLabel(infoFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        sizePolicy.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(nameLabel, 0, Qt::AlignBottom);

        typeLabel = new QLabel(infoFrame);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        sizePolicy.setHeightForWidth(typeLabel->sizePolicy().hasHeightForWidth());
        typeLabel->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(typeLabel, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(infoFrame);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(label);

        validDateLabel = new QLabel(frame);
        validDateLabel->setObjectName(QString::fromUtf8("validDateLabel"));
        sizePolicy.setHeightForWidth(validDateLabel->sizePolicy().hasHeightForWidth());
        validDateLabel->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(validDateLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_8);

        adjustFrame = new QFrame(frame);
        adjustFrame->setObjectName(QString::fromUtf8("adjustFrame"));
        adjustFrame->setMinimumSize(QSize(0, 80));
        adjustFrame->setMaximumSize(QSize(16777215, 80));
        adjustFrame->setFrameShape(QFrame::StyledPanel);
        adjustFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(adjustFrame);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(adjustFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_5);

        validFrame = new QFrame(adjustFrame);
        validFrame->setObjectName(QString::fromUtf8("validFrame"));
        validFrame->setFrameShape(QFrame::StyledPanel);
        validFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(validFrame);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        yearCombox = new QComboBox(validFrame);
        yearCombox->setObjectName(QString::fromUtf8("yearCombox"));

        horizontalLayout_9->addWidget(yearCombox);

        monthCombox = new QComboBox(validFrame);
        monthCombox->setObjectName(QString::fromUtf8("monthCombox"));

        horizontalLayout_9->addWidget(monthCombox);

        dayCombox = new QComboBox(validFrame);
        dayCombox->setObjectName(QString::fromUtf8("dayCombox"));

        horizontalLayout_9->addWidget(dayCombox);


        verticalLayout_7->addWidget(validFrame);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_5->addWidget(adjustFrame);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        btnFrame = new QFrame(frame);
        btnFrame->setObjectName(QString::fromUtf8("btnFrame"));
        btnFrame->setMinimumSize(QSize(0, 40));
        btnFrame->setMaximumSize(QSize(16777215, 40));
        btnFrame->setFrameShape(QFrame::StyledPanel);
        btnFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(btnFrame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        cancelBtn = new QPushButton(btnFrame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout_6->addWidget(cancelBtn);

        certainBtn = new QPushButton(btnFrame);
        certainBtn->setObjectName(QString::fromUtf8("certainBtn"));

        horizontalLayout_6->addWidget(certainBtn);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(btnFrame);


        verticalLayout->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ChangeValidDialog);

        QMetaObject::connectSlotsByName(ChangeValidDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeValidDialog)
    {
        ChangeValidDialog->setWindowTitle(QApplication::translate("ChangeValidDialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("ChangeValidDialog", "Password Validity Setting", nullptr));
        faceLabel->setText(QString());
        nameLabel->setText(QString());
        typeLabel->setText(QString());
        label->setText(QApplication::translate("ChangeValidDialog", "Current passwd validity:", nullptr));
        validDateLabel->setText(QString());
        label_5->setText(QApplication::translate("ChangeValidDialog", "Adjust date to:", nullptr));
        cancelBtn->setText(QApplication::translate("ChangeValidDialog", "Cancel", nullptr));
        certainBtn->setText(QApplication::translate("ChangeValidDialog", "Certain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeValidDialog: public Ui_ChangeValidDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEVALIDDIALOG_H
