#include "mainwindow.h"
#include <QApplication>
#include"standarddialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StandardDialog s;
    s.show();
    return a.exec();
}
