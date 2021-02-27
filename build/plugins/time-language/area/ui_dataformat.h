/********************************************************************************
** Form generated from reading UI file 'dataformat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAFORMAT_H
#define UI_DATAFORMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataFormat
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QFrame *calendarframe;
    QHBoxLayout *horizontalLayout_4;
    QLabel *calendarLabel;
    QComboBox *calendarBox;
    QFrame *dayframe;
    QHBoxLayout *horizontalLayout;
    QLabel *dayLabel;
    QComboBox *dayBox;
    QFrame *dateframe;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dateLabel;
    QComboBox *dateBox;
    QFrame *timeframe;
    QHBoxLayout *horizontalLayout_3;
    QLabel *timeLabel;
    QComboBox *timeBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *confirmButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DataFormat)
    {
        if (DataFormat->objectName().isEmpty())
            DataFormat->setObjectName(QString::fromUtf8("DataFormat"));
        DataFormat->resize(420, 440);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DataFormat->sizePolicy().hasHeightForWidth());
        DataFormat->setSizePolicy(sizePolicy);
        DataFormat->setMinimumSize(QSize(420, 440));
        DataFormat->setMaximumSize(QSize(420, 440));
        verticalLayout_4 = new QVBoxLayout(DataFormat);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(DataFormat);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 32, -1, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(20, 8, 8, -1);
        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setMinimumSize(QSize(190, 24));
        titleLabel->setMaximumSize(QSize(190, 24));

        horizontalLayout_6->addWidget(titleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, -1, -1, -1);
        calendarframe = new QFrame(frame);
        calendarframe->setObjectName(QString::fromUtf8("calendarframe"));
        calendarframe->setMinimumSize(QSize(350, 50));
        calendarframe->setMaximumSize(QSize(350, 50));
        calendarframe->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(calendarframe);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        calendarLabel = new QLabel(calendarframe);
        calendarLabel->setObjectName(QString::fromUtf8("calendarLabel"));
        sizePolicy.setHeightForWidth(calendarLabel->sizePolicy().hasHeightForWidth());
        calendarLabel->setSizePolicy(sizePolicy);
        calendarLabel->setMinimumSize(QSize(90, 32));
        calendarLabel->setMaximumSize(QSize(125, 32));

        horizontalLayout_4->addWidget(calendarLabel);

        calendarBox = new QComboBox(calendarframe);
        calendarBox->setObjectName(QString::fromUtf8("calendarBox"));
        sizePolicy.setHeightForWidth(calendarBox->sizePolicy().hasHeightForWidth());
        calendarBox->setSizePolicy(sizePolicy);
        calendarBox->setMinimumSize(QSize(198, 0));
        calendarBox->setMaximumSize(QSize(198, 256));
        calendarBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(calendarBox);


        verticalLayout_2->addWidget(calendarframe);

        dayframe = new QFrame(frame);
        dayframe->setObjectName(QString::fromUtf8("dayframe"));
        sizePolicy.setHeightForWidth(dayframe->sizePolicy().hasHeightForWidth());
        dayframe->setSizePolicy(sizePolicy);
        dayframe->setMinimumSize(QSize(350, 50));
        dayframe->setMaximumSize(QSize(350, 50));
        dayframe->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(dayframe);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dayLabel = new QLabel(dayframe);
        dayLabel->setObjectName(QString::fromUtf8("dayLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dayLabel->sizePolicy().hasHeightForWidth());
        dayLabel->setSizePolicy(sizePolicy1);
        dayLabel->setMinimumSize(QSize(90, 32));
        dayLabel->setMaximumSize(QSize(125, 16777215));

        horizontalLayout->addWidget(dayLabel);

        dayBox = new QComboBox(dayframe);
        dayBox->setObjectName(QString::fromUtf8("dayBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dayBox->sizePolicy().hasHeightForWidth());
        dayBox->setSizePolicy(sizePolicy2);
        dayBox->setMinimumSize(QSize(198, 0));
        dayBox->setMaximumSize(QSize(198, 16777215));
        dayBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(dayBox);


        verticalLayout_2->addWidget(dayframe);

        dateframe = new QFrame(frame);
        dateframe->setObjectName(QString::fromUtf8("dateframe"));
        sizePolicy.setHeightForWidth(dateframe->sizePolicy().hasHeightForWidth());
        dateframe->setSizePolicy(sizePolicy);
        dateframe->setMinimumSize(QSize(350, 50));
        dateframe->setMaximumSize(QSize(350, 50));
        dateframe->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(dateframe);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dateLabel = new QLabel(dateframe);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));
        sizePolicy1.setHeightForWidth(dateLabel->sizePolicy().hasHeightForWidth());
        dateLabel->setSizePolicy(sizePolicy1);
        dateLabel->setMinimumSize(QSize(90, 32));
        dateLabel->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_2->addWidget(dateLabel);

        dateBox = new QComboBox(dateframe);
        dateBox->setObjectName(QString::fromUtf8("dateBox"));
        sizePolicy2.setHeightForWidth(dateBox->sizePolicy().hasHeightForWidth());
        dateBox->setSizePolicy(sizePolicy2);
        dateBox->setMinimumSize(QSize(198, 0));
        dateBox->setMaximumSize(QSize(198, 16777215));
        dateBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(dateBox);


        verticalLayout_2->addWidget(dateframe);

        timeframe = new QFrame(frame);
        timeframe->setObjectName(QString::fromUtf8("timeframe"));
        sizePolicy.setHeightForWidth(timeframe->sizePolicy().hasHeightForWidth());
        timeframe->setSizePolicy(sizePolicy);
        timeframe->setMinimumSize(QSize(350, 50));
        timeframe->setMaximumSize(QSize(350, 50));
        timeframe->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(timeframe);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        timeLabel = new QLabel(timeframe);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        sizePolicy1.setHeightForWidth(timeLabel->sizePolicy().hasHeightForWidth());
        timeLabel->setSizePolicy(sizePolicy1);
        timeLabel->setMinimumSize(QSize(90, 32));
        timeLabel->setMaximumSize(QSize(125, 16777215));

        horizontalLayout_3->addWidget(timeLabel);

        timeBox = new QComboBox(timeframe);
        timeBox->setObjectName(QString::fromUtf8("timeBox"));
        sizePolicy2.setHeightForWidth(timeBox->sizePolicy().hasHeightForWidth());
        timeBox->setSizePolicy(sizePolicy2);
        timeBox->setMinimumSize(QSize(198, 0));
        timeBox->setMaximumSize(QSize(198, 16777215));
        timeBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(timeBox);


        verticalLayout_2->addWidget(timeframe);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(17, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(345, 50));
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(9, -1, 32, -1);
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(120, 36));
        cancelButton->setMaximumSize(QSize(120, 36));
        cancelButton->setSizeIncrement(QSize(120, 30));

        horizontalLayout_5->addWidget(cancelButton);

        confirmButton = new QPushButton(widget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setMinimumSize(QSize(120, 36));
        confirmButton->setMaximumSize(QSize(120, 36));

        horizontalLayout_5->addWidget(confirmButton);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(17, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(frame);


        retranslateUi(DataFormat);

        QMetaObject::connectSlotsByName(DataFormat);
    } // setupUi

    void retranslateUi(QDialog *DataFormat)
    {
        DataFormat->setWindowTitle(QApplication::translate("DataFormat", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("DataFormat", "change format of data", nullptr));
        calendarLabel->setText(QApplication::translate("DataFormat", "calendar", nullptr));
        dayLabel->setText(QApplication::translate("DataFormat", "first day", nullptr));
        dateLabel->setText(QApplication::translate("DataFormat", "date", nullptr));
        timeLabel->setText(QApplication::translate("DataFormat", "time", nullptr));
        cancelButton->setText(QApplication::translate("DataFormat", "cancel", nullptr));
        confirmButton->setText(QApplication::translate("DataFormat", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataFormat: public Ui_DataFormat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAFORMAT_H
