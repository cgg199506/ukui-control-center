/********************************************************************************
** Form generated from reading UI file 'experienceplan.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERIENCEPLAN_H
#define UI_EXPERIENCEPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExperiencePlan
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QWidget *joinWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *joinHorLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *termsBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ExperiencePlan)
    {
        if (ExperiencePlan->objectName().isEmpty())
            ExperiencePlan->setObjectName(QString::fromUtf8("ExperiencePlan"));
        ExperiencePlan->resize(800, 600);
        ExperiencePlan->setWindowTitle(QString::fromUtf8("ExperiencePlan"));
        verticalLayout_2 = new QVBoxLayout(ExperiencePlan);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 30);
        widget = new QWidget(ExperiencePlan);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 0));
        widget->setMaximumSize(QSize(960, 16777215));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(16);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(titleLabel);

        joinWidget = new QWidget(widget);
        joinWidget->setObjectName(QString::fromUtf8("joinWidget"));
        joinWidget->setMinimumSize(QSize(0, 50));
        joinWidget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(joinWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        joinHorLayout = new QHBoxLayout();
        joinHorLayout->setObjectName(QString::fromUtf8("joinHorLayout"));
        joinHorLayout->setContentsMargins(16, -1, 16, -1);
        label_3 = new QLabel(joinWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        joinHorLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        joinHorLayout->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(joinHorLayout);


        verticalLayout->addWidget(joinWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(16, -1, 16, -1);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        termsBtn = new QPushButton(widget);
        termsBtn->setObjectName(QString::fromUtf8("termsBtn"));

        horizontalLayout->addWidget(termsBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(widget);


        retranslateUi(ExperiencePlan);

        QMetaObject::connectSlotsByName(ExperiencePlan);
    } // setupUi

    void retranslateUi(QWidget *ExperiencePlan)
    {
        titleLabel->setText(QApplication::translate("ExperiencePlan", "User Experience", nullptr));
        label_3->setText(QApplication::translate("ExperiencePlan", "Join in user Experience plan", nullptr));
        label_2->setText(QApplication::translate("ExperiencePlan", "User experience plan terms, see", nullptr));
        termsBtn->setText(QApplication::translate("ExperiencePlan", "\343\200\212User Experience plan\343\200\213", nullptr));
        Q_UNUSED(ExperiencePlan);
    } // retranslateUi

};

namespace Ui {
    class ExperiencePlan: public Ui_ExperiencePlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIENCEPLAN_H
