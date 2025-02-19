/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QCheckBox *warnCheckBox;
    QLabel *warnLabel;
    QPushButton *okSetBtn;
    QLineEdit *minGidEdit;
    QLineEdit *minUidEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *languageCombo;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setWindowModality(Qt::WindowModal);
        Settings->resize(541, 338);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        warnCheckBox = new QCheckBox(Settings);
        warnCheckBox->setObjectName(QString::fromUtf8("warnCheckBox"));
        warnCheckBox->setGeometry(QRect(429, 60, 31, 23));
        warnLabel = new QLabel(Settings);
        warnLabel->setObjectName(QString::fromUtf8("warnLabel"));
        warnLabel->setGeometry(QRect(190, 51, 241, 41));
        warnLabel->setTextFormat(Qt::RichText);
        warnLabel->setScaledContents(true);
        warnLabel->setWordWrap(true);
        okSetBtn = new QPushButton(Settings);
        okSetBtn->setObjectName(QString::fromUtf8("okSetBtn"));
        okSetBtn->setGeometry(QRect(230, 280, 91, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okSetBtn->setIcon(icon1);
        minGidEdit = new QLineEdit(Settings);
        minGidEdit->setObjectName(QString::fromUtf8("minGidEdit"));
        minGidEdit->setEnabled(true);
        minGidEdit->setGeometry(QRect(430, 145, 101, 29));
        minUidEdit = new QLineEdit(Settings);
        minUidEdit->setObjectName(QString::fromUtf8("minUidEdit"));
        minUidEdit->setEnabled(true);
        minUidEdit->setGeometry(QRect(430, 101, 101, 31));
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 100, 241, 31));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(189, 150, 171, 20));
        label_3 = new QLabel(Settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 200, 221, 20));
        languageCombo = new QComboBox(Settings);
        languageCombo->setObjectName(QString::fromUtf8("languageCombo"));
        languageCombo->setGeometry(QRect(430, 200, 101, 25));
        languageCombo->setDuplicatesEnabled(true);

        retranslateUi(Settings);
        QObject::connect(okSetBtn, SIGNAL(clicked()), Settings, SLOT(close()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "UserManager-Settings", nullptr));
        warnCheckBox->setText(QString());
        warnLabel->setText(QCoreApplication::translate("Settings", "E-mail users before account expires", nullptr));
        okSetBtn->setText(QCoreApplication::translate("Settings", "OK", nullptr));
        label->setText(QCoreApplication::translate("Settings", "First Normal UID:", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "First Normal GID:", nullptr));
        label_3->setText(QCoreApplication::translate("Settings", "Select Language:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
