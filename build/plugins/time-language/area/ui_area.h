/********************************************************************************
** Form generated from reading UI file 'area.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREA_H
#define UI_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Area
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_4;
    QFrame *languageframe_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *countrylabel;
    QSpacerItem *verticalSpacer_2;
    QComboBox *countrycomboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title2Label;
    QSpacerItem *horizontalSpacer_2;
    QFrame *formframe;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *calendarlabel;
    QLabel *Lunarcalendar;
    QHBoxLayout *horizontalLayout_6;
    QLabel *weeklabel;
    QLabel *firstDayLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *datelabel;
    QLabel *datelabelshow;
    QHBoxLayout *horizontalLayout_8;
    QLabel *timelabel;
    QLabel *timelabelshow;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *chgformButton;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *title3Label;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *addLyt;
    QFrame *languageframe;
    QHBoxLayout *horizontalLayout_12;
    QLabel *languagelabel;
    QSpacerItem *verticalSpacer_3;
    QComboBox *langcomboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Area)
    {
        if (Area->objectName().isEmpty())
            Area->setObjectName(QString::fromUtf8("Area"));
        Area->resize(890, 710);
        Area->setMinimumSize(QSize(0, 0));
        Area->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(Area);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 32, -1);
        titleLabel = new QLabel(Area);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setMinimumSize(QSize(0, 0));
        titleLabel->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(titleLabel);

        verticalSpacer_4 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        languageframe_2 = new QFrame(Area);
        languageframe_2->setObjectName(QString::fromUtf8("languageframe_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(languageframe_2->sizePolicy().hasHeightForWidth());
        languageframe_2->setSizePolicy(sizePolicy);
        languageframe_2->setMinimumSize(QSize(550, 50));
        languageframe_2->setMaximumSize(QSize(960, 50));
        languageframe_2->setFrameShape(QFrame::Box);
        horizontalLayout_15 = new QHBoxLayout(languageframe_2);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(20, 0, 16, 0);
        countrylabel = new QLabel(languageframe_2);
        countrylabel->setObjectName(QString::fromUtf8("countrylabel"));
        countrylabel->setMinimumSize(QSize(0, 0));
        countrylabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_15->addWidget(countrylabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_15->addItem(verticalSpacer_2);

        countrycomboBox = new QComboBox(languageframe_2);
        countrycomboBox->setObjectName(QString::fromUtf8("countrycomboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(countrycomboBox->sizePolicy().hasHeightForWidth());
        countrycomboBox->setSizePolicy(sizePolicy1);
        countrycomboBox->setMinimumSize(QSize(0, 0));
        countrycomboBox->setMaximumSize(QSize(16777215, 32));
        countrycomboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_15->addWidget(countrycomboBox);


        verticalLayout_3->addWidget(languageframe_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 32, -1, 12);
        title2Label = new QLabel(Area);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        title2Label->setMinimumSize(QSize(0, 0));
        title2Label->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(title2Label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        formframe = new QFrame(Area);
        formframe->setObjectName(QString::fromUtf8("formframe"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(formframe->sizePolicy().hasHeightForWidth());
        formframe->setSizePolicy(sizePolicy2);
        formframe->setMinimumSize(QSize(550, 0));
        formframe->setMaximumSize(QSize(960, 16777215));
        formframe->setFrameShape(QFrame::Box);
        verticalLayout = new QVBoxLayout(formframe);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, -1, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        calendarlabel = new QLabel(formframe);
        calendarlabel->setObjectName(QString::fromUtf8("calendarlabel"));
        sizePolicy.setHeightForWidth(calendarlabel->sizePolicy().hasHeightForWidth());
        calendarlabel->setSizePolicy(sizePolicy);
        calendarlabel->setMinimumSize(QSize(120, 0));
        calendarlabel->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(calendarlabel);

        Lunarcalendar = new QLabel(formframe);
        Lunarcalendar->setObjectName(QString::fromUtf8("Lunarcalendar"));
        Lunarcalendar->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(Lunarcalendar);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        weeklabel = new QLabel(formframe);
        weeklabel->setObjectName(QString::fromUtf8("weeklabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(weeklabel->sizePolicy().hasHeightForWidth());
        weeklabel->setSizePolicy(sizePolicy3);
        weeklabel->setMinimumSize(QSize(120, 0));
        weeklabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(weeklabel);

        firstDayLabel = new QLabel(formframe);
        firstDayLabel->setObjectName(QString::fromUtf8("firstDayLabel"));

        horizontalLayout_6->addWidget(firstDayLabel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        datelabel = new QLabel(formframe);
        datelabel->setObjectName(QString::fromUtf8("datelabel"));
        sizePolicy.setHeightForWidth(datelabel->sizePolicy().hasHeightForWidth());
        datelabel->setSizePolicy(sizePolicy);
        datelabel->setMinimumSize(QSize(120, 0));
        datelabel->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_7->addWidget(datelabel);

        datelabelshow = new QLabel(formframe);
        datelabelshow->setObjectName(QString::fromUtf8("datelabelshow"));

        horizontalLayout_7->addWidget(datelabelshow);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        timelabel = new QLabel(formframe);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));
        sizePolicy.setHeightForWidth(timelabel->sizePolicy().hasHeightForWidth());
        timelabel->setSizePolicy(sizePolicy);
        timelabel->setMinimumSize(QSize(120, 0));
        timelabel->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_8->addWidget(timelabel);

        timelabelshow = new QLabel(formframe);
        timelabelshow->setObjectName(QString::fromUtf8("timelabelshow"));

        horizontalLayout_8->addWidget(timelabelshow);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_3->addWidget(formframe);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 24);
        chgformButton = new QPushButton(Area);
        chgformButton->setObjectName(QString::fromUtf8("chgformButton"));
        chgformButton->setMinimumSize(QSize(120, 35));
        chgformButton->setMaximumSize(QSize(1000, 35));

        horizontalLayout_10->addWidget(chgformButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 9, -1, 12);
        title3Label = new QLabel(Area);
        title3Label->setObjectName(QString::fromUtf8("title3Label"));
        title3Label->setMinimumSize(QSize(0, 0));
        title3Label->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_11->addWidget(title3Label);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_11);

        addLyt = new QVBoxLayout();
        addLyt->setSpacing(16);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        languageframe = new QFrame(Area);
        languageframe->setObjectName(QString::fromUtf8("languageframe"));
        sizePolicy.setHeightForWidth(languageframe->sizePolicy().hasHeightForWidth());
        languageframe->setSizePolicy(sizePolicy);
        languageframe->setMinimumSize(QSize(550, 50));
        languageframe->setMaximumSize(QSize(960, 50));
        languageframe->setFrameShape(QFrame::Box);
        horizontalLayout_12 = new QHBoxLayout(languageframe);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(20, 0, 16, 0);
        languagelabel = new QLabel(languageframe);
        languagelabel->setObjectName(QString::fromUtf8("languagelabel"));
        languagelabel->setMinimumSize(QSize(0, 0));
        languagelabel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(languagelabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_12->addItem(verticalSpacer_3);

        langcomboBox = new QComboBox(languageframe);
        langcomboBox->setObjectName(QString::fromUtf8("langcomboBox"));
        sizePolicy1.setHeightForWidth(langcomboBox->sizePolicy().hasHeightForWidth());
        langcomboBox->setSizePolicy(sizePolicy1);
        langcomboBox->setMinimumSize(QSize(0, 0));
        langcomboBox->setMaximumSize(QSize(16777215, 32));
        langcomboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_12->addWidget(langcomboBox);


        addLyt->addWidget(languageframe);


        verticalLayout_3->addLayout(addLyt);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(Area);

        QMetaObject::connectSlotsByName(Area);
    } // setupUi

    void retranslateUi(QWidget *Area)
    {
        Area->setWindowTitle(QApplication::translate("Area", "Area", nullptr));
        titleLabel->setText(QApplication::translate("Area", "current area", nullptr));
        countrylabel->setText(QApplication::translate("Area", "Area showing time currency format", nullptr));
        title2Label->setText(QApplication::translate("Area", "Regional format data", nullptr));
        calendarlabel->setText(QApplication::translate("Area", "calendar", nullptr));
        Lunarcalendar->setText(QApplication::translate("Area", "lunar", nullptr));
        weeklabel->setText(QApplication::translate("Area", "First day of the week", nullptr));
        firstDayLabel->setText(QApplication::translate("Area", "monday", nullptr));
        datelabel->setText(QApplication::translate("Area", "date", nullptr));
        datelabelshow->setText(QApplication::translate("Area", "2019/12/17", nullptr));
        timelabel->setText(QApplication::translate("Area", "time", nullptr));
        timelabelshow->setText(QApplication::translate("Area", "9:52", nullptr));
        chgformButton->setText(QApplication::translate("Area", "change format of data", nullptr));
        title3Label->setText(QApplication::translate("Area", "first language", nullptr));
        languagelabel->setText(QApplication::translate("Area", "system language", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Area: public Ui_Area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREA_H
