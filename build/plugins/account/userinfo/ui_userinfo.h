/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInfo
{
public:
    QVBoxLayout *verticalLayout_9;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QFrame *currentUserFrame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *currentUserFaceLabel;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *userNameLabel;
    QLabel *userTypeLabel;
    QPushButton *changePwdBtn;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_8;
    QLabel *userNameLabel_2;
    QLabel *userTypeLabel_2;
    QPushButton *changeTypeBtn;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *changeValidBtn;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *changeGroupBtn;
    QSpacerItem *horizontalSpacer_4;
    QWidget *nopwdLoginWidget;
    QHBoxLayout *horizontalLayout_5;
    QFrame *autoLoginFrame_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *nopwdHorLayout;
    QLabel *loginpwdLabel;
    QSpacerItem *horizontalSpacer_7;
    QFrame *autoLoginFrame;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *autoLoginHorLayout;
    QLabel *autologinLabel;
    QSpacerItem *horizontalSpacer_3;
    QFrame *liveFrame;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *autoLoginHorLayout_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *title2Label;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QWidget *addUserWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *addLyt;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName(QString::fromUtf8("UserInfo"));
        UserInfo->resize(800, 734);
        UserInfo->setMinimumSize(QSize(0, 0));
        UserInfo->setMaximumSize(QSize(16777215, 16777215));
        UserInfo->setWindowTitle(QString::fromUtf8("UserInfo"));
        verticalLayout_9 = new QVBoxLayout(UserInfo);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, -1, 32, -1);
        titleLabel = new QLabel(UserInfo);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        titleLabel->setScaledContents(true);

        verticalLayout_9->addWidget(titleLabel);

        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer);

        currentUserFrame = new QFrame(UserInfo);
        currentUserFrame->setObjectName(QString::fromUtf8("currentUserFrame"));
        currentUserFrame->setMinimumSize(QSize(550, 202));
        currentUserFrame->setMaximumSize(QSize(960, 202));
        currentUserFrame->setFrameShape(QFrame::Box);
        verticalLayout_3 = new QVBoxLayout(currentUserFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(16, 16, 16, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 24);
        currentUserFaceLabel = new QLabel(currentUserFrame);
        currentUserFaceLabel->setObjectName(QString::fromUtf8("currentUserFaceLabel"));
        sizePolicy.setHeightForWidth(currentUserFaceLabel->sizePolicy().hasHeightForWidth());
        currentUserFaceLabel->setSizePolicy(sizePolicy);
        currentUserFaceLabel->setMinimumSize(QSize(112, 112));
        currentUserFaceLabel->setMaximumSize(QSize(112, 112));

        horizontalLayout->addWidget(currentUserFaceLabel);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        userNameLabel = new QLabel(currentUserFrame);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        sizePolicy.setHeightForWidth(userNameLabel->sizePolicy().hasHeightForWidth());
        userNameLabel->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(userNameLabel);

        userTypeLabel = new QLabel(currentUserFrame);
        userTypeLabel->setObjectName(QString::fromUtf8("userTypeLabel"));
        sizePolicy.setHeightForWidth(userTypeLabel->sizePolicy().hasHeightForWidth());
        userTypeLabel->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(userTypeLabel);

        changePwdBtn = new QPushButton(currentUserFrame);
        changePwdBtn->setObjectName(QString::fromUtf8("changePwdBtn"));
        changePwdBtn->setMinimumSize(QSize(100, 36));
        changePwdBtn->setMaximumSize(QSize(16777215, 36));

        verticalLayout_4->addWidget(changePwdBtn);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);

        userNameLabel_2 = new QLabel(currentUserFrame);
        userNameLabel_2->setObjectName(QString::fromUtf8("userNameLabel_2"));
        sizePolicy.setHeightForWidth(userNameLabel_2->sizePolicy().hasHeightForWidth());
        userNameLabel_2->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(userNameLabel_2);

        userTypeLabel_2 = new QLabel(currentUserFrame);
        userTypeLabel_2->setObjectName(QString::fromUtf8("userTypeLabel_2"));
        sizePolicy.setHeightForWidth(userTypeLabel_2->sizePolicy().hasHeightForWidth());
        userTypeLabel_2->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(userTypeLabel_2);

        changeTypeBtn = new QPushButton(currentUserFrame);
        changeTypeBtn->setObjectName(QString::fromUtf8("changeTypeBtn"));
        changeTypeBtn->setMinimumSize(QSize(100, 36));
        changeTypeBtn->setMaximumSize(QSize(16777215, 36));

        verticalLayout_6->addWidget(changeTypeBtn);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        label_4 = new QLabel(currentUserFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_4);

        label_5 = new QLabel(currentUserFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_5);

        changeValidBtn = new QPushButton(currentUserFrame);
        changeValidBtn->setObjectName(QString::fromUtf8("changeValidBtn"));
        changeValidBtn->setMinimumSize(QSize(100, 36));
        changeValidBtn->setMaximumSize(QSize(16777215, 36));

        verticalLayout_5->addWidget(changeValidBtn);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);

        label_6 = new QLabel(currentUserFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_6);

        label_7 = new QLabel(currentUserFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_7);

        changeGroupBtn = new QPushButton(currentUserFrame);
        changeGroupBtn->setObjectName(QString::fromUtf8("changeGroupBtn"));
        changeGroupBtn->setMinimumSize(QSize(100, 36));
        changeGroupBtn->setMaximumSize(QSize(16777215, 36));

        verticalLayout_7->addWidget(changeGroupBtn);


        horizontalLayout->addLayout(verticalLayout_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        nopwdLoginWidget = new QWidget(currentUserFrame);
        nopwdLoginWidget->setObjectName(QString::fromUtf8("nopwdLoginWidget"));
        nopwdLoginWidget->setMinimumSize(QSize(550, 50));
        nopwdLoginWidget->setMaximumSize(QSize(960, 50));
        horizontalLayout_5 = new QHBoxLayout(nopwdLoginWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(nopwdLoginWidget);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_9->addWidget(currentUserFrame);

        autoLoginFrame_2 = new QFrame(UserInfo);
        autoLoginFrame_2->setObjectName(QString::fromUtf8("autoLoginFrame_2"));
        autoLoginFrame_2->setMinimumSize(QSize(550, 50));
        autoLoginFrame_2->setMaximumSize(QSize(960, 50));
        autoLoginFrame_2->setFrameShape(QFrame::Box);
        horizontalLayout_10 = new QHBoxLayout(autoLoginFrame_2);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(16, 0, 16, 0);
        nopwdHorLayout = new QHBoxLayout();
        nopwdHorLayout->setSpacing(0);
        nopwdHorLayout->setObjectName(QString::fromUtf8("nopwdHorLayout"));
        nopwdHorLayout->setContentsMargins(0, -1, 0, -1);
        loginpwdLabel = new QLabel(autoLoginFrame_2);
        loginpwdLabel->setObjectName(QString::fromUtf8("loginpwdLabel"));
        sizePolicy.setHeightForWidth(loginpwdLabel->sizePolicy().hasHeightForWidth());
        loginpwdLabel->setSizePolicy(sizePolicy);
        loginpwdLabel->setScaledContents(true);

        nopwdHorLayout->addWidget(loginpwdLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        nopwdHorLayout->addItem(horizontalSpacer_7);


        horizontalLayout_10->addLayout(nopwdHorLayout);


        verticalLayout_9->addWidget(autoLoginFrame_2);

        autoLoginFrame = new QFrame(UserInfo);
        autoLoginFrame->setObjectName(QString::fromUtf8("autoLoginFrame"));
        autoLoginFrame->setMinimumSize(QSize(550, 50));
        autoLoginFrame->setMaximumSize(QSize(960, 50));
        autoLoginFrame->setFrameShape(QFrame::Box);
        horizontalLayout_7 = new QHBoxLayout(autoLoginFrame);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, 0, 16, 0);
        autoLoginHorLayout = new QHBoxLayout();
        autoLoginHorLayout->setSpacing(0);
        autoLoginHorLayout->setObjectName(QString::fromUtf8("autoLoginHorLayout"));
        autoLoginHorLayout->setContentsMargins(0, -1, 0, -1);
        autologinLabel = new QLabel(autoLoginFrame);
        autologinLabel->setObjectName(QString::fromUtf8("autologinLabel"));
        sizePolicy.setHeightForWidth(autologinLabel->sizePolicy().hasHeightForWidth());
        autologinLabel->setSizePolicy(sizePolicy);
        autologinLabel->setScaledContents(true);

        autoLoginHorLayout->addWidget(autologinLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        autoLoginHorLayout->addItem(horizontalSpacer_3);


        horizontalLayout_7->addLayout(autoLoginHorLayout);


        verticalLayout_9->addWidget(autoLoginFrame);

        liveFrame = new QFrame(UserInfo);
        liveFrame->setObjectName(QString::fromUtf8("liveFrame"));
        liveFrame->setMinimumSize(QSize(550, 50));
        liveFrame->setMaximumSize(QSize(960, 50));
        liveFrame->setFrameShape(QFrame::Box);
        horizontalLayout_8 = new QHBoxLayout(liveFrame);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(16, 0, 16, 0);
        autoLoginHorLayout_2 = new QHBoxLayout();
        autoLoginHorLayout_2->setSpacing(0);
        autoLoginHorLayout_2->setObjectName(QString::fromUtf8("autoLoginHorLayout_2"));
        autoLoginHorLayout_2->setContentsMargins(0, -1, 0, -1);
        label_3 = new QLabel(liveFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setScaledContents(true);

        autoLoginHorLayout_2->addWidget(label_3);


        horizontalLayout_8->addLayout(autoLoginHorLayout_2);


        verticalLayout_9->addWidget(liveFrame);

        verticalSpacer_2 = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_2);

        title2Label = new QLabel(UserInfo);
        title2Label->setObjectName(QString::fromUtf8("title2Label"));
        sizePolicy.setHeightForWidth(title2Label->sizePolicy().hasHeightForWidth());
        title2Label->setSizePolicy(sizePolicy);
        title2Label->setScaledContents(true);

        verticalLayout_9->addWidget(title2Label);

        verticalSpacer_6 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(UserInfo);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(550, 0));
        listWidget->setMaximumSize(QSize(960, 16777215));

        verticalLayout_2->addWidget(listWidget);

        addUserWidget = new QWidget(UserInfo);
        addUserWidget->setObjectName(QString::fromUtf8("addUserWidget"));
        addUserWidget->setMinimumSize(QSize(550, 60));
        addUserWidget->setMaximumSize(QSize(960, 60));
        horizontalLayout_2 = new QHBoxLayout(addUserWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addLyt = new QHBoxLayout();
        addLyt->setSpacing(0);
        addLyt->setObjectName(QString::fromUtf8("addLyt"));
        addLyt->setContentsMargins(0, -1, -1, -1);

        horizontalLayout_2->addLayout(addLyt);


        verticalLayout_2->addWidget(addUserWidget);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);


        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QWidget *UserInfo)
    {
        titleLabel->setText(QApplication::translate("UserInfo", "Current User", nullptr));
        currentUserFaceLabel->setText(QString());
        userNameLabel->setText(QString());
        userTypeLabel->setText(QString());
        changePwdBtn->setText(QApplication::translate("UserInfo", "Password", nullptr));
        userNameLabel_2->setText(QString());
        userTypeLabel_2->setText(QString());
        changeTypeBtn->setText(QApplication::translate("UserInfo", "Type", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        changeValidBtn->setText(QApplication::translate("UserInfo", "Valid", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        changeGroupBtn->setText(QApplication::translate("UserInfo", "Group", nullptr));
        loginpwdLabel->setText(QApplication::translate("UserInfo", "Login no passwd", nullptr));
        autologinLabel->setText(QApplication::translate("UserInfo", "enable autoLogin", nullptr));
        label_3->setText(QApplication::translate("UserInfo", "Currently in Live mode, please create a new user and log out", nullptr));
        title2Label->setText(QApplication::translate("UserInfo", "Other Users", nullptr));
        Q_UNUSED(UserInfo);
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
