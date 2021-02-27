/********************************************************************************
** Form generated from reading UI file 'changefacedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEFACEDIALOG_H
#define UI_CHANGEFACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeFaceDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *faceLabel;
    QVBoxLayout *verticalLayout_8;
    QLabel *usernameLabel;
    QLabel *typeLabel;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QWidget *facesWidget;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *customfaceBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *saveBtn;

    void setupUi(QDialog *ChangeFaceDialog)
    {
        if (ChangeFaceDialog->objectName().isEmpty())
            ChangeFaceDialog->setObjectName(QString::fromUtf8("ChangeFaceDialog"));
        ChangeFaceDialog->resize(420, 470);
        ChangeFaceDialog->setMinimumSize(QSize(420, 470));
        ChangeFaceDialog->setMaximumSize(QSize(420, 470));
        ChangeFaceDialog->setWindowTitle(QString::fromUtf8("Change Face"));
        verticalLayout_2 = new QVBoxLayout(ChangeFaceDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ChangeFaceDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(32, 32, 32, 24);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        verticalLayout_7->addWidget(titleLabel);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        faceLabel = new QLabel(frame);
        faceLabel->setObjectName(QString::fromUtf8("faceLabel"));
        faceLabel->setMinimumSize(QSize(48, 48));
        faceLabel->setMaximumSize(QSize(48, 48));
        faceLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(faceLabel);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        usernameLabel = new QLabel(frame);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        verticalLayout_8->addWidget(usernameLabel, 0, Qt::AlignBottom);

        typeLabel = new QLabel(frame);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        verticalLayout_8->addWidget(typeLabel, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_4);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        verticalSpacer_5 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_5);

        facesWidget = new QWidget(frame);
        facesWidget->setObjectName(QString::fromUtf8("facesWidget"));

        verticalLayout_7->addWidget(facesWidget);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        customfaceBtn = new QPushButton(frame);
        customfaceBtn->setObjectName(QString::fromUtf8("customfaceBtn"));
        customfaceBtn->setMinimumSize(QSize(144, 36));
        customfaceBtn->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setUnderline(true);
        customfaceBtn->setFont(font);
        customfaceBtn->setFlat(false);

        horizontalLayout_4->addWidget(customfaceBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(12);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(frame);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout->addWidget(cancelBtn);

        saveBtn = new QPushButton(frame);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setMinimumSize(QSize(120, 36));
        saveBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout->addWidget(saveBtn);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ChangeFaceDialog);

        QMetaObject::connectSlotsByName(ChangeFaceDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeFaceDialog)
    {
        titleLabel->setText(QApplication::translate("ChangeFaceDialog", "Change User Face", nullptr));
        faceLabel->setText(QString());
        usernameLabel->setText(QString());
        typeLabel->setText(QString());
        label->setText(QApplication::translate("ChangeFaceDialog", "System Icon", nullptr));
        customfaceBtn->setText(QApplication::translate("ChangeFaceDialog", "Select face from local", nullptr));
        cancelBtn->setText(QApplication::translate("ChangeFaceDialog", "Cancel", nullptr));
        saveBtn->setText(QApplication::translate("ChangeFaceDialog", "Save", nullptr));
        Q_UNUSED(ChangeFaceDialog);
    } // retranslateUi

};

namespace Ui {
    class ChangeFaceDialog: public Ui_ChangeFaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEFACEDIALOG_H
