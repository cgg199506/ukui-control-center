/********************************************************************************
** Form generated from reading UI file 'appdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPDETAIL_H
#define UI_APPDETAIL_H

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

class Ui_AppDetail
{
public:
    QHBoxLayout *horizontalLayout_10;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QFrame *enableFrame;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *enableLayout;
    QLabel *label_2;
    QFrame *numberFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *numberLayout;
    QLabel *label_3;
    QComboBox *numberComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *confirmBtn;

    void setupUi(QDialog *AppDetail)
    {
        if (AppDetail->objectName().isEmpty())
            AppDetail->setObjectName(QString::fromUtf8("AppDetail"));
        AppDetail->resize(460, 350);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AppDetail->sizePolicy().hasHeightForWidth());
        AppDetail->setSizePolicy(sizePolicy);
        AppDetail->setMinimumSize(QSize(460, 350));
        AppDetail->setMaximumSize(QSize(460, 350));
        horizontalLayout_10 = new QHBoxLayout(AppDetail);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(25, 0, 0, 24);
        frame = new QFrame(AppDetail);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 32, -1, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 8, 8, -1);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        horizontalLayout_9->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_9);

        enableFrame = new QFrame(frame);
        enableFrame->setObjectName(QString::fromUtf8("enableFrame"));
        enableFrame->setMinimumSize(QSize(396, 50));
        enableFrame->setMaximumSize(QSize(396, 50));
        enableFrame->setFrameShape(QFrame::Box);
        horizontalLayout_5 = new QHBoxLayout(enableFrame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        enableLayout = new QHBoxLayout();
        enableLayout->setObjectName(QString::fromUtf8("enableLayout"));
        enableLayout->setContentsMargins(9, 9, 9, -1);
        label_2 = new QLabel(enableFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        enableLayout->addWidget(label_2);


        horizontalLayout_5->addLayout(enableLayout);


        verticalLayout->addWidget(enableFrame);

        numberFrame = new QFrame(frame);
        numberFrame->setObjectName(QString::fromUtf8("numberFrame"));
        numberFrame->setMinimumSize(QSize(396, 50));
        numberFrame->setMaximumSize(QSize(396, 50));
        numberFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(numberFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        numberLayout = new QHBoxLayout();
        numberLayout->setObjectName(QString::fromUtf8("numberLayout"));
        numberLayout->setContentsMargins(9, -1, -1, -1);
        label_3 = new QLabel(numberFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        numberLayout->addWidget(label_3);

        numberComboBox = new QComboBox(numberFrame);
        numberComboBox->setObjectName(QString::fromUtf8("numberComboBox"));
        numberComboBox->setMinimumSize(QSize(135, 32));
        numberComboBox->setMaximumSize(QSize(135, 32));

        numberLayout->addWidget(numberComboBox);


        horizontalLayout_6->addLayout(numberLayout);


        verticalLayout->addWidget(numberFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, 30, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(frame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_8->addWidget(cancelBtn);

        confirmBtn = new QPushButton(frame);
        confirmBtn->setObjectName(QString::fromUtf8("confirmBtn"));
        confirmBtn->setMinimumSize(QSize(120, 36));
        confirmBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_8->addWidget(confirmBtn);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_10->addWidget(frame);


        retranslateUi(AppDetail);

        QMetaObject::connectSlotsByName(AppDetail);
    } // setupUi

    void retranslateUi(QDialog *AppDetail)
    {
        AppDetail->setWindowTitle(QApplication::translate("AppDetail", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("AppDetail", "App", nullptr));
        label_2->setText(QApplication::translate("AppDetail", "Allow notification", nullptr));
        label_3->setText(QApplication::translate("AppDetail", "Number of notification centers", nullptr));
        cancelBtn->setText(QApplication::translate("AppDetail", "cancel", nullptr));
        confirmBtn->setText(QApplication::translate("AppDetail", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppDetail: public Ui_AppDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPDETAIL_H
