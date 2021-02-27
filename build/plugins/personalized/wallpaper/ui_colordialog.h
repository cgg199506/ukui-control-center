/********************************************************************************
** Form generated from reading UI file 'colordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDIALOG_H
#define UI_COLORDIALOG_H

#include <CloseButton/closebutton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_b;
    QWidget *colorPreviewWg;
    QSpinBox *spinBox_b;
    QSpinBox *spinBox_g;
    QSpinBox *spinBox_r;
    QLabel *label_r;
    QLabel *label_g;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okBtn;
    CloseButton *closeBtn;

    void setupUi(QDialog *ColorDialog)
    {
        if (ColorDialog->objectName().isEmpty())
            ColorDialog->setObjectName(QString::fromUtf8("ColorDialog"));
        ColorDialog->resize(400, 509);
        ColorDialog->setMinimumSize(QSize(400, 509));
        ColorDialog->setMaximumSize(QSize(400, 509));
        horizontalLayoutWidget = new QWidget(ColorDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 50, 361, 271));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_b = new QLabel(ColorDialog);
        label_b->setObjectName(QString::fromUtf8("label_b"));
        label_b->setGeometry(QRect(270, 350, 33, 36));
        label_b->setMinimumSize(QSize(33, 36));
        label_b->setMaximumSize(QSize(33, 36));
        colorPreviewWg = new QWidget(ColorDialog);
        colorPreviewWg->setObjectName(QString::fromUtf8("colorPreviewWg"));
        colorPreviewWg->setGeometry(QRect(50, 340, 48, 48));
        colorPreviewWg->setMinimumSize(QSize(48, 48));
        colorPreviewWg->setMaximumSize(QSize(48, 48));
        spinBox_b = new QSpinBox(ColorDialog);
        spinBox_b->setObjectName(QString::fromUtf8("spinBox_b"));
        spinBox_b->setGeometry(QRect(300, 350, 60, 36));
        spinBox_b->setMinimumSize(QSize(60, 36));
        spinBox_b->setMaximumSize(QSize(60, 36));
        spinBox_g = new QSpinBox(ColorDialog);
        spinBox_g->setObjectName(QString::fromUtf8("spinBox_g"));
        spinBox_g->setGeometry(QRect(210, 350, 60, 36));
        spinBox_g->setMinimumSize(QSize(60, 36));
        spinBox_g->setMaximumSize(QSize(60, 36));
        spinBox_r = new QSpinBox(ColorDialog);
        spinBox_r->setObjectName(QString::fromUtf8("spinBox_r"));
        spinBox_r->setGeometry(QRect(120, 350, 60, 36));
        spinBox_r->setMinimumSize(QSize(60, 36));
        spinBox_r->setMaximumSize(QSize(60, 36));
        label_r = new QLabel(ColorDialog);
        label_r->setObjectName(QString::fromUtf8("label_r"));
        label_r->setGeometry(QRect(90, 350, 33, 36));
        label_r->setMinimumSize(QSize(33, 36));
        label_r->setMaximumSize(QSize(33, 36));
        label_g = new QLabel(ColorDialog);
        label_g->setObjectName(QString::fromUtf8("label_g"));
        label_g->setGeometry(QRect(180, 350, 33, 36));
        label_g->setMinimumSize(QSize(33, 36));
        label_g->setMaximumSize(QSize(33, 36));
        layoutWidget = new QWidget(ColorDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 420, 270, 38));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cancelBtn = new QPushButton(layoutWidget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(120, 36));
        cancelBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_3->addWidget(cancelBtn);

        horizontalSpacer_2 = new QSpacerItem(16, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        okBtn = new QPushButton(layoutWidget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setMinimumSize(QSize(120, 36));
        okBtn->setMaximumSize(QSize(120, 36));

        horizontalLayout_3->addWidget(okBtn);

        closeBtn = new CloseButton(ColorDialog);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(355, 13, 32, 32));
        closeBtn->setMinimumSize(QSize(32, 32));
        closeBtn->setMaximumSize(QSize(32, 32));

        retranslateUi(ColorDialog);

        QMetaObject::connectSlotsByName(ColorDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorDialog)
    {
        ColorDialog->setWindowTitle(QApplication::translate("ColorDialog", "Dialog", nullptr));
        label_b->setText(QApplication::translate("ColorDialog", "     B", nullptr));
        label_r->setText(QApplication::translate("ColorDialog", "     R", nullptr));
        label_g->setText(QApplication::translate("ColorDialog", "     G", nullptr));
        cancelBtn->setText(QApplication::translate("ColorDialog", "Cancel", nullptr));
        okBtn->setText(QApplication::translate("ColorDialog", "OK", nullptr));
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorDialog: public Ui_ColorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDIALOG_H
