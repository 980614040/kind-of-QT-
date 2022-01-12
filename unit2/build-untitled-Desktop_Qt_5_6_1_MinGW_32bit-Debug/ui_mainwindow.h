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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menu111;
    QMenu *menu222;
    QMenu *menu333;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../2021-2022-1 QT\345\233\276\345\275\242\347\225\214\351\235\242\347\274\226\347\250\213\344\270\212\346\234\272\344\273\273\345\212\2412/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 100, 93, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../2021-2022-1 QT\345\233\276\345\275\242\347\225\214\351\235\242\347\274\226\347\250\213\344\270\212\346\234\272\344\273\273\345\212\2412/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 100, 93, 28));
        pushButton_2->setIcon(icon);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu111 = new QMenu(menuBar);
        menu111->setObjectName(QStringLiteral("menu111"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../2021-2022-1 QT\345\233\276\345\275\242\347\225\214\351\235\242\347\274\226\347\250\213\344\270\212\346\234\272\344\273\273\345\212\2412/images/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu111->setIcon(icon2);
        menu222 = new QMenu(menuBar);
        menu222->setObjectName(QStringLiteral("menu222"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../2021-2022-1 QT\345\233\276\345\275\242\347\225\214\351\235\242\347\274\226\347\250\213\344\270\212\346\234\272\344\273\273\345\212\2412/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu222->setIcon(icon3);
        menu333 = new QMenu(menuBar);
        menu333->setObjectName(QStringLiteral("menu333"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../2021-2022-1 QT\345\233\276\345\275\242\347\225\214\351\235\242\347\274\226\347\250\213\344\270\212\346\234\272\344\273\273\345\212\2412/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu333->setIcon(icon4);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu111->menuAction());
        menuBar->addAction(menu222->menuAction());
        menuBar->addAction(menu333->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\345\255\246\345\217\267", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\200\222\345\242\236", 0));
        menu111->setTitle(QApplication::translate("MainWindow", "111", 0));
        menu222->setTitle(QApplication::translate("MainWindow", "222", 0));
        menu333->setTitle(QApplication::translate("MainWindow", "333", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
