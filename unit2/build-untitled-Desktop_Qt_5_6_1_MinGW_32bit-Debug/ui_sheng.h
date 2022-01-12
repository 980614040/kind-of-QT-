/********************************************************************************
** Form generated from reading UI file 'sheng.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHENG_H
#define UI_SHENG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sheng
{
public:
    QPushButton *quitButton;
    QLabel *label;

    void setupUi(QDialog *sheng)
    {
        if (sheng->objectName().isEmpty())
            sheng->setObjectName(QStringLiteral("sheng"));
        sheng->resize(400, 300);
        quitButton = new QPushButton(sheng);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(140, 190, 93, 28));
        label = new QLabel(sheng);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 80, 171, 51));

        retranslateUi(sheng);
        QObject::connect(quitButton, SIGNAL(clicked()), sheng, SLOT(close()));

        QMetaObject::connectSlotsByName(sheng);
    } // setupUi

    void retranslateUi(QDialog *sheng)
    {
        sheng->setWindowTitle(QApplication::translate("sheng", "Dialog", 0));
        quitButton->setText(QApplication::translate("sheng", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("sheng", "209400234 \346\235\250\351\222\247\345\215\207", 0));
    } // retranslateUi

};

namespace Ui {
    class sheng: public Ui_sheng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHENG_H
