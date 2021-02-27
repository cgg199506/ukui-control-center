/********************************************************************************
** Form generated from reading UI file 'proxy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXY_H
#define UI_PROXY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proxy
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QFrame *autoFrame;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *autoHorLayout;
    QLabel *autoLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *urlFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *urlLineEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *title2Label;
    QSpacerItem *verticalSpacer_3;
    QFrame *manualFrame;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *manualHorLayout;
    QLabel *manualLabel;
    QSpacerItem *horizontalSpacer_3;
    QFrame *httpFrame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *httpHostLineEdit;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QLineEdit *httpPortLineEdit;
    QPushButton *cetificationBtn;
    QSpacerItem *horizontalSpacer_4;
    QFrame *httpsFrame;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *httpsHostLineEdit;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_9;
    QLineEdit *httpsPortLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QFrame *ftpFrame;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QLineEdit *ftpHostLineEdit;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_11;
    QLineEdit *ftpPortLineEdit;
    QSpacerItem *horizontalSpacer_6;
    QFrame *socksFrame;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QLineEdit *socksHostLineEdit;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_13;
    QLineEdit *socksPortLineEdit;
    QSpacerItem *horizontalSpacer_7;
    QFrame *ignoreHostsFrame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QTextEdit *ignoreHostTextEdit;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Proxy)
    {
        if (Proxy->objectName().isEmpty())
            Proxy->setObjectName(QString::fromUtf8("Proxy"));
        Proxy->resize(800, 724);
        Proxy->setMinimumSize(QSize(0, 0));
        Proxy->setMaximumSize(QSize(16777215, 16777215));
        Proxy->setWindowTitle(QString::fromUtf8("Proxy"));
        verticalLayout_2 = new QVBoxLayout(Proxy);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 30);
        titleLabel = new QLabel(Proxy);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout_2->addWidget(titleLabel);

        verticalSpacer = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        autoFrame = new QFrame(Proxy);
        autoFrame->setObjectName(QString::fromUtf8("autoFrame"));
        autoFrame->setMinimumSize(QSize(550, 50));
        autoFrame->setMaximumSize(QSize(960, 50));
        autoFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(autoFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        autoHorLayout = new QHBoxLayout();
        autoHorLayout->setSpacing(0);
        autoHorLayout->setObjectName(QString::fromUtf8("autoHorLayout"));
        autoHorLayout->setContentsMargins(16, -1, 16, -1);
        autoLabel = new QLabel(autoFrame);
        autoLabel->setObjectName(QString::fromUtf8("autoLabel"));
        sizePolicy.setHeightForWidth(autoLabel->sizePolicy().hasHeightForWidth());
        autoLabel->setSizePolicy(sizePolicy);
        autoLabel->setScaledContents(true);

        autoHorLayout->addWidget(autoLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        autoHorLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(autoHorLayout);


        verticalLayout_2->addWidget(autoFrame);

        urlFrame = new QFrame(Proxy);
        urlFrame->setObjectName(QString::fromUtf8("urlFrame"));
        urlFrame->setMinimumSize(QSize(550, 50));
        urlFrame->setMaximumSize(QSize(960, 50));
        urlFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(urlFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(16, -1, 16, -1);
        label_4 = new QLabel(urlFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setScaledContents(true);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        urlLineEdit = new QLineEdit(urlFrame);
        urlLineEdit->setObjectName(QString::fromUtf8("urlLineEdit"));
        urlLineEdit->setMinimumSize(QSize(320, 32));
        urlLineEdit->setMaximumSize(QSize(320, 32));

        horizontalLayout_3->addWidget(urlLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(urlFrame);

        verticalSpacer_2 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        title2Label = new QLabel(Proxy);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);
        title2Label->setScaledContents(true);

        verticalLayout_2->addWidget(title2Label);

        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        manualFrame = new QFrame(Proxy);
        manualFrame->setObjectName(QString::fromUtf8("manualFrame"));
        manualFrame->setMinimumSize(QSize(550, 50));
        manualFrame->setMaximumSize(QSize(960, 50));
        manualFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(manualFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        manualHorLayout = new QHBoxLayout();
        manualHorLayout->setSpacing(0);
        manualHorLayout->setObjectName(QString::fromUtf8("manualHorLayout"));
        manualHorLayout->setContentsMargins(16, -1, 16, -1);
        manualLabel = new QLabel(manualFrame);
        manualLabel->setObjectName(QString::fromUtf8("manualLabel"));
        sizePolicy.setHeightForWidth(manualLabel->sizePolicy().hasHeightForWidth());
        manualLabel->setSizePolicy(sizePolicy);
        manualLabel->setScaledContents(true);

        manualHorLayout->addWidget(manualLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        manualHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_6->addLayout(manualHorLayout);


        verticalLayout_2->addWidget(manualFrame);

        httpFrame = new QFrame(Proxy);
        httpFrame->setObjectName(QString::fromUtf8("httpFrame"));
        httpFrame->setMinimumSize(QSize(550, 50));
        httpFrame->setMaximumSize(QSize(960, 50));
        httpFrame->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(httpFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, -1, 16, -1);
        label_6 = new QLabel(httpFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(115, 0));
        label_6->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_7->addWidget(label_6);

        httpHostLineEdit = new QLineEdit(httpFrame);
        httpHostLineEdit->setObjectName(QString::fromUtf8("httpHostLineEdit"));
        httpHostLineEdit->setMinimumSize(QSize(160, 32));
        httpHostLineEdit->setMaximumSize(QSize(160, 32));

        horizontalLayout_7->addWidget(httpHostLineEdit);

        horizontalSpacer_8 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        label_7 = new QLabel(httpFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_7);

        httpPortLineEdit = new QLineEdit(httpFrame);
        httpPortLineEdit->setObjectName(QString::fromUtf8("httpPortLineEdit"));
        httpPortLineEdit->setMinimumSize(QSize(122, 32));
        httpPortLineEdit->setMaximumSize(QSize(122, 32));

        horizontalLayout_7->addWidget(httpPortLineEdit);

        cetificationBtn = new QPushButton(httpFrame);
        cetificationBtn->setObjectName(QString::fromUtf8("cetificationBtn"));
        cetificationBtn->setMinimumSize(QSize(80, 32));
        cetificationBtn->setMaximumSize(QSize(80, 32));

        horizontalLayout_7->addWidget(cetificationBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(httpFrame);

        httpsFrame = new QFrame(Proxy);
        httpsFrame->setObjectName(QString::fromUtf8("httpsFrame"));
        httpsFrame->setMinimumSize(QSize(550, 50));
        httpsFrame->setMaximumSize(QSize(960, 50));
        httpsFrame->setFrameShape(QFrame::Box);
        horizontalLayout_10 = new QHBoxLayout(httpsFrame);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(16, -1, 16, -1);
        label_8 = new QLabel(httpsFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(115, 0));
        label_8->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_9->addWidget(label_8);

        httpsHostLineEdit = new QLineEdit(httpsFrame);
        httpsHostLineEdit->setObjectName(QString::fromUtf8("httpsHostLineEdit"));
        httpsHostLineEdit->setMinimumSize(QSize(160, 32));
        httpsHostLineEdit->setMaximumSize(QSize(160, 32));

        horizontalLayout_9->addWidget(httpsHostLineEdit);

        horizontalSpacer_9 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        label_9 = new QLabel(httpsFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label_9);

        httpsPortLineEdit = new QLineEdit(httpsFrame);
        httpsPortLineEdit->setObjectName(QString::fromUtf8("httpsPortLineEdit"));
        httpsPortLineEdit->setMinimumSize(QSize(122, 32));
        httpsPortLineEdit->setMaximumSize(QSize(122, 32));

        horizontalLayout_9->addWidget(httpsPortLineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_2->addWidget(httpsFrame);

        ftpFrame = new QFrame(Proxy);
        ftpFrame->setObjectName(QString::fromUtf8("ftpFrame"));
        ftpFrame->setMinimumSize(QSize(550, 50));
        ftpFrame->setMaximumSize(QSize(960, 50));
        ftpFrame->setFrameShape(QFrame::Box);
        horizontalLayout_12 = new QHBoxLayout(ftpFrame);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(16, -1, 16, -1);
        label_10 = new QLabel(ftpFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(115, 0));
        label_10->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_11->addWidget(label_10);

        ftpHostLineEdit = new QLineEdit(ftpFrame);
        ftpHostLineEdit->setObjectName(QString::fromUtf8("ftpHostLineEdit"));
        ftpHostLineEdit->setMinimumSize(QSize(160, 32));
        ftpHostLineEdit->setMaximumSize(QSize(160, 32));

        horizontalLayout_11->addWidget(ftpHostLineEdit);

        horizontalSpacer_10 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        label_11 = new QLabel(ftpFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(label_11);

        ftpPortLineEdit = new QLineEdit(ftpFrame);
        ftpPortLineEdit->setObjectName(QString::fromUtf8("ftpPortLineEdit"));
        ftpPortLineEdit->setMinimumSize(QSize(122, 32));
        ftpPortLineEdit->setMaximumSize(QSize(122, 32));

        horizontalLayout_11->addWidget(ftpPortLineEdit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(ftpFrame);

        socksFrame = new QFrame(Proxy);
        socksFrame->setObjectName(QString::fromUtf8("socksFrame"));
        socksFrame->setMinimumSize(QSize(550, 50));
        socksFrame->setMaximumSize(QSize(960, 50));
        socksFrame->setFrameShape(QFrame::Box);
        horizontalLayout_14 = new QHBoxLayout(socksFrame);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(8);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(16, -1, 16, -1);
        label_12 = new QLabel(socksFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMinimumSize(QSize(115, 0));
        label_12->setMaximumSize(QSize(115, 16777215));

        horizontalLayout_13->addWidget(label_12);

        socksHostLineEdit = new QLineEdit(socksFrame);
        socksHostLineEdit->setObjectName(QString::fromUtf8("socksHostLineEdit"));
        socksHostLineEdit->setMinimumSize(QSize(160, 32));
        socksHostLineEdit->setMaximumSize(QSize(160, 32));

        horizontalLayout_13->addWidget(socksHostLineEdit);

        horizontalSpacer_11 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        label_13 = new QLabel(socksFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(label_13);

        socksPortLineEdit = new QLineEdit(socksFrame);
        socksPortLineEdit->setObjectName(QString::fromUtf8("socksPortLineEdit"));
        socksPortLineEdit->setMinimumSize(QSize(122, 32));
        socksPortLineEdit->setMaximumSize(QSize(122, 32));

        horizontalLayout_13->addWidget(socksPortLineEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_2->addWidget(socksFrame);

        ignoreHostsFrame = new QFrame(Proxy);
        ignoreHostsFrame->setObjectName(QString::fromUtf8("ignoreHostsFrame"));
        ignoreHostsFrame->setMinimumSize(QSize(550, 180));
        ignoreHostsFrame->setMaximumSize(QSize(960, 180));
        ignoreHostsFrame->setFrameShape(QFrame::Box);
        verticalLayout_3 = new QVBoxLayout(ignoreHostsFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(16, 24, 16, 24);
        label_14 = new QLabel(ignoreHostsFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setScaledContents(true);

        verticalLayout->addWidget(label_14);

        ignoreHostTextEdit = new QTextEdit(ignoreHostsFrame);
        ignoreHostTextEdit->setObjectName(QString::fromUtf8("ignoreHostTextEdit"));

        verticalLayout->addWidget(ignoreHostTextEdit);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(ignoreHostsFrame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(Proxy);

        QMetaObject::connectSlotsByName(Proxy);
    } // setupUi

    void retranslateUi(QWidget *Proxy)
    {
        titleLabel->setText(QApplication::translate("Proxy", "Auto Proxy", nullptr));
        autoLabel->setText(QApplication::translate("Proxy", "Auto proxy", nullptr));
        label_4->setText(QApplication::translate("Proxy", "Auto url", nullptr));
        title2Label->setText(QApplication::translate("Proxy", "Manual Proxy", nullptr));
        manualLabel->setText(QApplication::translate("Proxy", "Manual proxy", nullptr));
        label_6->setText(QApplication::translate("Proxy", "Http Proxy", nullptr));
        label_7->setText(QApplication::translate("Proxy", "Port", nullptr));
        cetificationBtn->setText(QApplication::translate("Proxy", "Cetification", nullptr));
        label_8->setText(QApplication::translate("Proxy", "Https Proxy", nullptr));
        label_9->setText(QApplication::translate("Proxy", "Port", nullptr));
        label_10->setText(QApplication::translate("Proxy", "Ftp Proxy", nullptr));
        label_11->setText(QApplication::translate("Proxy", "Port", nullptr));
        label_12->setText(QApplication::translate("Proxy", "Socks Proxy", nullptr));
        label_13->setText(QApplication::translate("Proxy", "Port", nullptr));
        label_14->setText(QApplication::translate("Proxy", "List of ignored hosts. more than one entry, please separate with english semicolon(;)", nullptr));
        Q_UNUSED(Proxy);
    } // retranslateUi

};

namespace Ui {
    class Proxy: public Ui_Proxy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXY_H
