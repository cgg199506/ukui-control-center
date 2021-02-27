/********************************************************************************
** Form generated from reading UI file 'addshortcutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSHORTCUTDIALOG_H
#define UI_ADDSHORTCUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addShortcutDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *execLineEdit;
    QPushButton *openBtn;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *noteLabel;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *page_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBtn;
    QPushButton *certainBtn;

    void setupUi(QDialog *addShortcutDialog)
    {
        if (addShortcutDialog->objectName().isEmpty())
            addShortcutDialog->setObjectName(QString::fromUtf8("addShortcutDialog"));
        addShortcutDialog->resize(470, 326);
        addShortcutDialog->setMinimumSize(QSize(470, 326));
        addShortcutDialog->setMaximumSize(QSize(470, 326));
        verticalLayout_4 = new QVBoxLayout(addShortcutDialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(42, 42, 50, 32);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(24);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titleLabel = new QLabel(addShortcutDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(addShortcutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        nameLineEdit = new QLineEdit(addShortcutDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setMinimumSize(QSize(258, 36));
        nameLineEdit->setMaximumSize(QSize(258, 36));

        horizontalLayout_6->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(16);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(addShortcutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        execLineEdit = new QLineEdit(addShortcutDialog);
        execLineEdit->setObjectName(QString::fromUtf8("execLineEdit"));
        execLineEdit->setMinimumSize(QSize(182, 36));
        execLineEdit->setMaximumSize(QSize(182, 36));

        horizontalLayout_4->addWidget(execLineEdit);

        openBtn = new QPushButton(addShortcutDialog);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setMinimumSize(QSize(60, 36));
        openBtn->setMaximumSize(QSize(60, 36));
        openBtn->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(openBtn);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(addShortcutDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 24));
        stackedWidget->setMaximumSize(QSize(16777215, 24));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_8 = new QHBoxLayout(page_3);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, 0);
        noteLabel = new QLabel(page_3);
        noteLabel->setObjectName(QString::fromUtf8("noteLabel"));
        sizePolicy.setHeightForWidth(noteLabel->sizePolicy().hasHeightForWidth());
        noteLabel->setSizePolicy(sizePolicy);
        noteLabel->setMinimumSize(QSize(16, 16));
        noteLabel->setMaximumSize(QSize(16, 16));

        horizontalLayout_3->addWidget(noteLabel);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(16);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        cancelBtn = new QPushButton(addShortcutDialog);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));
        cancelBtn->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(cancelBtn);

        certainBtn = new QPushButton(addShortcutDialog);
        certainBtn->setObjectName(QString::fromUtf8("certainBtn"));
        certainBtn->setMinimumSize(QSize(120, 36));
        certainBtn->setMaximumSize(QSize(120, 36));
        certainBtn->setCheckable(true);

        horizontalLayout_7->addWidget(certainBtn);


        verticalLayout_4->addLayout(horizontalLayout_7);


        retranslateUi(addShortcutDialog);

        QMetaObject::connectSlotsByName(addShortcutDialog);
    } // setupUi

    void retranslateUi(QDialog *addShortcutDialog)
    {
        addShortcutDialog->setWindowTitle(QApplication::translate("addShortcutDialog", "Dialog", nullptr));
        titleLabel->setText(QString());
        label_2->setText(QApplication::translate("addShortcutDialog", "Shortcut name", nullptr));
        label_3->setText(QApplication::translate("addShortcutDialog", "Shortcut exec", nullptr));
        openBtn->setText(QApplication::translate("addShortcutDialog", "Open", nullptr));
        noteLabel->setText(QString());
        label_4->setText(QApplication::translate("addShortcutDialog", "Invalid executable, please re-enter", nullptr));
        cancelBtn->setText(QApplication::translate("addShortcutDialog", "Cancel", nullptr));
        certainBtn->setText(QApplication::translate("addShortcutDialog", "Certain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addShortcutDialog: public Ui_addShortcutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSHORTCUTDIALOG_H
