/********************************************************************************
** Form generated from reading UI file 'netconnect.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETCONNECT_H
#define UI_NETCONNECT_H

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

class Ui_NetConnect
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *statusLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *title2Label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *RefreshBtn;
    QFrame *openWifiFrame;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *openWIifLayout;
    QLabel *openLabel;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *availableLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *detailBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *NetConnect)
    {
        if (NetConnect->objectName().isEmpty())
            NetConnect->setObjectName(QString::fromUtf8("NetConnect"));
        NetConnect->resize(800, 710);
        NetConnect->setMinimumSize(QSize(0, 0));
        NetConnect->setMaximumSize(QSize(16777215, 16777215));
        NetConnect->setWindowTitle(QString::fromUtf8("NetConnect"));
        verticalLayout_2 = new QVBoxLayout(NetConnect);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        titleLabel = new QLabel(NetConnect);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout_2->addWidget(titleLabel);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        statusLayout = new QVBoxLayout();
        statusLayout->setSpacing(1);
        statusLayout->setObjectName(QString::fromUtf8("statusLayout"));

        verticalLayout_2->addLayout(statusLayout);

        verticalSpacer = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(NetConnect);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(550, 50));
        widget->setMaximumSize(QSize(960, 50));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        title2Label = new QLabel(widget);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);
        title2Label->setScaledContents(true);

        horizontalLayout_2->addWidget(title2Label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        RefreshBtn = new QPushButton(widget);
        RefreshBtn->setObjectName(QString::fromUtf8("RefreshBtn"));

        horizontalLayout_2->addWidget(RefreshBtn);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(widget);

        openWifiFrame = new QFrame(NetConnect);
        openWifiFrame->setObjectName(QString::fromUtf8("openWifiFrame"));
        openWifiFrame->setMinimumSize(QSize(550, 50));
        openWifiFrame->setMaximumSize(QSize(960, 50));
        openWifiFrame->setFrameShape(QFrame::Box);
        horizontalLayout_5 = new QHBoxLayout(openWifiFrame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(18, 0, 9, 0);
        openWIifLayout = new QHBoxLayout();
        openWIifLayout->setSpacing(6);
        openWIifLayout->setObjectName(QString::fromUtf8("openWIifLayout"));
        openLabel = new QLabel(openWifiFrame);
        openLabel->setObjectName(QString::fromUtf8("openLabel"));
        openLabel->setMinimumSize(QSize(118, 0));

        openWIifLayout->addWidget(openLabel);

        horizontalSpacer_2 = new QSpacerItem(523, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        openWIifLayout->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(openWIifLayout);


        verticalLayout_2->addWidget(openWifiFrame);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        availableLayout = new QVBoxLayout();
        availableLayout->setSpacing(1);
        availableLayout->setObjectName(QString::fromUtf8("availableLayout"));

        verticalLayout->addLayout(availableLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        detailBtn = new QPushButton(NetConnect);
        detailBtn->setObjectName(QString::fromUtf8("detailBtn"));
        detailBtn->setMinimumSize(QSize(120, 36));
        detailBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout->addWidget(detailBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        retranslateUi(NetConnect);

        QMetaObject::connectSlotsByName(NetConnect);
    } // setupUi

    void retranslateUi(QWidget *NetConnect)
    {
        titleLabel->setText(QApplication::translate("NetConnect", "Netconnect Status", nullptr));
        title2Label->setText(QApplication::translate("NetConnect", "Available Network", nullptr));
        RefreshBtn->setText(QApplication::translate("NetConnect", "Refresh", nullptr));
        openLabel->setText(QApplication::translate("NetConnect", "open wifi", nullptr));
        detailBtn->setText(QApplication::translate("NetConnect", "Network settings", nullptr));
        Q_UNUSED(NetConnect);
    } // retranslateUi

};

namespace Ui {
    class NetConnect: public Ui_NetConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETCONNECT_H
