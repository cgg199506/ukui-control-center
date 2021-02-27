/********************************************************************************
** Form generated from reading UI file 'homepagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEWIDGET_H
#define UI_HOMEPAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePageWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;

    void setupUi(QWidget *HomePageWidget)
    {
        if (HomePageWidget->objectName().isEmpty())
            HomePageWidget->setObjectName(QString::fromUtf8("HomePageWidget"));
        HomePageWidget->resize(839, 635);
        HomePageWidget->setWindowTitle(QString::fromUtf8("Form"));
        horizontalLayout_3 = new QHBoxLayout(HomePageWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(90, 20, -1, -1);
        listWidget = new QListWidget(HomePageWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(0, 0));
        listWidget->setMaximumSize(QSize(1120, 450));
        listWidget->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(listWidget);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(HomePageWidget);

        QMetaObject::connectSlotsByName(HomePageWidget);
    } // setupUi

    void retranslateUi(QWidget *HomePageWidget)
    {
        Q_UNUSED(HomePageWidget);
    } // retranslateUi

};

namespace Ui {
    class HomePageWidget: public Ui_HomePageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEWIDGET_H
