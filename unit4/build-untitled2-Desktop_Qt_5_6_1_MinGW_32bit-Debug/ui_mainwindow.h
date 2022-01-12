/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn6;
    QPushButton *btn5;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *right_parenthese;
    QPushButton *btnallclear;
    QPushButton *btnclear;
    QPushButton *btn0;
    QPushButton *btnminus;
    QPushButton *btnmultiple;
    QPushButton *pushButton_13;
    QPushButton *btnplus;
    QPushButton *btndecimals;
    QPushButton *btndevide;
    QPushButton *btnequal;
    QPushButton *btndelete;
    QPushButton *btn2;
    QPushButton *btn1;
    QPushButton *btn7;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(292, 371);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 275, 325));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn3 = new QPushButton(verticalLayoutWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setMinimumSize(QSize(0, 50));
        btn3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn3, 4, 2, 1, 1);

        btn4 = new QPushButton(verticalLayoutWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setMinimumSize(QSize(0, 50));
        btn4->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn4, 3, 0, 1, 1);

        btn6 = new QPushButton(verticalLayoutWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setMinimumSize(QSize(0, 50));
        btn6->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn6, 3, 2, 1, 1);

        btn5 = new QPushButton(verticalLayoutWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setMinimumSize(QSize(0, 50));
        btn5->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn5, 3, 1, 1, 1);

        btn8 = new QPushButton(verticalLayoutWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setMinimumSize(QSize(0, 50));
        btn8->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btn9 = new QPushButton(verticalLayoutWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setMinimumSize(QSize(0, 50));
        btn9->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        right_parenthese = new QPushButton(verticalLayoutWidget);
        right_parenthese->setObjectName(QStringLiteral("right_parenthese"));
        right_parenthese->setMinimumSize(QSize(0, 50));
        right_parenthese->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(right_parenthese, 3, 4, 1, 1);

        btnallclear = new QPushButton(verticalLayoutWidget);
        btnallclear->setObjectName(QStringLiteral("btnallclear"));
        btnallclear->setMinimumSize(QSize(0, 50));
        btnallclear->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btnallclear, 1, 0, 1, 1);

        btnclear = new QPushButton(verticalLayoutWidget);
        btnclear->setObjectName(QStringLiteral("btnclear"));
        btnclear->setMinimumSize(QSize(0, 50));
        btnclear->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btnclear, 1, 1, 1, 1);

        btn0 = new QPushButton(verticalLayoutWidget);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setMinimumSize(QSize(0, 50));
        btn0->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(btn0, 5, 0, 1, 2);

        btnminus = new QPushButton(verticalLayoutWidget);
        btnminus->setObjectName(QStringLiteral("btnminus"));
        btnminus->setMinimumSize(QSize(0, 50));
        btnminus->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btnminus, 3, 3, 1, 1);

        btnmultiple = new QPushButton(verticalLayoutWidget);
        btnmultiple->setObjectName(QStringLiteral("btnmultiple"));
        btnmultiple->setMinimumSize(QSize(0, 50));
        btnmultiple->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(btnmultiple, 4, 3, 1, 1);

        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(0, 50));
        pushButton_13->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(pushButton_13, 2, 4, 1, 1);

        btnplus = new QPushButton(verticalLayoutWidget);
        btnplus->setObjectName(QStringLiteral("btnplus"));
        btnplus->setMinimumSize(QSize(0, 50));
        btnplus->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btnplus, 2, 3, 1, 1);

        btndecimals = new QPushButton(verticalLayoutWidget);
        btndecimals->setObjectName(QStringLiteral("btndecimals"));
        btndecimals->setMinimumSize(QSize(0, 50));
        btndecimals->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btndecimals, 5, 2, 1, 1);

        btndevide = new QPushButton(verticalLayoutWidget);
        btndevide->setObjectName(QStringLiteral("btndevide"));
        btndevide->setMinimumSize(QSize(0, 50));
        btndevide->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btndevide, 5, 3, 1, 1);

        btnequal = new QPushButton(verticalLayoutWidget);
        btnequal->setObjectName(QStringLiteral("btnequal"));
        btnequal->setMinimumSize(QSize(50, 0));
        btnequal->setMaximumSize(QSize(50, 100));

        gridLayout->addWidget(btnequal, 4, 4, 2, 1);

        btndelete = new QPushButton(verticalLayoutWidget);
        btndelete->setObjectName(QStringLiteral("btndelete"));
        btndelete->setMinimumSize(QSize(0, 50));
        btndelete->setMaximumSize(QSize(155, 16777215));

        gridLayout->addWidget(btndelete, 1, 2, 1, 3);

        btn2 = new QPushButton(verticalLayoutWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setMinimumSize(QSize(0, 50));
        btn2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn2, 4, 1, 1, 1);

        btn1 = new QPushButton(verticalLayoutWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setMinimumSize(QSize(0, 50));
        btn1->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn1, 4, 0, 1, 1);

        btn7 = new QPushButton(verticalLayoutWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setMinimumSize(QSize(0, 50));
        btn7->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 5);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        verticalLayoutWidget->raise();
        lineEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 292, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250V1.0 209400234 \346\235\250\351\222\247\345\215\207", 0));
        btn3->setText(QApplication::translate("MainWindow", "3", 0));
        btn4->setText(QApplication::translate("MainWindow", "4", 0));
        btn6->setText(QApplication::translate("MainWindow", "6", 0));
        btn5->setText(QApplication::translate("MainWindow", "5", 0));
        btn8->setText(QApplication::translate("MainWindow", "8", 0));
        btn9->setText(QApplication::translate("MainWindow", "9", 0));
        right_parenthese->setText(QApplication::translate("MainWindow", ")", 0));
        btnallclear->setText(QApplication::translate("MainWindow", "CE", 0));
        btnclear->setText(QApplication::translate("MainWindow", "C", 0));
        btn0->setText(QApplication::translate("MainWindow", "0", 0));
        btnminus->setText(QApplication::translate("MainWindow", "-", 0));
        btnmultiple->setText(QApplication::translate("MainWindow", "*", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "(", 0));
        btnplus->setText(QApplication::translate("MainWindow", "+", 0));
        btndecimals->setText(QApplication::translate("MainWindow", ".", 0));
        btndevide->setText(QApplication::translate("MainWindow", "/", 0));
        btnequal->setText(QApplication::translate("MainWindow", "=", 0));
        btndelete->setText(QApplication::translate("MainWindow", "<-", 0));
        btn2->setText(QApplication::translate("MainWindow", "2", 0));
        btn1->setText(QApplication::translate("MainWindow", "1", 0));
        btn7->setText(QApplication::translate("MainWindow", "7", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
