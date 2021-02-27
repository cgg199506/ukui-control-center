/********************************************************************************
** Form generated from reading UI file 'audio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIO_H
#define UI_AUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Audio
{
public:
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *Audio)
    {
        if (Audio->objectName().isEmpty())
            Audio->setObjectName(QString::fromUtf8("Audio"));
        Audio->resize(800, 710);
        Audio->setMinimumSize(QSize(0, 0));
        Audio->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(Audio);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 32, 48);

        retranslateUi(Audio);

        QMetaObject::connectSlotsByName(Audio);
    } // setupUi

    void retranslateUi(QWidget *Audio)
    {
        Audio->setWindowTitle(QApplication::translate("Audio", "Audio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Audio: public Ui_Audio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIO_H
