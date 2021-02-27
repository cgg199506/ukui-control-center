/********************************************************************************
** Form generated from reading UI file 'deluserdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELUSERDIALOG_H
#define UI_DELUSERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DelUserDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *keepRadioBtn;
    QLabel *label;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *delRadioBtn;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushBtn;
    QPushButton *deleteBtn;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *DelUserDialog)
    {
        if (DelUserDialog->objectName().isEmpty())
            DelUserDialog->setObjectName(QString::fromUtf8("DelUserDialog"));
        DelUserDialog->resize(502, 290);
        DelUserDialog->setMinimumSize(QSize(502, 290));
        DelUserDialog->setMaximumSize(QSize(502, 290));
        DelUserDialog->setWindowTitle(QString::fromUtf8("Delete User"));
        verticalLayout_2 = new QVBoxLayout(DelUserDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(DelUserDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(32, 32, 32, 24);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 8, 8, -1);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        horizontalLayout_4->addWidget(titleLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 12, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 50));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 0, 0, 0);
        keepRadioBtn = new QRadioButton(frame_2);
        buttonGroup = new QButtonGroup(DelUserDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(keepRadioBtn);
        keepRadioBtn->setObjectName(QString::fromUtf8("keepRadioBtn"));
        keepRadioBtn->setMinimumSize(QSize(15, 0));
        keepRadioBtn->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_5->addWidget(keepRadioBtn);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 50));
        frame_3->setMaximumSize(QSize(16777215, 50));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_7 = new QHBoxLayout(frame_3);
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 0, 0, 0);
        delRadioBtn = new QRadioButton(frame_3);
        buttonGroup->addButton(delRadioBtn);
        delRadioBtn->setObjectName(QString::fromUtf8("delRadioBtn"));
        delRadioBtn->setMinimumSize(QSize(15, 0));
        delRadioBtn->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_7->addWidget(delRadioBtn);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);


        verticalLayout->addWidget(frame_3);


        verticalLayout_5->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelPushBtn = new QPushButton(frame);
        cancelPushBtn->setObjectName(QString::fromUtf8("cancelPushBtn"));
        cancelPushBtn->setMinimumSize(QSize(120, 36));
        cancelPushBtn->setMaximumSize(QSize(120, 36));
        cancelPushBtn->setFlat(false);

        horizontalLayout_2->addWidget(cancelPushBtn);

        deleteBtn = new QPushButton(frame);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setMinimumSize(QSize(120, 36));
        deleteBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_2->addWidget(deleteBtn);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(frame);


        retranslateUi(DelUserDialog);

        QMetaObject::connectSlotsByName(DelUserDialog);
    } // setupUi

    void retranslateUi(QDialog *DelUserDialog)
    {
        titleLabel->setText(QString());
        keepRadioBtn->setText(QString());
        label->setText(QApplication::translate("DelUserDialog", "keep the user's data, like desktop,documents, favorites, music, pictures and so on", nullptr));
        delRadioBtn->setText(QString());
        label_2->setText(QApplication::translate("DelUserDialog", "delete whole data belong user", nullptr));
        cancelPushBtn->setText(QApplication::translate("DelUserDialog", "Cancel", nullptr));
        deleteBtn->setText(QApplication::translate("DelUserDialog", "Delete", nullptr));
        Q_UNUSED(DelUserDialog);
    } // retranslateUi

};

namespace Ui {
    class DelUserDialog: public Ui_DelUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELUSERDIALOG_H
