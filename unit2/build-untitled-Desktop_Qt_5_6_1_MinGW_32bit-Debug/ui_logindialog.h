/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *pwdLineEdit;
    QPushButton *loginBtn;
    QLineEdit *userLineEdit;
    QPushButton *exitBtn;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(400, 300);
        label_2 = new QLabel(loginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 72, 15));
        label = new QLabel(loginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 72, 15));
        pwdLineEdit = new QLineEdit(loginDialog);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(160, 110, 141, 21));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        loginBtn = new QPushButton(loginDialog);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(80, 210, 93, 28));
        userLineEdit = new QLineEdit(loginDialog);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));
        userLineEdit->setGeometry(QRect(160, 60, 141, 21));
        exitBtn = new QPushButton(loginDialog);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(220, 210, 93, 28));

        retranslateUi(loginDialog);
        QObject::connect(exitBtn, SIGNAL(clicked()), loginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("loginDialog", "\345\257\206\347\240\201\357\274\232", 0));
        label->setText(QApplication::translate("loginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        pwdLineEdit->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        loginBtn->setText(QApplication::translate("loginDialog", "\347\231\273\345\275\225", 0));
        userLineEdit->setPlaceholderText(QApplication::translate("loginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        exitBtn->setText(QApplication::translate("loginDialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
