/********************************************************************************
** Form generated from reading UI file 'modulepagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEPAGEWIDGET_H
#define UI_MODULEPAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModulePageWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *leftbarWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mtitleLabel;
    QStackedWidget *leftStackedWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *topsideWidget;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mmtitleLabel;
    QStackedWidget *topStackedWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ModulePageWidget)
    {
        if (ModulePageWidget->objectName().isEmpty())
            ModulePageWidget->setObjectName(QString::fromUtf8("ModulePageWidget"));
        ModulePageWidget->resize(687, 428);
        ModulePageWidget->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_2 = new QHBoxLayout(ModulePageWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(24, -1, 0, -1);
        leftbarWidget = new QWidget(ModulePageWidget);
        leftbarWidget->setObjectName(QString::fromUtf8("leftbarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftbarWidget->sizePolicy().hasHeightForWidth());
        leftbarWidget->setSizePolicy(sizePolicy);
        leftbarWidget->setMinimumSize(QSize(0, 0));
        leftbarWidget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(leftbarWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 42, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(24);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(8, -1, -1, -1);
        mtitleLabel = new QLabel(leftbarWidget);
        mtitleLabel->setObjectName(QString::fromUtf8("mtitleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mtitleLabel->sizePolicy().hasHeightForWidth());
        mtitleLabel->setSizePolicy(sizePolicy1);
        mtitleLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(mtitleLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        leftStackedWidget = new QStackedWidget(leftbarWidget);
        leftStackedWidget->setObjectName(QString::fromUtf8("leftStackedWidget"));
        sizePolicy.setHeightForWidth(leftStackedWidget->sizePolicy().hasHeightForWidth());
        leftStackedWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(leftStackedWidget);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(leftbarWidget);

        widget = new QWidget(ModulePageWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(24, 40, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        topsideWidget = new QWidget(widget);
        topsideWidget->setObjectName(QString::fromUtf8("topsideWidget"));
        topsideWidget->setMinimumSize(QSize(0, 60));
        topsideWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_6 = new QHBoxLayout(topsideWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mmtitleLabel = new QLabel(topsideWidget);
        mmtitleLabel->setObjectName(QString::fromUtf8("mmtitleLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mmtitleLabel->sizePolicy().hasHeightForWidth());
        mmtitleLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(mmtitleLabel);

        topStackedWidget = new QStackedWidget(topsideWidget);
        topStackedWidget->setObjectName(QString::fromUtf8("topStackedWidget"));

        horizontalLayout_5->addWidget(topStackedWidget);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(topsideWidget);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 303, 322));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(widget);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ModulePageWidget);

        QMetaObject::connectSlotsByName(ModulePageWidget);
    } // setupUi

    void retranslateUi(QWidget *ModulePageWidget)
    {
        mtitleLabel->setText(QString());
        mmtitleLabel->setText(QString());
        Q_UNUSED(ModulePageWidget);
    } // retranslateUi

};

namespace Ui {
    class ModulePageWidget: public Ui_ModulePageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEPAGEWIDGET_H
