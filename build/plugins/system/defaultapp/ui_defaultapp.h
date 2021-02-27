/********************************************************************************
** Form generated from reading UI file 'defaultapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULTAPP_H
#define UI_DEFAULTAPP_H

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

class Ui_DefaultAppWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *titleLabel;
    QSpacerItem *verticalSpacer;
    QFrame *browserFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *browserLabel;
    QComboBox *browserComBoBox;
    QFrame *mailFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mailLabel;
    QComboBox *mailComBoBox;
    QFrame *imageFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *imageLabel;
    QComboBox *imageComBoBox;
    QFrame *audioFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *audioLabel;
    QComboBox *audioComBoBox;
    QFrame *videoFrame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *videoLabel;
    QComboBox *videoComBoBox;
    QFrame *textFrame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *textLabel;
    QComboBox *textComBoBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *ResetBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DefaultAppWindow)
    {
        if (DefaultAppWindow->objectName().isEmpty())
            DefaultAppWindow->setObjectName(QString::fromUtf8("DefaultAppWindow"));
        DefaultAppWindow->resize(800, 710);
        DefaultAppWindow->setMinimumSize(QSize(0, 0));
        DefaultAppWindow->setMaximumSize(QSize(16777215, 16777215));
        DefaultAppWindow->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout_2 = new QVBoxLayout(DefaultAppWindow);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 32, 0);
        titleLabel = new QLabel(DefaultAppWindow);
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

        browserFrame = new QFrame(DefaultAppWindow);
        browserFrame->setObjectName(QString::fromUtf8("browserFrame"));
        browserFrame->setMinimumSize(QSize(550, 60));
        browserFrame->setMaximumSize(QSize(960, 60));
        browserFrame->setFrameShape(QFrame::Box);
        horizontalLayout_2 = new QHBoxLayout(browserFrame);
        horizontalLayout_2->setSpacing(48);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(16, 0, 16, 0);
        browserLabel = new QLabel(browserFrame);
        browserLabel->setObjectName(QString::fromUtf8("browserLabel"));
        sizePolicy.setHeightForWidth(browserLabel->sizePolicy().hasHeightForWidth());
        browserLabel->setSizePolicy(sizePolicy);
        browserLabel->setMinimumSize(QSize(130, 0));
        browserLabel->setMaximumSize(QSize(130, 16777215));
        browserLabel->setScaledContents(true);

        horizontalLayout_2->addWidget(browserLabel);

        browserComBoBox = new QComboBox(browserFrame);
        browserComBoBox->setObjectName(QString::fromUtf8("browserComBoBox"));
        browserComBoBox->setMinimumSize(QSize(350, 0));
        browserComBoBox->setMaximumSize(QSize(16777215, 40));
        QFont font;
        browserComBoBox->setFont(font);
        browserComBoBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(browserComBoBox);


        verticalLayout_2->addWidget(browserFrame);

        mailFrame = new QFrame(DefaultAppWindow);
        mailFrame->setObjectName(QString::fromUtf8("mailFrame"));
        mailFrame->setMinimumSize(QSize(550, 60));
        mailFrame->setMaximumSize(QSize(960, 60));
        mailFrame->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(mailFrame);
        horizontalLayout_3->setSpacing(48);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(16, 0, 16, 0);
        mailLabel = new QLabel(mailFrame);
        mailLabel->setObjectName(QString::fromUtf8("mailLabel"));
        sizePolicy.setHeightForWidth(mailLabel->sizePolicy().hasHeightForWidth());
        mailLabel->setSizePolicy(sizePolicy);
        mailLabel->setMinimumSize(QSize(130, 0));
        mailLabel->setMaximumSize(QSize(130, 16777215));
        mailLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(mailLabel);

        mailComBoBox = new QComboBox(mailFrame);
        mailComBoBox->setObjectName(QString::fromUtf8("mailComBoBox"));
        mailComBoBox->setMinimumSize(QSize(350, 0));
        mailComBoBox->setMaximumSize(QSize(16777215, 40));
        mailComBoBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(mailComBoBox);


        verticalLayout_2->addWidget(mailFrame);

        imageFrame = new QFrame(DefaultAppWindow);
        imageFrame->setObjectName(QString::fromUtf8("imageFrame"));
        imageFrame->setMinimumSize(QSize(550, 60));
        imageFrame->setMaximumSize(QSize(960, 60));
        imageFrame->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(imageFrame);
        horizontalLayout_4->setSpacing(48);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(16, 0, 16, 0);
        imageLabel = new QLabel(imageFrame);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setMinimumSize(QSize(130, 0));
        imageLabel->setMaximumSize(QSize(130, 16777215));
        imageLabel->setScaledContents(true);

        horizontalLayout_4->addWidget(imageLabel);

        imageComBoBox = new QComboBox(imageFrame);
        imageComBoBox->setObjectName(QString::fromUtf8("imageComBoBox"));
        imageComBoBox->setMinimumSize(QSize(350, 0));
        imageComBoBox->setMaximumSize(QSize(16777215, 40));
        imageComBoBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(imageComBoBox);


        verticalLayout_2->addWidget(imageFrame);

        audioFrame = new QFrame(DefaultAppWindow);
        audioFrame->setObjectName(QString::fromUtf8("audioFrame"));
        audioFrame->setMinimumSize(QSize(550, 60));
        audioFrame->setMaximumSize(QSize(960, 60));
        audioFrame->setFrameShape(QFrame::Box);
        horizontalLayout_5 = new QHBoxLayout(audioFrame);
        horizontalLayout_5->setSpacing(48);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(16, 0, 16, 0);
        audioLabel = new QLabel(audioFrame);
        audioLabel->setObjectName(QString::fromUtf8("audioLabel"));
        sizePolicy.setHeightForWidth(audioLabel->sizePolicy().hasHeightForWidth());
        audioLabel->setSizePolicy(sizePolicy);
        audioLabel->setMinimumSize(QSize(130, 0));
        audioLabel->setMaximumSize(QSize(130, 16777215));
        audioLabel->setScaledContents(true);

        horizontalLayout_5->addWidget(audioLabel);

        audioComBoBox = new QComboBox(audioFrame);
        audioComBoBox->setObjectName(QString::fromUtf8("audioComBoBox"));
        audioComBoBox->setMinimumSize(QSize(350, 0));
        audioComBoBox->setMaximumSize(QSize(16777215, 40));
        audioComBoBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(audioComBoBox);


        verticalLayout_2->addWidget(audioFrame);

        videoFrame = new QFrame(DefaultAppWindow);
        videoFrame->setObjectName(QString::fromUtf8("videoFrame"));
        videoFrame->setMinimumSize(QSize(550, 60));
        videoFrame->setMaximumSize(QSize(960, 60));
        videoFrame->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(videoFrame);
        horizontalLayout_6->setSpacing(48);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(16, 0, 16, 0);
        videoLabel = new QLabel(videoFrame);
        videoLabel->setObjectName(QString::fromUtf8("videoLabel"));
        sizePolicy.setHeightForWidth(videoLabel->sizePolicy().hasHeightForWidth());
        videoLabel->setSizePolicy(sizePolicy);
        videoLabel->setMinimumSize(QSize(130, 0));
        videoLabel->setMaximumSize(QSize(130, 16777215));
        videoLabel->setScaledContents(true);

        horizontalLayout_6->addWidget(videoLabel);

        videoComBoBox = new QComboBox(videoFrame);
        videoComBoBox->setObjectName(QString::fromUtf8("videoComBoBox"));
        videoComBoBox->setMinimumSize(QSize(350, 0));
        videoComBoBox->setMaximumSize(QSize(16777215, 40));
        videoComBoBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(videoComBoBox);


        verticalLayout_2->addWidget(videoFrame);

        textFrame = new QFrame(DefaultAppWindow);
        textFrame->setObjectName(QString::fromUtf8("textFrame"));
        textFrame->setMinimumSize(QSize(550, 60));
        textFrame->setMaximumSize(QSize(960, 60));
        textFrame->setFrameShape(QFrame::Box);
        horizontalLayout_7 = new QHBoxLayout(textFrame);
        horizontalLayout_7->setSpacing(48);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(16, 0, 16, 0);
        textLabel = new QLabel(textFrame);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        sizePolicy.setHeightForWidth(textLabel->sizePolicy().hasHeightForWidth());
        textLabel->setSizePolicy(sizePolicy);
        textLabel->setMinimumSize(QSize(130, 0));
        textLabel->setMaximumSize(QSize(130, 16777215));
        textLabel->setScaledContents(true);

        horizontalLayout_7->addWidget(textLabel);

        textComBoBox = new QComboBox(textFrame);
        textComBoBox->setObjectName(QString::fromUtf8("textComBoBox"));
        textComBoBox->setMinimumSize(QSize(350, 0));
        textComBoBox->setMaximumSize(QSize(16777215, 40));
        textComBoBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(textComBoBox);


        verticalLayout_2->addWidget(textFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ResetBtn = new QPushButton(DefaultAppWindow);
        ResetBtn->setObjectName(QString::fromUtf8("ResetBtn"));
        ResetBtn->setMinimumSize(QSize(120, 36));
        ResetBtn->setMaximumSize(QSize(16777215, 36));

        horizontalLayout->addWidget(ResetBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(DefaultAppWindow);

        QMetaObject::connectSlotsByName(DefaultAppWindow);
    } // setupUi

    void retranslateUi(QWidget *DefaultAppWindow)
    {
        titleLabel->setText(QApplication::translate("DefaultAppWindow", "Select Default Application", nullptr));
        browserLabel->setText(QApplication::translate("DefaultAppWindow", "Browser", nullptr));
        mailLabel->setText(QApplication::translate("DefaultAppWindow", "Mail", nullptr));
        imageLabel->setText(QApplication::translate("DefaultAppWindow", "Image Viewer", nullptr));
        audioLabel->setText(QApplication::translate("DefaultAppWindow", "Audio Player", nullptr));
        videoLabel->setText(QApplication::translate("DefaultAppWindow", "Video Player", nullptr));
        textLabel->setText(QApplication::translate("DefaultAppWindow", "Text Editor", nullptr));
        ResetBtn->setText(QApplication::translate("DefaultAppWindow", "Reset to default", nullptr));
        Q_UNUSED(DefaultAppWindow);
    } // retranslateUi

};

namespace Ui {
    class DefaultAppWindow: public Ui_DefaultAppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULTAPP_H
