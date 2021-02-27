/********************************************************************************
** Form generated from reading UI file 'wallpaper.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLPAPER_H
#define UI_WALLPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wallpaper
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *wallpaperWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QStackedWidget *previewStackedWidget;
    QWidget *pPicturePage;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *previewLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *pColorPage;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QWidget *previewWidget;
    QSpacerItem *horizontalSpacer_2;
    QFrame *switchFrame;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *selectLabel;
    QComboBox *formComBox;
    QStackedWidget *substackedWidget;
    QWidget *picturePage;
    QVBoxLayout *verticalLayout;
    QWidget *picListWidget;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *browserOnlinewpBtn;
    QPushButton *browserLocalwpBtn;
    QPushButton *resetBtn;
    QWidget *colorPage;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *colorListWidget;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Wallpaper)
    {
        if (Wallpaper->objectName().isEmpty())
            Wallpaper->setObjectName(QString::fromUtf8("Wallpaper"));
        Wallpaper->resize(800, 895);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Wallpaper->sizePolicy().hasHeightForWidth());
        Wallpaper->setSizePolicy(sizePolicy);
        Wallpaper->setMinimumSize(QSize(0, 0));
        Wallpaper->setMaximumSize(QSize(16777215, 16777215));
        Wallpaper->setWindowTitle(QString::fromUtf8("Wallpaper"));
        verticalLayout_2 = new QVBoxLayout(Wallpaper);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 48);
        wallpaperWidget = new QWidget(Wallpaper);
        wallpaperWidget->setObjectName(QString::fromUtf8("wallpaperWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wallpaperWidget->sizePolicy().hasHeightForWidth());
        wallpaperWidget->setSizePolicy(sizePolicy1);
        wallpaperWidget->setMinimumSize(QSize(550, 0));
        wallpaperWidget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_6 = new QVBoxLayout(wallpaperWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(16);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 10);
        titleLabel = new QLabel(wallpaperWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(titleLabel);

        previewStackedWidget = new QStackedWidget(wallpaperWidget);
        previewStackedWidget->setObjectName(QString::fromUtf8("previewStackedWidget"));
        previewStackedWidget->setMinimumSize(QSize(0, 180));
        previewStackedWidget->setMaximumSize(QSize(16777215, 180));
        pPicturePage = new QWidget();
        pPicturePage->setObjectName(QString::fromUtf8("pPicturePage"));
        horizontalLayout_8 = new QHBoxLayout(pPicturePage);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        previewLabel = new QLabel(pPicturePage);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        sizePolicy2.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy2);
        previewLabel->setMinimumSize(QSize(300, 180));
        previewLabel->setMaximumSize(QSize(300, 180));

        horizontalLayout->addWidget(previewLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_8->addLayout(horizontalLayout);

        previewStackedWidget->addWidget(pPicturePage);
        pColorPage = new QWidget();
        pColorPage->setObjectName(QString::fromUtf8("pColorPage"));
        horizontalLayout_10 = new QHBoxLayout(pColorPage);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        previewWidget = new QWidget(pColorPage);
        previewWidget->setObjectName(QString::fromUtf8("previewWidget"));
        previewWidget->setMinimumSize(QSize(300, 0));
        previewWidget->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_9->addWidget(previewWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        previewStackedWidget->addWidget(pColorPage);

        verticalLayout_3->addWidget(previewStackedWidget);

        switchFrame = new QFrame(wallpaperWidget);
        switchFrame->setObjectName(QString::fromUtf8("switchFrame"));
        switchFrame->setMinimumSize(QSize(0, 50));
        switchFrame->setMaximumSize(QSize(16777215, 50));
        switchFrame->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(switchFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(8);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(16, -1, 16, -1);
        selectLabel = new QLabel(switchFrame);
        selectLabel->setObjectName(QString::fromUtf8("selectLabel"));
        sizePolicy2.setHeightForWidth(selectLabel->sizePolicy().hasHeightForWidth());
        selectLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(selectLabel);

        formComBox = new QComboBox(switchFrame);
        formComBox->setObjectName(QString::fromUtf8("formComBox"));
        formComBox->setMinimumSize(QSize(144, 0));
        formComBox->setMaximumSize(QSize(16777215, 30));
        formComBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(formComBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(switchFrame);

        substackedWidget = new QStackedWidget(wallpaperWidget);
        substackedWidget->setObjectName(QString::fromUtf8("substackedWidget"));
        substackedWidget->setMinimumSize(QSize(0, 0));
        substackedWidget->setMaximumSize(QSize(16777215, 16777215));
        picturePage = new QWidget();
        picturePage->setObjectName(QString::fromUtf8("picturePage"));
        verticalLayout = new QVBoxLayout(picturePage);
        verticalLayout->setSpacing(48);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 20, 0, 0);
        picListWidget = new QWidget(picturePage);
        picListWidget->setObjectName(QString::fromUtf8("picListWidget"));
        picListWidget->setMinimumSize(QSize(0, 345));

        verticalLayout->addWidget(picListWidget);

        widget_4 = new QWidget(picturePage);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(24);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        browserOnlinewpBtn = new QPushButton(widget_4);
        browserOnlinewpBtn->setObjectName(QString::fromUtf8("browserOnlinewpBtn"));
        browserOnlinewpBtn->setMinimumSize(QSize(150, 36));
        browserOnlinewpBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(browserOnlinewpBtn);

        browserLocalwpBtn = new QPushButton(widget_4);
        browserLocalwpBtn->setObjectName(QString::fromUtf8("browserLocalwpBtn"));
        browserLocalwpBtn->setMinimumSize(QSize(150, 36));
        browserLocalwpBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(browserLocalwpBtn);

        resetBtn = new QPushButton(widget_4);
        resetBtn->setObjectName(QString::fromUtf8("resetBtn"));
        resetBtn->setMinimumSize(QSize(150, 36));
        resetBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(resetBtn);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(widget_4);

        substackedWidget->addWidget(picturePage);
        colorPage = new QWidget();
        colorPage->setObjectName(QString::fromUtf8("colorPage"));
        verticalLayout_5 = new QVBoxLayout(colorPage);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 24, -1, 9);
        colorListWidget = new QWidget(colorPage);
        colorListWidget->setObjectName(QString::fromUtf8("colorListWidget"));

        verticalLayout_4->addWidget(colorListWidget);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 18, -1, -1);

        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_5->addLayout(verticalLayout_4);

        substackedWidget->addWidget(colorPage);

        verticalLayout_3->addWidget(substackedWidget);


        verticalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(wallpaperWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Wallpaper);

        previewStackedWidget->setCurrentIndex(1);
        substackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Wallpaper);
    } // setupUi

    void retranslateUi(QWidget *Wallpaper)
    {
        titleLabel->setText(QApplication::translate("Wallpaper", "Desktop Background", nullptr));
        previewLabel->setText(QString());
        selectLabel->setText(QApplication::translate("Wallpaper", "Select from", nullptr));
        browserOnlinewpBtn->setText(QApplication::translate("Wallpaper", "Browser online wp", nullptr));
        browserLocalwpBtn->setText(QApplication::translate("Wallpaper", "Browser local wp", nullptr));
        resetBtn->setText(QApplication::translate("Wallpaper", "Reset to default", nullptr));
        Q_UNUSED(Wallpaper);
    } // retranslateUi

};

namespace Ui {
    class Wallpaper: public Ui_Wallpaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLPAPER_H
