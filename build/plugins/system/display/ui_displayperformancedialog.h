/********************************************************************************
** Form generated from reading UI file 'displayperformancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYPERFORMANCEDIALOG_H
#define UI_DISPLAYPERFORMANCEDIALOG_H

#include <CloseButton/closebutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayPerformanceDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFrame *closeFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    CloseButton *closeBtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *titleLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_32;
    QVBoxLayout *verticalLayout_6;
    QFrame *performanceFrame;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *performanceRadioBtn;
    QSpacerItem *horizontalSpacer_2;
    QFrame *performanceTipFrame;
    QVBoxLayout *verticalLayout_11;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_8;
    QFrame *compatibleFrame;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *compatibleRadioBtn;
    QSpacerItem *horizontalSpacer_3;
    QFrame *compatibleTipFrame;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_9;
    QFrame *automaticFrame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *autoRadioBtn;
    QSpacerItem *horizontalSpacer_4;
    QFrame *automaticTipFrame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QHBoxLayout *autoHorLayout;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QPushButton *applyBtn;
    QPushButton *resetBtn;
    QLabel *label_6;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *DisplayPerformanceDialog)
    {
        if (DisplayPerformanceDialog->objectName().isEmpty())
            DisplayPerformanceDialog->setObjectName(QString::fromUtf8("DisplayPerformanceDialog"));
        DisplayPerformanceDialog->resize(580, 646);
        DisplayPerformanceDialog->setMinimumSize(QSize(580, 646));
        DisplayPerformanceDialog->setMaximumSize(QSize(580, 646));
        verticalLayout_2 = new QVBoxLayout(DisplayPerformanceDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 9, 9, 9);
        frame = new QFrame(DisplayPerformanceDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        closeFrame = new QFrame(frame);
        closeFrame->setObjectName(QString::fromUtf8("closeFrame"));
        closeFrame->setMinimumSize(QSize(0, 36));
        closeFrame->setMaximumSize(QSize(16777215, 36));
        closeFrame->setFrameShape(QFrame::StyledPanel);
        closeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(closeFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new CloseButton(closeFrame);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setMinimumSize(QSize(32, 32));
        closeBtn->setMaximumSize(QSize(32, 32));

        horizontalLayout_2->addWidget(closeBtn);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(closeFrame);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4->setContentsMargins(32, 16, 32, 32);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(titleLabel);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 501, 538));
        verticalLayout_32 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        performanceFrame = new QFrame(scrollAreaWidgetContents);
        performanceFrame->setObjectName(QString::fromUtf8("performanceFrame"));
        performanceFrame->setMinimumSize(QSize(0, 50));
        performanceFrame->setMaximumSize(QSize(16777215, 50));
        performanceFrame->setFrameShape(QFrame::Box);
        performanceFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(performanceFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(16, -1, -1, -1);
        performanceRadioBtn = new QRadioButton(performanceFrame);
        buttonGroup = new QButtonGroup(DisplayPerformanceDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(performanceRadioBtn);
        performanceRadioBtn->setObjectName(QString::fromUtf8("performanceRadioBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(performanceRadioBtn->sizePolicy().hasHeightForWidth());
        performanceRadioBtn->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(performanceRadioBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addWidget(performanceFrame);

        performanceTipFrame = new QFrame(scrollAreaWidgetContents);
        performanceTipFrame->setObjectName(QString::fromUtf8("performanceTipFrame"));
        sizePolicy.setHeightForWidth(performanceTipFrame->sizePolicy().hasHeightForWidth());
        performanceTipFrame->setSizePolicy(sizePolicy);
        performanceTipFrame->setMinimumSize(QSize(0, 0));
        performanceTipFrame->setMaximumSize(QSize(16777215, 16777215));
        performanceTipFrame->setFrameShape(QFrame::Box);
        performanceTipFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_11 = new QVBoxLayout(performanceTipFrame);
        verticalLayout_11->setSpacing(8);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(16, 0, 16, 0);
        label = new QLabel(performanceTipFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAutoFillBackground(false);
        label->setWordWrap(true);

        verticalLayout_11->addWidget(label);

        label_2 = new QLabel(performanceTipFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(true);

        verticalLayout_11->addWidget(label_2);


        verticalLayout_6->addWidget(performanceTipFrame);


        verticalLayout_32->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        compatibleFrame = new QFrame(scrollAreaWidgetContents);
        compatibleFrame->setObjectName(QString::fromUtf8("compatibleFrame"));
        compatibleFrame->setMinimumSize(QSize(0, 50));
        compatibleFrame->setMaximumSize(QSize(16777215, 50));
        compatibleFrame->setFrameShape(QFrame::Box);
        compatibleFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(compatibleFrame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(16, -1, -1, -1);
        compatibleRadioBtn = new QRadioButton(compatibleFrame);
        buttonGroup->addButton(compatibleRadioBtn);
        compatibleRadioBtn->setObjectName(QString::fromUtf8("compatibleRadioBtn"));
        sizePolicy2.setHeightForWidth(compatibleRadioBtn->sizePolicy().hasHeightForWidth());
        compatibleRadioBtn->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(compatibleRadioBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_8->addWidget(compatibleFrame);

        compatibleTipFrame = new QFrame(scrollAreaWidgetContents);
        compatibleTipFrame->setObjectName(QString::fromUtf8("compatibleTipFrame"));
        sizePolicy.setHeightForWidth(compatibleTipFrame->sizePolicy().hasHeightForWidth());
        compatibleTipFrame->setSizePolicy(sizePolicy);
        compatibleTipFrame->setMinimumSize(QSize(0, 0));
        compatibleTipFrame->setMaximumSize(QSize(16777215, 16777215));
        compatibleTipFrame->setFrameShape(QFrame::Box);
        compatibleTipFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_12 = new QVBoxLayout(compatibleTipFrame);
        verticalLayout_12->setSpacing(8);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(16, 0, 16, 0);
        label_3 = new QLabel(compatibleTipFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setWordWrap(true);

        verticalLayout_12->addWidget(label_3);

        label_4 = new QLabel(compatibleTipFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setWordWrap(true);

        verticalLayout_12->addWidget(label_4);


        verticalLayout_8->addWidget(compatibleTipFrame);


        verticalLayout_32->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        automaticFrame = new QFrame(scrollAreaWidgetContents);
        automaticFrame->setObjectName(QString::fromUtf8("automaticFrame"));
        automaticFrame->setMinimumSize(QSize(0, 50));
        automaticFrame->setMaximumSize(QSize(16777215, 50));
        automaticFrame->setFrameShape(QFrame::Box);
        automaticFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_8 = new QHBoxLayout(automaticFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, -1, -1, -1);
        autoRadioBtn = new QRadioButton(automaticFrame);
        buttonGroup->addButton(autoRadioBtn);
        autoRadioBtn->setObjectName(QString::fromUtf8("autoRadioBtn"));
        sizePolicy2.setHeightForWidth(autoRadioBtn->sizePolicy().hasHeightForWidth());
        autoRadioBtn->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(autoRadioBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_9->addWidget(automaticFrame);

        automaticTipFrame = new QFrame(scrollAreaWidgetContents);
        automaticTipFrame->setObjectName(QString::fromUtf8("automaticTipFrame"));
        sizePolicy.setHeightForWidth(automaticTipFrame->sizePolicy().hasHeightForWidth());
        automaticTipFrame->setSizePolicy(sizePolicy);
        automaticTipFrame->setMinimumSize(QSize(0, 0));
        automaticTipFrame->setMaximumSize(QSize(16777215, 16777215));
        automaticTipFrame->setFrameShape(QFrame::Box);
        automaticTipFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(automaticTipFrame);
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(16, 0, 16, 0);
        label_5 = new QLabel(automaticTipFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setWordWrap(true);

        verticalLayout_5->addWidget(label_5);

        autoHorLayout = new QHBoxLayout();
        autoHorLayout->setSpacing(16);
        autoHorLayout->setObjectName(QString::fromUtf8("autoHorLayout"));
        label_7 = new QLabel(automaticTipFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        autoHorLayout->addWidget(label_7);

        lineEdit = new QLineEdit(automaticTipFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);

        autoHorLayout->addWidget(lineEdit);

        applyBtn = new QPushButton(automaticTipFrame);
        applyBtn->setObjectName(QString::fromUtf8("applyBtn"));
        sizePolicy2.setHeightForWidth(applyBtn->sizePolicy().hasHeightForWidth());
        applyBtn->setSizePolicy(sizePolicy2);

        autoHorLayout->addWidget(applyBtn);

        resetBtn = new QPushButton(automaticTipFrame);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));
        sizePolicy2.setHeightForWidth(resetBtn->sizePolicy().hasHeightForWidth());
        resetBtn->setSizePolicy(sizePolicy2);

        autoHorLayout->addWidget(resetBtn);


        verticalLayout_5->addLayout(autoHorLayout);

        label_6 = new QLabel(automaticTipFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setWordWrap(true);

        verticalLayout_5->addWidget(label_6);


        verticalLayout_9->addWidget(automaticTipFrame);


        verticalLayout_32->addLayout(verticalLayout_9);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(widget);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(DisplayPerformanceDialog);

        QMetaObject::connectSlotsByName(DisplayPerformanceDialog);
    } // setupUi

    void retranslateUi(QDialog *DisplayPerformanceDialog)
    {
        DisplayPerformanceDialog->setWindowTitle(QApplication::translate("DisplayPerformanceDialog", "Dialog", nullptr));
        closeBtn->setText(QString());
        titleLabel->setText(QApplication::translate("DisplayPerformanceDialog", "Display Advanced Settings", nullptr));
        performanceRadioBtn->setText(QApplication::translate("DisplayPerformanceDialog", "Performance", nullptr));
        label->setText(QApplication::translate("DisplayPerformanceDialog", "Applicable to machine with discrete graphics, which can accelerate the rendering of 3D graphics.", nullptr));
        label_2->setText(QApplication::translate("DisplayPerformanceDialog", "(Note: not support connect graphical with xmanager on windows.)", nullptr));
        compatibleRadioBtn->setText(QApplication::translate("DisplayPerformanceDialog", "Compatible", nullptr));
        label_3->setText(QApplication::translate("DisplayPerformanceDialog", "Applicable to machine with integrated graphics,  there is no 3D graphics acceleration. ", nullptr));
        label_4->setText(QApplication::translate("DisplayPerformanceDialog", "(Note: need connect graphical with xmanager on windows, use this option.)", nullptr));
        autoRadioBtn->setText(QApplication::translate("DisplayPerformanceDialog", "Automatic", nullptr));
        label_5->setText(QApplication::translate("DisplayPerformanceDialog", "Auto select according to environment, delay the login time (about 0.5 sec).", nullptr));
        label_7->setText(QApplication::translate("DisplayPerformanceDialog", "Threshold:", nullptr));
        applyBtn->setText(QApplication::translate("DisplayPerformanceDialog", "Apply", nullptr));
        resetBtn->setText(QApplication::translate("DisplayPerformanceDialog", "Reset", nullptr));
        label_6->setText(QApplication::translate("DisplayPerformanceDialog", "(Note: select this option to use 3D graphics acceleration and xmanager.)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayPerformanceDialog: public Ui_DisplayPerformanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYPERFORMANCEDIALOG_H
