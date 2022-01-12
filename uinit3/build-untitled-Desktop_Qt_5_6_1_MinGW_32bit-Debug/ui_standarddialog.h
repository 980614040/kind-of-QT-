/********************************************************************************
** Form generated from reading UI file 'standarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDDIALOG_H
#define UI_STANDARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StandardDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *fileLineEdit;
    QLineEdit *fontLineEdit;
    QFrame *colorFrame;

    void setupUi(QDialog *StandardDialog)
    {
        if (StandardDialog->objectName().isEmpty())
            StandardDialog->setObjectName(QStringLiteral("StandardDialog"));
        StandardDialog->resize(400, 300);
        pushButton = new QPushButton(StandardDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 70, 75, 23));
        pushButton_2 = new QPushButton(StandardDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 110, 75, 23));
        pushButton_2->setAutoFillBackground(true);
        pushButton_3 = new QPushButton(StandardDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 150, 75, 23));
        fileLineEdit = new QLineEdit(StandardDialog);
        fileLineEdit->setObjectName(QStringLiteral("fileLineEdit"));
        fileLineEdit->setGeometry(QRect(140, 70, 113, 20));
        fontLineEdit = new QLineEdit(StandardDialog);
        fontLineEdit->setObjectName(QStringLiteral("fontLineEdit"));
        fontLineEdit->setGeometry(QRect(140, 150, 113, 20));
        colorFrame = new QFrame(StandardDialog);
        colorFrame->setObjectName(QStringLiteral("colorFrame"));
        colorFrame->setGeometry(QRect(140, 100, 111, 31));
        colorFrame->setAutoFillBackground(true);
        colorFrame->setFrameShape(QFrame::StyledPanel);
        colorFrame->setFrameShadow(QFrame::Raised);

        retranslateUi(StandardDialog);

        QMetaObject::connectSlotsByName(StandardDialog);
    } // setupUi

    void retranslateUi(QDialog *StandardDialog)
    {
        StandardDialog->setWindowTitle(QApplication::translate("StandardDialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("StandardDialog", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", 0));
        pushButton_2->setText(QApplication::translate("StandardDialog", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", 0));
        pushButton_3->setText(QApplication::translate("StandardDialog", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", 0));
    } // retranslateUi

};

namespace Ui {
    class StandardDialog: public Ui_StandardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDDIALOG_H
