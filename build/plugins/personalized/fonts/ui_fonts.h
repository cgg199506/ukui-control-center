/********************************************************************************
** Form generated from reading UI file 'fonts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTS_H
#define UI_FONTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fonts
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_2;
    QFrame *fontSizeFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *fontLayout;
    QLabel *fontSizeLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *fontTypeFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *fontSelectLabel;
    QComboBox *fontSelectComBox;
    QFrame *fontTypeFrame_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *monoSelectLabel;
    QComboBox *monoSelectComBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *resetBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *advancedBtn;
    QSpacerItem *horizontalSpacer;
    QFrame *advancedFrame;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *defaultFontLabel;
    QComboBox *defaultFontComBox;
    QSpacerItem *horizontalSpacer_13;
    QComboBox *defaultSizeComBox;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *docFontLabel;
    QComboBox *docFontComBox;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *docSizeComBox;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *monoFontLabel;
    QComboBox *monoFontComBox;
    QSpacerItem *horizontalSpacer_15;
    QComboBox *MonoSizeComBox;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_14;
    QLabel *titleFontLabel;
    QComboBox *titleFontComBox;
    QSpacerItem *horizontalSpacer_17;
    QComboBox *titleSizeComBox;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_5;
    QLabel *titleSecondLabel;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sampleBtn1;
    QPushButton *sampleBtn2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *sampleBtn3;
    QPushButton *sampleBtn4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer;
    QButtonGroup *sampleBtnGroup;

    void setupUi(QWidget *Fonts)
    {
        if (Fonts->objectName().isEmpty())
            Fonts->setObjectName(QString::fromUtf8("Fonts"));
        Fonts->resize(817, 1142);
        Fonts->setMinimumSize(QSize(0, 0));
        Fonts->setMaximumSize(QSize(16777215, 16777215));
        Fonts->setWindowTitle(QString::fromUtf8("Fonts"));
        verticalLayout_3 = new QVBoxLayout(Fonts);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 32, -1);
        titleLabel = new QLabel(Fonts);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout_3->addWidget(titleLabel);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        fontSizeFrame = new QFrame(Fonts);
        fontSizeFrame->setObjectName(QString::fromUtf8("fontSizeFrame"));
        fontSizeFrame->setMinimumSize(QSize(550, 80));
        fontSizeFrame->setMaximumSize(QSize(960, 80));
        fontSizeFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(fontSizeFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        fontLayout = new QHBoxLayout();
        fontLayout->setSpacing(0);
        fontLayout->setObjectName(QString::fromUtf8("fontLayout"));
        fontLayout->setContentsMargins(16, -1, -1, -1);
        fontSizeLabel = new QLabel(fontSizeFrame);
        fontSizeLabel->setObjectName(QString::fromUtf8("fontSizeLabel"));
        sizePolicy.setHeightForWidth(fontSizeLabel->sizePolicy().hasHeightForWidth());
        fontSizeLabel->setSizePolicy(sizePolicy);
        fontSizeLabel->setMinimumSize(QSize(140, 0));
        fontSizeLabel->setMaximumSize(QSize(140, 16777215));

        fontLayout->addWidget(fontSizeLabel);


        horizontalLayout_6->addLayout(fontLayout);


        verticalLayout_3->addWidget(fontSizeFrame);

        verticalSpacer_3 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        fontTypeFrame = new QFrame(Fonts);
        fontTypeFrame->setObjectName(QString::fromUtf8("fontTypeFrame"));
        fontTypeFrame->setMaximumSize(QSize(960, 60));
        fontTypeFrame->setFrameShape(QFrame::Box);
        fontTypeFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(fontTypeFrame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        fontSelectLabel = new QLabel(fontTypeFrame);
        fontSelectLabel->setObjectName(QString::fromUtf8("fontSelectLabel"));
        sizePolicy.setHeightForWidth(fontSelectLabel->sizePolicy().hasHeightForWidth());
        fontSelectLabel->setSizePolicy(sizePolicy);
        fontSelectLabel->setMinimumSize(QSize(140, 0));
        fontSelectLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_7->addWidget(fontSelectLabel);

        fontSelectComBox = new QComboBox(fontTypeFrame);
        fontSelectComBox->setObjectName(QString::fromUtf8("fontSelectComBox"));
        fontSelectComBox->setMinimumSize(QSize(400, 0));
        fontSelectComBox->setMaximumSize(QSize(16777215, 32));
        fontSelectComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(fontSelectComBox);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(fontTypeFrame);

        fontTypeFrame_2 = new QFrame(Fonts);
        fontTypeFrame_2->setObjectName(QString::fromUtf8("fontTypeFrame_2"));
        fontTypeFrame_2->setMaximumSize(QSize(960, 60));
        fontTypeFrame_2->setFrameShape(QFrame::Box);
        fontTypeFrame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(fontTypeFrame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        monoSelectLabel = new QLabel(fontTypeFrame_2);
        monoSelectLabel->setObjectName(QString::fromUtf8("monoSelectLabel"));
        sizePolicy.setHeightForWidth(monoSelectLabel->sizePolicy().hasHeightForWidth());
        monoSelectLabel->setSizePolicy(sizePolicy);
        monoSelectLabel->setMinimumSize(QSize(140, 0));
        monoSelectLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_9->addWidget(monoSelectLabel);

        monoSelectComBox = new QComboBox(fontTypeFrame_2);
        monoSelectComBox->setObjectName(QString::fromUtf8("monoSelectComBox"));
        monoSelectComBox->setMinimumSize(QSize(400, 0));
        monoSelectComBox->setMaximumSize(QSize(1677215, 32));
        monoSelectComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_9->addWidget(monoSelectComBox);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addWidget(fontTypeFrame_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        resetBtn = new QPushButton(Fonts);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));
        resetBtn->setMinimumSize(QSize(120, 36));
        resetBtn->setMaximumSize(QSize(1200, 36));

        horizontalLayout_4->addWidget(resetBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        advancedBtn = new QPushButton(Fonts);
        advancedBtn->setObjectName(QString::fromUtf8("advancedBtn"));
        advancedBtn->setMinimumSize(QSize(120, 36));
        advancedBtn->setMaximumSize(QSize(120, 36));
        advancedBtn->setCheckable(true);

        horizontalLayout->addWidget(advancedBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        advancedFrame = new QFrame(Fonts);
        advancedFrame->setObjectName(QString::fromUtf8("advancedFrame"));
        advancedFrame->setMinimumSize(QSize(550, 250));
        advancedFrame->setMaximumSize(QSize(960, 250));
        advancedFrame->setFrameShape(QFrame::Box);
        verticalLayout_5 = new QVBoxLayout(advancedFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(16, 0, 10, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        defaultFontLabel = new QLabel(advancedFrame);
        defaultFontLabel->setObjectName(QString::fromUtf8("defaultFontLabel"));
        sizePolicy.setHeightForWidth(defaultFontLabel->sizePolicy().hasHeightForWidth());
        defaultFontLabel->setSizePolicy(sizePolicy);
        defaultFontLabel->setMinimumSize(QSize(140, 0));
        defaultFontLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_10->addWidget(defaultFontLabel);

        defaultFontComBox = new QComboBox(advancedFrame);
        defaultFontComBox->setObjectName(QString::fromUtf8("defaultFontComBox"));
        defaultFontComBox->setMinimumSize(QSize(240, 0));
        defaultFontComBox->setMaximumSize(QSize(240, 30));
        defaultFontComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_10->addWidget(defaultFontComBox);

        horizontalSpacer_13 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        defaultSizeComBox = new QComboBox(advancedFrame);
        defaultSizeComBox->setObjectName(QString::fromUtf8("defaultSizeComBox"));
        defaultSizeComBox->setMinimumSize(QSize(144, 0));
        defaultSizeComBox->setMaximumSize(QSize(240, 30));
        defaultSizeComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_10->addWidget(defaultSizeComBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_10);

        line_2 = new QFrame(advancedFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(541, 0));
        line_2->setMaximumSize(QSize(541, 16777215));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        docFontLabel = new QLabel(advancedFrame);
        docFontLabel->setObjectName(QString::fromUtf8("docFontLabel"));
        sizePolicy.setHeightForWidth(docFontLabel->sizePolicy().hasHeightForWidth());
        docFontLabel->setSizePolicy(sizePolicy);
        docFontLabel->setMinimumSize(QSize(140, 0));
        docFontLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_11->addWidget(docFontLabel);

        docFontComBox = new QComboBox(advancedFrame);
        docFontComBox->setObjectName(QString::fromUtf8("docFontComBox"));
        docFontComBox->setMinimumSize(QSize(240, 0));
        docFontComBox->setMaximumSize(QSize(240, 30));
        docFontComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_11->addWidget(docFontComBox);

        horizontalSpacer_14 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        docSizeComBox = new QComboBox(advancedFrame);
        docSizeComBox->setObjectName(QString::fromUtf8("docSizeComBox"));
        docSizeComBox->setMinimumSize(QSize(144, 0));
        docSizeComBox->setMaximumSize(QSize(144, 30));
        docSizeComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_11->addWidget(docSizeComBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_11);

        line_3 = new QFrame(advancedFrame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(541, 0));
        line_3->setMaximumSize(QSize(541, 16777215));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        monoFontLabel = new QLabel(advancedFrame);
        monoFontLabel->setObjectName(QString::fromUtf8("monoFontLabel"));
        sizePolicy.setHeightForWidth(monoFontLabel->sizePolicy().hasHeightForWidth());
        monoFontLabel->setSizePolicy(sizePolicy);
        monoFontLabel->setMinimumSize(QSize(140, 0));
        monoFontLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_12->addWidget(monoFontLabel);

        monoFontComBox = new QComboBox(advancedFrame);
        monoFontComBox->setObjectName(QString::fromUtf8("monoFontComBox"));
        monoFontComBox->setMinimumSize(QSize(240, 0));
        monoFontComBox->setMaximumSize(QSize(240, 30));
        monoFontComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_12->addWidget(monoFontComBox);

        horizontalSpacer_15 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_15);

        MonoSizeComBox = new QComboBox(advancedFrame);
        MonoSizeComBox->setObjectName(QString::fromUtf8("MonoSizeComBox"));
        MonoSizeComBox->setMinimumSize(QSize(144, 0));
        MonoSizeComBox->setMaximumSize(QSize(144, 30));
        MonoSizeComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_12->addWidget(MonoSizeComBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_12);

        line_5 = new QFrame(advancedFrame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setMinimumSize(QSize(541, 0));
        line_5->setMaximumSize(QSize(541, 16777215));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        titleFontLabel = new QLabel(advancedFrame);
        titleFontLabel->setObjectName(QString::fromUtf8("titleFontLabel"));
        sizePolicy.setHeightForWidth(titleFontLabel->sizePolicy().hasHeightForWidth());
        titleFontLabel->setSizePolicy(sizePolicy);
        titleFontLabel->setMinimumSize(QSize(140, 0));
        titleFontLabel->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_14->addWidget(titleFontLabel);

        titleFontComBox = new QComboBox(advancedFrame);
        titleFontComBox->setObjectName(QString::fromUtf8("titleFontComBox"));
        titleFontComBox->setMinimumSize(QSize(240, 0));
        titleFontComBox->setMaximumSize(QSize(240, 30));
        titleFontComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_14->addWidget(titleFontComBox);

        horizontalSpacer_17 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);

        titleSizeComBox = new QComboBox(advancedFrame);
        titleSizeComBox->setObjectName(QString::fromUtf8("titleSizeComBox"));
        titleSizeComBox->setMinimumSize(QSize(144, 0));
        titleSizeComBox->setMaximumSize(QSize(144, 30));
        titleSizeComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_14->addWidget(titleSizeComBox);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_14);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_3->addWidget(advancedFrame);

        verticalSpacer_5 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        titleSecondLabel = new QLabel(Fonts);
        titleSecondLabel->setObjectName(QString::fromUtf8("titleSecondLabel"));
        sizePolicy.setHeightForWidth(titleSecondLabel->sizePolicy().hasHeightForWidth());
        titleSecondLabel->setSizePolicy(sizePolicy);
        titleSecondLabel->setScaledContents(true);

        verticalLayout_3->addWidget(titleSecondLabel);

        verticalSpacer_6 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(16);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sampleBtn1 = new QPushButton(Fonts);
        sampleBtnGroup = new QButtonGroup(Fonts);
        sampleBtnGroup->setObjectName(QString::fromUtf8("sampleBtnGroup"));
        sampleBtnGroup->addButton(sampleBtn1);
        sampleBtn1->setObjectName(QString::fromUtf8("sampleBtn1"));
        sampleBtn1->setMinimumSize(QSize(267, 110));
        sampleBtn1->setMaximumSize(QSize(267, 110));
        sampleBtn1->setCheckable(true);

        horizontalLayout_2->addWidget(sampleBtn1);

        sampleBtn2 = new QPushButton(Fonts);
        sampleBtnGroup->addButton(sampleBtn2);
        sampleBtn2->setObjectName(QString::fromUtf8("sampleBtn2"));
        sampleBtn2->setMinimumSize(QSize(267, 110));
        sampleBtn2->setMaximumSize(QSize(267, 110));
        sampleBtn2->setCheckable(true);

        horizontalLayout_2->addWidget(sampleBtn2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_7 = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(16);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sampleBtn3 = new QPushButton(Fonts);
        sampleBtnGroup->addButton(sampleBtn3);
        sampleBtn3->setObjectName(QString::fromUtf8("sampleBtn3"));
        sampleBtn3->setMinimumSize(QSize(267, 110));
        sampleBtn3->setMaximumSize(QSize(267, 110));
        sampleBtn3->setCheckable(true);

        horizontalLayout_3->addWidget(sampleBtn3);

        sampleBtn4 = new QPushButton(Fonts);
        sampleBtnGroup->addButton(sampleBtn4);
        sampleBtn4->setObjectName(QString::fromUtf8("sampleBtn4"));
        sampleBtn4->setMinimumSize(QSize(267, 110));
        sampleBtn4->setMaximumSize(QSize(267, 110));
        sampleBtn4->setCheckable(true);

        horizontalLayout_3->addWidget(sampleBtn4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_8 = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(Fonts);

        QMetaObject::connectSlotsByName(Fonts);
    } // setupUi

    void retranslateUi(QWidget *Fonts)
    {
        titleLabel->setText(QApplication::translate("Fonts", "Fonts", nullptr));
        fontSizeLabel->setText(QApplication::translate("Fonts", "Font size", nullptr));
        fontSelectLabel->setText(QApplication::translate("Fonts", "Fonts select", nullptr));
        monoSelectLabel->setText(QApplication::translate("Fonts", "Mono font", nullptr));
        resetBtn->setText(QApplication::translate("Fonts", "Reset to default", nullptr));
        advancedBtn->setText(QApplication::translate("Fonts", "Advanced settings", nullptr));
        defaultFontLabel->setText(QApplication::translate("Fonts", "Gtk default font", nullptr));
        docFontLabel->setText(QApplication::translate("Fonts", "Document font", nullptr));
        monoFontLabel->setText(QApplication::translate("Fonts", "Monospace font", nullptr));
        titleFontLabel->setText(QApplication::translate("Fonts", "titlebar font", nullptr));
        titleSecondLabel->setText(QApplication::translate("Fonts", "Select text sample that looks clearest", nullptr));
        sampleBtn1->setText(QString());
        sampleBtn2->setText(QString());
        sampleBtn3->setText(QString());
        sampleBtn4->setText(QString());
        Q_UNUSED(Fonts);
    } // retranslateUi

};

namespace Ui {
    class Fonts: public Ui_Fonts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTS_H
