/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *leftsidebarWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *leftsidebarVerLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *titleLayout;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(722, 457);
        MainWindow->setWindowTitle(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        leftsidebarWidget = new QWidget(centralWidget);
        leftsidebarWidget->setObjectName(QString::fromUtf8("leftsidebarWidget"));
        leftsidebarWidget->setMinimumSize(QSize(60, 0));
        leftsidebarWidget->setMaximumSize(QSize(60, 16777215));
        verticalLayout_3 = new QVBoxLayout(leftsidebarWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        leftsidebarVerLayout = new QVBoxLayout();
        leftsidebarVerLayout->setSpacing(0);
        leftsidebarVerLayout->setObjectName(QString::fromUtf8("leftsidebarVerLayout"));
        leftsidebarVerLayout->setContentsMargins(0, 30, -1, -1);

        verticalLayout_3->addLayout(leftsidebarVerLayout);


        horizontalLayout_2->addWidget(leftsidebarWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        titleLayout = new QHBoxLayout();
        titleLayout->setSpacing(0);
        titleLayout->setObjectName(QString::fromUtf8("titleLayout"));

        verticalLayout->addLayout(titleLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
