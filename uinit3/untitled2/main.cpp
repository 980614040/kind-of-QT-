#include "mainwindow.h"
#include <QApplication>
#include"geometrydlg.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    GeometryDlg g;
    g.show();
    return a.exec();
}
