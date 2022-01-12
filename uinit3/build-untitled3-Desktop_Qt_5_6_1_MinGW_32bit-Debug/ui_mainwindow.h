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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *QuestionBtn;
    QPushButton *InformationBtn;
    QPushButton *WarningBtn;
    QPushButton *CriticalBtn;
    QPushButton *AboutBtn;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AboutQTBtn;
    QPushButton *CustomBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 151, 21));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 50, 77, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        QuestionBtn = new QPushButton(widget);
        QuestionBtn->setObjectName(QStringLiteral("QuestionBtn"));

        verticalLayout->addWidget(QuestionBtn);

        InformationBtn = new QPushButton(widget);
        InformationBtn->setObjectName(QStringLiteral("InformationBtn"));

        verticalLayout->addWidget(InformationBtn);

        WarningBtn = new QPushButton(widget);
        WarningBtn->setObjectName(QStringLiteral("WarningBtn"));

        verticalLayout->addWidget(WarningBtn);

        CriticalBtn = new QPushButton(widget);
        CriticalBtn->setObjectName(QStringLiteral("CriticalBtn"));

        verticalLayout->addWidget(CriticalBtn);

        AboutBtn = new QPushButton(widget);
        AboutBtn->setObjectName(QStringLiteral("AboutBtn"));

        verticalLayout->addWidget(AboutBtn);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(180, 50, 77, 54));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        AboutQTBtn = new QPushButton(widget1);
        AboutQTBtn->setObjectName(QStringLiteral("AboutQTBtn"));

        verticalLayout_2->addWidget(AboutQTBtn);

        CustomBtn = new QPushButton(widget1);
        CustomBtn->setObjectName(QStringLiteral("CustomBtn"));

        verticalLayout_2->addWidget(CustomBtn);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "MessageBox", 0));
        QuestionBtn->setText(QApplication::translate("MainWindow", "Question", 0));
        InformationBtn->setText(QApplication::translate("MainWindow", "Information", 0));
        WarningBtn->setText(QApplication::translate("MainWindow", "Warning", 0));
        CriticalBtn->setText(QApplication::translate("MainWindow", "Critical", 0));
        AboutBtn->setText(QApplication::translate("MainWindow", "About", 0));
        AboutQTBtn->setText(QApplication::translate("MainWindow", "AboutQT", 0));
        CustomBtn->setText(QApplication::translate("MainWindow", "Custom", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
