#include "drawer.h"
#include <QApplication>
#include<QToolBox>

int main(int argc, char *argv[])
{
    QFont font("yjs",10);
    QApplication::setFont(font);
    QApplication a(argc, argv);

    Drawer*drawer=new Drawer();
    drawer->resize(360,500);
    drawer->show();

    return a.exec();
}
