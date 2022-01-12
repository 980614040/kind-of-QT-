#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    translator.load(":/res/resources/tr_zh.qm");
    a.installTranslator(&translator);

    QPixmap pix(":/image/images/1.gif");
    QSplashScreen splash(pix);
    splash.show();
    a.processEvents();


    MainWindow w;
    w.show();


    splash.finish(&w);

    return a.exec();
}
