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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
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
    QAction *action_New;
    QAction *action_Dock;
    QAction *action_S;
    QAction *action_Save;
    QAction *actionEnglish;
    QAction *actionChinese;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QLabel *picLabel;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_F_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *pushButton;
    QFontComboBox *fontComboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *grayBtn;
    QPushButton *filteringBtn;
    QPushButton *saveBtn;
    QPushButton *watermarkBtn;
    QPushButton *brightnessBtn;
    QPushButton *edgeBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1179, 1097);
        action_New = new QAction(MainWindow);
        action_New->setObjectName(QStringLiteral("action_New"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon);
        action_Dock = new QAction(MainWindow);
        action_Dock->setObjectName(QStringLiteral("action_Dock"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Dock->setIcon(icon1);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QStringLiteral("action_S"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon2);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionChinese = new QAction(MainWindow);
        actionChinese->setObjectName(QStringLiteral("actionChinese"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setMinimumSize(QSize(1000, 1000));
        mdiArea->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setPointSize(3);
        mdiArea->setFont(font);
        mdiArea->setFrameShape(QFrame::Box);
        mdiArea->setFrameShadow(QFrame::Plain);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        mdiArea->setBackground(brush);

        gridLayout->addWidget(mdiArea, 1, 0, 1, 1);

        picLabel = new QLabel(centralWidget);
        picLabel->setObjectName(QStringLiteral("picLabel"));

        gridLayout->addWidget(picLabel, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1179, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_F_2 = new QMenu(menuBar);
        menu_F_2->setObjectName(QStringLiteral("menu_F_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(100, 38));
        dockWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 91, 31));
        fontComboBox = new QFontComboBox(dockWidgetContents);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(10, 50, 71, 21));
        lineEdit = new QLineEdit(dockWidgetContents);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 80, 71, 21));
        lineEdit->setMaxLength(2);
        lineEdit_2 = new QLineEdit(dockWidgetContents);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 120, 71, 21));
        lineEdit_2->setMaxLength(1);
        grayBtn = new QPushButton(dockWidgetContents);
        grayBtn->setObjectName(QStringLiteral("grayBtn"));
        grayBtn->setGeometry(QRect(10, 150, 71, 31));
        filteringBtn = new QPushButton(dockWidgetContents);
        filteringBtn->setObjectName(QStringLiteral("filteringBtn"));
        filteringBtn->setGeometry(QRect(10, 190, 71, 31));
        saveBtn = new QPushButton(dockWidgetContents);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setGeometry(QRect(10, 360, 71, 41));
        watermarkBtn = new QPushButton(dockWidgetContents);
        watermarkBtn->setObjectName(QStringLiteral("watermarkBtn"));
        watermarkBtn->setGeometry(QRect(10, 320, 71, 31));
        brightnessBtn = new QPushButton(dockWidgetContents);
        brightnessBtn->setObjectName(QStringLiteral("brightnessBtn"));
        brightnessBtn->setGeometry(QRect(10, 230, 71, 31));
        edgeBtn = new QPushButton(dockWidgetContents);
        edgeBtn->setObjectName(QStringLiteral("edgeBtn"));
        edgeBtn->setGeometry(QRect(10, 270, 71, 31));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_F_2->menuAction());
        menu_F->addAction(action_New);
        menu_F->addAction(action_Dock);
        menu_F->addAction(action_S);
        menu_F->addAction(action_Save);
        menu_F_2->addAction(actionEnglish);
        menu_F_2->addAction(actionChinese);
        mainToolBar->addAction(action_New);
        mainToolBar->addAction(action_S);
        mainToolBar->addAction(action_Save);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "209400234-\346\235\250\351\222\247\345\215\207", 0));
        action_New->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", 0));
        action_New->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_Dock->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272Dock(&D)", 0));
        action_Dock->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        action_S->setText(QApplication::translate("MainWindow", "\345\233\276\347\211\207\351\200\211\346\213\251(&C)", 0));
#ifndef QT_NO_TOOLTIP
        action_S->setToolTip(QApplication::translate("MainWindow", "\345\233\276\347\211\207\351\200\211\346\213\251(C)", 0));
#endif // QT_NO_TOOLTIP
        action_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        action_Save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
#ifndef QT_NO_TOOLTIP
        action_Save->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230(S)", 0));
#endif // QT_NO_TOOLTIP
        action_Save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", 0));
        actionChinese->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", 0));
        picLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
        menu_F_2->setTitle(QApplication::translate("MainWindow", "\347\277\273\350\257\221(&F)", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267\347\256\261", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246\347\224\273", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", 0));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\255\227\347\254\246", 0));
        grayBtn->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226(&R)", 0));
        filteringBtn->setText(QApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242(&T)", 0));
        saveBtn->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
        watermarkBtn->setText(QApplication::translate("MainWindow", "\346\260\264\345\215\260(&I)", 0));
        brightnessBtn->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246(&Y)", 0));
        edgeBtn->setText(QApplication::translate("MainWindow", "\350\276\271\347\274\230\346\243\200\346\265\213(&U)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
