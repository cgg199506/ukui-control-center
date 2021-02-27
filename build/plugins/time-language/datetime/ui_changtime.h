/********************************************************************************
** Form generated from reading UI file 'changtime.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGTIME_H
#define UI_CHANGTIME_H

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

class Ui_changtimedialog
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
    QFrame *timeframe;
    QHBoxLayout *horizontalLayout_4;
    QLabel *timelabel;
    QComboBox *hourcomboBox;
    QComboBox *mincomboBox;
    QComboBox *seccomboBox;
    QFrame *yearframe;
    QHBoxLayout *horizontalLayout;
    QLabel *yearlabel;
    QComboBox *yearcomboBox;
    QFrame *monthframe;
    QHBoxLayout *horizontalLayout_2;
    QLabel *monthlabel;
    QComboBox *monthcomboBox;
    QFrame *dayframe;
    QHBoxLayout *horizontalLayout_3;
    QLabel *daylabel;
    QComboBox *daycomboBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *confirmButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *changtimedialog)
    {
        if (changtimedialog->objectName().isEmpty())
            changtimedialog->setObjectName(QString::fromUtf8("changtimedialog"));
        changtimedialog->resize(401, 440);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(changtimedialog->sizePolicy().hasHeightForWidth());
        changtimedialog->setSizePolicy(sizePolicy);
        changtimedialog->setMinimumSize(QSize(401, 440));
        changtimedialog->setMaximumSize(QSize(420, 440));
        verticalLayout_4 = new QVBoxLayout(changtimedialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(changtimedialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 32, 9, -1);
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
        verticalLayout_2->setContentsMargins(20, -1, 31, -1);
        timeframe = new QFrame(frame);
        timeframe->setObjectName(QString::fromUtf8("timeframe"));
        timeframe->setMinimumSize(QSize(336, 50));
        timeframe->setMaximumSize(QSize(336, 50));
        timeframe->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(timeframe);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        timelabel = new QLabel(timeframe);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));
        sizePolicy.setHeightForWidth(timelabel->sizePolicy().hasHeightForWidth());
        timelabel->setSizePolicy(sizePolicy);
        timelabel->setMinimumSize(QSize(0, 0));
        timelabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(timelabel);

        hourcomboBox = new QComboBox(timeframe);
        hourcomboBox->setObjectName(QString::fromUtf8("hourcomboBox"));
        sizePolicy.setHeightForWidth(hourcomboBox->sizePolicy().hasHeightForWidth());
        hourcomboBox->setSizePolicy(sizePolicy);
        hourcomboBox->setMinimumSize(QSize(83, 0));
        hourcomboBox->setMaximumSize(QSize(84, 16777215));
        hourcomboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(hourcomboBox);

        mincomboBox = new QComboBox(timeframe);
        mincomboBox->setObjectName(QString::fromUtf8("mincomboBox"));
        sizePolicy.setHeightForWidth(mincomboBox->sizePolicy().hasHeightForWidth());
        mincomboBox->setSizePolicy(sizePolicy);
        mincomboBox->setMinimumSize(QSize(80, 0));
        mincomboBox->setMaximumSize(QSize(84, 32));

        horizontalLayout_4->addWidget(mincomboBox);

        seccomboBox = new QComboBox(timeframe);
        seccomboBox->setObjectName(QString::fromUtf8("seccomboBox"));
        sizePolicy.setHeightForWidth(seccomboBox->sizePolicy().hasHeightForWidth());
        seccomboBox->setSizePolicy(sizePolicy);
        seccomboBox->setMinimumSize(QSize(80, 32));
        seccomboBox->setMaximumSize(QSize(84, 32));

        horizontalLayout_4->addWidget(seccomboBox);


        verticalLayout_2->addWidget(timeframe);

        yearframe = new QFrame(frame);
        yearframe->setObjectName(QString::fromUtf8("yearframe"));
        sizePolicy.setHeightForWidth(yearframe->sizePolicy().hasHeightForWidth());
        yearframe->setSizePolicy(sizePolicy);
        yearframe->setMinimumSize(QSize(336, 50));
        yearframe->setMaximumSize(QSize(336, 50));
        yearframe->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(yearframe);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        yearlabel = new QLabel(yearframe);
        yearlabel->setObjectName(QString::fromUtf8("yearlabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(yearlabel->sizePolicy().hasHeightForWidth());
        yearlabel->setSizePolicy(sizePolicy1);
        yearlabel->setMinimumSize(QSize(0, 0));
        yearlabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(yearlabel);

        yearcomboBox = new QComboBox(yearframe);
        yearcomboBox->setObjectName(QString::fromUtf8("yearcomboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(yearcomboBox->sizePolicy().hasHeightForWidth());
        yearcomboBox->setSizePolicy(sizePolicy2);
        yearcomboBox->setMinimumSize(QSize(258, 32));
        yearcomboBox->setMaximumSize(QSize(257, 16777215));
        yearcomboBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(yearcomboBox);


        verticalLayout_2->addWidget(yearframe);

        monthframe = new QFrame(frame);
        monthframe->setObjectName(QString::fromUtf8("monthframe"));
        sizePolicy.setHeightForWidth(monthframe->sizePolicy().hasHeightForWidth());
        monthframe->setSizePolicy(sizePolicy);
        monthframe->setMinimumSize(QSize(336, 50));
        monthframe->setMaximumSize(QSize(336, 50));
        monthframe->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(monthframe);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        monthlabel = new QLabel(monthframe);
        monthlabel->setObjectName(QString::fromUtf8("monthlabel"));
        sizePolicy1.setHeightForWidth(monthlabel->sizePolicy().hasHeightForWidth());
        monthlabel->setSizePolicy(sizePolicy1);
        monthlabel->setMinimumSize(QSize(27, 0));
        monthlabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(monthlabel);

        monthcomboBox = new QComboBox(monthframe);
        monthcomboBox->setObjectName(QString::fromUtf8("monthcomboBox"));
        sizePolicy2.setHeightForWidth(monthcomboBox->sizePolicy().hasHeightForWidth());
        monthcomboBox->setSizePolicy(sizePolicy2);
        monthcomboBox->setMinimumSize(QSize(258, 32));
        monthcomboBox->setMaximumSize(QSize(258, 16777215));

        horizontalLayout_2->addWidget(monthcomboBox);


        verticalLayout_2->addWidget(monthframe);

        dayframe = new QFrame(frame);
        dayframe->setObjectName(QString::fromUtf8("dayframe"));
        sizePolicy.setHeightForWidth(dayframe->sizePolicy().hasHeightForWidth());
        dayframe->setSizePolicy(sizePolicy);
        dayframe->setMinimumSize(QSize(336, 50));
        dayframe->setMaximumSize(QSize(336, 50));
        dayframe->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(dayframe);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        daylabel = new QLabel(dayframe);
        daylabel->setObjectName(QString::fromUtf8("daylabel"));
        sizePolicy1.setHeightForWidth(daylabel->sizePolicy().hasHeightForWidth());
        daylabel->setSizePolicy(sizePolicy1);
        daylabel->setMinimumSize(QSize(0, 0));
        daylabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(daylabel);

        daycomboBox = new QComboBox(dayframe);
        daycomboBox->setObjectName(QString::fromUtf8("daycomboBox"));
        sizePolicy2.setHeightForWidth(daycomboBox->sizePolicy().hasHeightForWidth());
        daycomboBox->setSizePolicy(sizePolicy2);
        daycomboBox->setMinimumSize(QSize(258, 32));
        daycomboBox->setMaximumSize(QSize(258, 16777215));

        horizontalLayout_3->addWidget(daycomboBox);


        verticalLayout_2->addWidget(dayframe);


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
        horizontalLayout_5->setContentsMargins(-1, -1, 32, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(120, 36));
        cancelButton->setMaximumSize(QSize(120, 30));
        cancelButton->setSizeIncrement(QSize(120, 30));

        horizontalLayout_5->addWidget(cancelButton);

        confirmButton = new QPushButton(widget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setMinimumSize(QSize(120, 36));
        confirmButton->setMaximumSize(QSize(120, 30));

        horizontalLayout_5->addWidget(confirmButton);


        verticalLayout_3->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(17, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(frame);


        retranslateUi(changtimedialog);

        QMetaObject::connectSlotsByName(changtimedialog);
    } // setupUi

    void retranslateUi(QDialog *changtimedialog)
    {
        changtimedialog->setWindowTitle(QApplication::translate("changtimedialog", "Dialog", nullptr));
        titleLabel->setText(QApplication::translate("changtimedialog", "current date", nullptr));
        timelabel->setText(QApplication::translate("changtimedialog", "time", nullptr));
        yearlabel->setText(QApplication::translate("changtimedialog", "year", nullptr));
        monthlabel->setText(QApplication::translate("changtimedialog", "month", nullptr));
        daylabel->setText(QApplication::translate("changtimedialog", "day", nullptr));
        cancelButton->setText(QApplication::translate("changtimedialog", "cancel", nullptr));
        confirmButton->setText(QApplication::translate("changtimedialog", "confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changtimedialog: public Ui_changtimedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGTIME_H
