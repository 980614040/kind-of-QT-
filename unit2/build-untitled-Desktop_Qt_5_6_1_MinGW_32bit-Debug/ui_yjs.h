/********************************************************************************
** Form generated from reading UI file 'yjs.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YJS_H
#define UI_YJS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_yjs
{
public:
    QPushButton *quitButton;
    QLabel *label;

    void setupUi(QDialog *yjs)
    {
        if (yjs->objectName().isEmpty())
            yjs->setObjectName(QStringLiteral("yjs"));
        yjs->resize(400, 300);
        quitButton = new QPushButton(yjs);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(130, 170, 93, 28));
        label = new QLabel(yjs);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 171, 51));

        retranslateUi(yjs);
        QObject::connect(quitButton, SIGNAL(clicked()), yjs, SLOT(close()));

        QMetaObject::connectSlotsByName(yjs);
    } // setupUi

    void retranslateUi(QDialog *yjs)
    {
        yjs->setWindowTitle(QApplication::translate("yjs", "Dialog", 0));
        quitButton->setText(QApplication::translate("yjs", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("yjs", "209400234 \346\235\250\351\222\247\345\215\207", 0));
    } // retranslateUi

};

namespace Ui {
    class yjs: public Ui_yjs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YJS_H
