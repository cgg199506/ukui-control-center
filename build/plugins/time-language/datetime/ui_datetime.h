/********************************************************************************
** Form generated from reading UI file 'datetime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIME_H
#define UI_DATETIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateTime
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *timeClockLable;
    QLabel *dateLabel;
    QLabel *timezoneLabel;
    QHBoxLayout *chgLayout;
    QPushButton *synsystimeBtn;
    QPushButton *chgtimebtn;
    QPushButton *chgzonebtn;
    QSpacerItem *horizontalSpacer;
    QFrame *hourFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *syslabel;
    QLabel *endlabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DateTime)
    {
        if (DateTime->objectName().isEmpty())
            DateTime->setObjectName(QString::fromUtf8("DateTime"));
        DateTime->resize(739, 495);
        DateTime->setMinimumSize(QSize(0, 0));
        DateTime->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(DateTime);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 32, -1);
        titleLabel = new QLabel(DateTime);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setMinimumSize(QSize(0, 0));
        titleLabel->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(titleLabel);

        timeClockLable = new QLabel(DateTime);
        timeClockLable->setObjectName(QString::fromUtf8("timeClockLable"));
        sizePolicy.setHeightForWidth(timeClockLable->sizePolicy().hasHeightForWidth());
        timeClockLable->setSizePolicy(sizePolicy);
        timeClockLable->setMinimumSize(QSize(151, 50));
        timeClockLable->setMaximumSize(QSize(167000, 167000));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        timeClockLable->setFont(font);

        verticalLayout->addWidget(timeClockLable);

        dateLabel = new QLabel(DateTime);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        sizePolicy.setHeightForWidth(dateLabel->sizePolicy().hasHeightForWidth());
        dateLabel->setSizePolicy(sizePolicy);
        dateLabel->setMinimumSize(QSize(127, 25));
        dateLabel->setMaximumSize(QSize(167000, 18000));

        verticalLayout->addWidget(dateLabel);

        timezoneLabel = new QLabel(DateTime);
        timezoneLabel->setObjectName(QString::fromUtf8("timezoneLabel"));
        sizePolicy.setHeightForWidth(timezoneLabel->sizePolicy().hasHeightForWidth());
        timezoneLabel->setSizePolicy(sizePolicy);
        timezoneLabel->setMinimumSize(QSize(347, 25));
        timezoneLabel->setMaximumSize(QSize(167000, 167000));
        QFont font1;
        font1.setPointSize(10);
        timezoneLabel->setFont(font1);

        verticalLayout->addWidget(timezoneLabel);

        chgLayout = new QHBoxLayout();
        chgLayout->setSpacing(16);
        chgLayout->setObjectName(QString::fromUtf8("chgLayout"));
        chgLayout->setContentsMargins(-1, 24, -1, 24);
        synsystimeBtn = new QPushButton(DateTime);
        synsystimeBtn->setObjectName(QString::fromUtf8("synsystimeBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(synsystimeBtn->sizePolicy().hasHeightForWidth());
        synsystimeBtn->setSizePolicy(sizePolicy1);
        synsystimeBtn->setMinimumSize(QSize(130, 36));
        synsystimeBtn->setMaximumSize(QSize(16777215, 16777215));
        synsystimeBtn->setLayoutDirection(Qt::LeftToRight);

        chgLayout->addWidget(synsystimeBtn);

        chgtimebtn = new QPushButton(DateTime);
        chgtimebtn->setObjectName(QString::fromUtf8("chgtimebtn"));
        chgtimebtn->setMinimumSize(QSize(130, 36));
        chgtimebtn->setMaximumSize(QSize(16777215, 36));

        chgLayout->addWidget(chgtimebtn);

        chgzonebtn = new QPushButton(DateTime);
        chgzonebtn->setObjectName(QString::fromUtf8("chgzonebtn"));
        chgzonebtn->setMinimumSize(QSize(130, 36));
        chgzonebtn->setMaximumSize(QSize(16777215, 36));

        chgLayout->addWidget(chgzonebtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        chgLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(chgLayout);

        hourFrame = new QFrame(DateTime);
        hourFrame->setObjectName(QString::fromUtf8("hourFrame"));
        hourFrame->setMinimumSize(QSize(552, 50));
        hourFrame->setMaximumSize(QSize(960, 50));
        hourFrame->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(hourFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 32, -1, -1);
        syslabel = new QLabel(DateTime);
        syslabel->setObjectName(QString::fromUtf8("syslabel"));
        syslabel->setMinimumSize(QSize(120, 30));
        syslabel->setMaximumSize(QSize(120, 30));

        horizontalLayout->addWidget(syslabel);

        endlabel = new QLabel(DateTime);
        endlabel->setObjectName(QString::fromUtf8("endlabel"));
        endlabel->setMinimumSize(QSize(120, 30));
        endlabel->setSizeIncrement(QSize(120, 30));

        horizontalLayout->addWidget(endlabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DateTime);

        QMetaObject::connectSlotsByName(DateTime);
    } // setupUi

    void retranslateUi(QWidget *DateTime)
    {
        DateTime->setWindowTitle(QApplication::translate("DateTime", "DateTime", nullptr));
        titleLabel->setText(QApplication::translate("DateTime", "current date", nullptr));
        timeClockLable->setText(QString());
        dateLabel->setText(QString());
        timezoneLabel->setText(QApplication::translate("DateTime", "timezone", nullptr));
        synsystimeBtn->setText(QApplication::translate("DateTime", "Sync from network", nullptr));
        chgtimebtn->setText(QApplication::translate("DateTime", "Change time", nullptr));
        chgzonebtn->setText(QApplication::translate("DateTime", "Change time zone", nullptr));
        syslabel->setText(QString());
        endlabel->setText(QApplication::translate("DateTime", "Sync complete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTime: public Ui_DateTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIME_H
