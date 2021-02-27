/********************************************************************************
** Form generated from reading UI file 'theme.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEME_H
#define UI_THEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Theme
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QWidget *themeModeWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *defaultButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *lightButton;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *darkButton;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QLabel *iconLabel;
    QSpacerItem *verticalSpacer_8;
    QWidget *iconThemeWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *iconThemeVerLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *controlLabel;
    QWidget *controlWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *controlHorLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *cursorLabel;
    QSpacerItem *verticalSpacer_9;
    QWidget *cursorWidget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *cursorVerLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *effectLabel;
    QSpacerItem *verticalSpacer_7;
    QFrame *effectFrame;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *effectHorLayout;
    QLabel *perforLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *transFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *transparentLayout;
    QLabel *transparencyLabel;
    QLabel *lowLabel;
    QSlider *tranSlider;
    QLabel *highlabel;
    QFrame *kwinFrame;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *kwinLayout;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *resetBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QButtonGroup *themeModeBtnGroup;

    void setupUi(QWidget *Theme)
    {
        if (Theme->objectName().isEmpty())
            Theme->setObjectName(QString::fromUtf8("Theme"));
        Theme->resize(854, 1162);
        Theme->setMinimumSize(QSize(0, 0));
        Theme->setMaximumSize(QSize(16777215, 16777215));
        Theme->setWindowTitle(QString::fromUtf8("Theme"));
        verticalLayout_2 = new QVBoxLayout(Theme);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, -1);
        widget = new QWidget(Theme);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 10);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(titleLabel);

        themeModeWidget = new QWidget(widget);
        themeModeWidget->setObjectName(QString::fromUtf8("themeModeWidget"));
        themeModeWidget->setMinimumSize(QSize(0, 145));
        themeModeWidget->setMaximumSize(QSize(16777215, 145));
        horizontalLayout_2 = new QHBoxLayout(themeModeWidget);
        horizontalLayout_2->setSpacing(16);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 16, 0, 0);
        defaultButton = new QPushButton(themeModeWidget);
        themeModeBtnGroup = new QButtonGroup(Theme);
        themeModeBtnGroup->setObjectName(QString::fromUtf8("themeModeBtnGroup"));
        themeModeBtnGroup->addButton(defaultButton);
        defaultButton->setObjectName(QString::fromUtf8("defaultButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(defaultButton->sizePolicy().hasHeightForWidth());
        defaultButton->setSizePolicy(sizePolicy1);
        defaultButton->setMinimumSize(QSize(176, 0));
        defaultButton->setMaximumSize(QSize(176, 16777215));
        defaultButton->setCheckable(true);

        horizontalLayout_2->addWidget(defaultButton);

        horizontalSpacer_9 = new QSpacerItem(64, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        lightButton = new QPushButton(themeModeWidget);
        themeModeBtnGroup->addButton(lightButton);
        lightButton->setObjectName(QString::fromUtf8("lightButton"));
        sizePolicy1.setHeightForWidth(lightButton->sizePolicy().hasHeightForWidth());
        lightButton->setSizePolicy(sizePolicy1);
        lightButton->setMinimumSize(QSize(176, 0));
        lightButton->setMaximumSize(QSize(176, 16777215));
        lightButton->setCheckable(true);

        horizontalLayout_2->addWidget(lightButton);

        horizontalSpacer_10 = new QSpacerItem(64, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        darkButton = new QPushButton(themeModeWidget);
        themeModeBtnGroup->addButton(darkButton);
        darkButton->setObjectName(QString::fromUtf8("darkButton"));
        sizePolicy1.setHeightForWidth(darkButton->sizePolicy().hasHeightForWidth());
        darkButton->setSizePolicy(sizePolicy1);
        darkButton->setMinimumSize(QSize(176, 0));
        darkButton->setMaximumSize(QSize(176, 16777215));
        darkButton->setCheckable(true);

        horizontalLayout_2->addWidget(darkButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        verticalLayout->addWidget(themeModeWidget);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        iconLabel = new QLabel(widget);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        sizePolicy.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(iconLabel);

        verticalSpacer_8 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_8);

        iconThemeWidget = new QWidget(widget);
        iconThemeWidget->setObjectName(QString::fromUtf8("iconThemeWidget"));
        verticalLayout_8 = new QVBoxLayout(iconThemeWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        iconThemeVerLayout = new QVBoxLayout();
        iconThemeVerLayout->setSpacing(8);
        iconThemeVerLayout->setObjectName(QString::fromUtf8("iconThemeVerLayout"));

        verticalLayout_8->addLayout(iconThemeVerLayout);


        verticalLayout->addWidget(iconThemeWidget);

        verticalSpacer_2 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        controlLabel = new QLabel(widget);
        controlLabel->setObjectName(QString::fromUtf8("controlLabel"));
        sizePolicy.setHeightForWidth(controlLabel->sizePolicy().hasHeightForWidth());
        controlLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(controlLabel);

        controlWidget = new QWidget(widget);
        controlWidget->setObjectName(QString::fromUtf8("controlWidget"));
        controlWidget->setMinimumSize(QSize(0, 66));
        controlWidget->setMaximumSize(QSize(16777215, 66));
        horizontalLayout_6 = new QHBoxLayout(controlWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        controlHorLayout = new QHBoxLayout();
        controlHorLayout->setSpacing(16);
        controlHorLayout->setObjectName(QString::fromUtf8("controlHorLayout"));
        controlHorLayout->setContentsMargins(24, -1, 24, -1);

        horizontalLayout_6->addLayout(controlHorLayout);


        verticalLayout->addWidget(controlWidget);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        cursorLabel = new QLabel(widget);
        cursorLabel->setObjectName(QString::fromUtf8("cursorLabel"));
        sizePolicy.setHeightForWidth(cursorLabel->sizePolicy().hasHeightForWidth());
        cursorLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(cursorLabel);

        verticalSpacer_9 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        cursorWidget = new QWidget(widget);
        cursorWidget->setObjectName(QString::fromUtf8("cursorWidget"));
        verticalLayout_9 = new QVBoxLayout(cursorWidget);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        cursorVerLayout = new QVBoxLayout();
        cursorVerLayout->setSpacing(8);
        cursorVerLayout->setObjectName(QString::fromUtf8("cursorVerLayout"));

        verticalLayout_9->addLayout(cursorVerLayout);


        verticalLayout->addWidget(cursorWidget);

        verticalSpacer_4 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        effectLabel = new QLabel(widget);
        effectLabel->setObjectName(QString::fromUtf8("effectLabel"));
        sizePolicy.setHeightForWidth(effectLabel->sizePolicy().hasHeightForWidth());
        effectLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(effectLabel);

        verticalSpacer_7 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_7);

        effectFrame = new QFrame(widget);
        effectFrame->setObjectName(QString::fromUtf8("effectFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(effectFrame->sizePolicy().hasHeightForWidth());
        effectFrame->setSizePolicy(sizePolicy2);
        effectFrame->setMinimumSize(QSize(550, 50));
        effectFrame->setMaximumSize(QSize(960, 200));
        effectFrame->setFrameShape(QFrame::Box);
        verticalLayout_10 = new QVBoxLayout(effectFrame);
        verticalLayout_10->setSpacing(10);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(10, 0, 10, 0);
        effectHorLayout = new QHBoxLayout();
        effectHorLayout->setSpacing(0);
        effectHorLayout->setObjectName(QString::fromUtf8("effectHorLayout"));
        effectHorLayout->setContentsMargins(6, -1, 6, -1);
        perforLabel = new QLabel(effectFrame);
        perforLabel->setObjectName(QString::fromUtf8("perforLabel"));
        sizePolicy.setHeightForWidth(perforLabel->sizePolicy().hasHeightForWidth());
        perforLabel->setSizePolicy(sizePolicy);

        effectHorLayout->addWidget(perforLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        effectHorLayout->addItem(horizontalSpacer);


        verticalLayout_10->addLayout(effectHorLayout);


        verticalLayout->addWidget(effectFrame);

        transFrame = new QFrame(widget);
        transFrame->setObjectName(QString::fromUtf8("transFrame"));
        transFrame->setMinimumSize(QSize(550, 50));
        transFrame->setMaximumSize(QSize(960, 16777215));
        transFrame->setSizeIncrement(QSize(0, 0));
        transFrame->setFrameShape(QFrame::Box);
        transFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(transFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        transparentLayout = new QHBoxLayout();
        transparentLayout->setSpacing(16);
        transparentLayout->setObjectName(QString::fromUtf8("transparentLayout"));
        transparentLayout->setContentsMargins(6, -1, 6, -1);
        transparencyLabel = new QLabel(transFrame);
        transparencyLabel->setObjectName(QString::fromUtf8("transparencyLabel"));

        transparentLayout->addWidget(transparencyLabel);

        lowLabel = new QLabel(transFrame);
        lowLabel->setObjectName(QString::fromUtf8("lowLabel"));

        transparentLayout->addWidget(lowLabel);

        tranSlider = new QSlider(transFrame);
        tranSlider->setObjectName(QString::fromUtf8("tranSlider"));
        tranSlider->setOrientation(Qt::Horizontal);

        transparentLayout->addWidget(tranSlider);

        highlabel = new QLabel(transFrame);
        highlabel->setObjectName(QString::fromUtf8("highlabel"));

        transparentLayout->addWidget(highlabel);


        verticalLayout_4->addLayout(transparentLayout);


        verticalLayout->addWidget(transFrame);

        kwinFrame = new QFrame(widget);
        kwinFrame->setObjectName(QString::fromUtf8("kwinFrame"));
        kwinFrame->setMinimumSize(QSize(550, 65));
        kwinFrame->setMaximumSize(QSize(960, 16777215));
        kwinFrame->setSizeIncrement(QSize(0, 0));
        kwinFrame->setFrameShape(QFrame::Box);
        kwinFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(kwinFrame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, -1, 0);
        kwinLayout = new QHBoxLayout();
        kwinLayout->setSpacing(16);
        kwinLayout->setObjectName(QString::fromUtf8("kwinLayout"));
        kwinLayout->setContentsMargins(6, -1, 6, -1);

        verticalLayout_6->addLayout(kwinLayout);


        verticalLayout->addWidget(kwinFrame);

        verticalSpacer_5 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        resetBtn = new QPushButton(widget);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));
        resetBtn->setMinimumSize(QSize(120, 36));
        resetBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_8->addWidget(resetBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);


        retranslateUi(Theme);

        QMetaObject::connectSlotsByName(Theme);
    } // setupUi

    void retranslateUi(QWidget *Theme)
    {
        titleLabel->setText(QApplication::translate("Theme", "Theme Mode", nullptr));
        defaultButton->setText(QString());
        lightButton->setText(QString());
        darkButton->setText(QString());
        iconLabel->setText(QApplication::translate("Theme", "Icon theme", nullptr));
        controlLabel->setText(QApplication::translate("Theme", "Control theme", nullptr));
        cursorLabel->setText(QApplication::translate("Theme", "Cursor theme", nullptr));
        effectLabel->setText(QApplication::translate("Theme", "Effect setting", nullptr));
        perforLabel->setText(QApplication::translate("Theme", "Performance mode", nullptr));
        transparencyLabel->setText(QApplication::translate("Theme", "Transparency", nullptr));
        lowLabel->setText(QString());
        highlabel->setText(QString());
        resetBtn->setText(QApplication::translate("Theme", "Reset to default", nullptr));
        Q_UNUSED(Theme);
    } // retranslateUi

};

namespace Ui {
    class Theme: public Ui_Theme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEME_H
