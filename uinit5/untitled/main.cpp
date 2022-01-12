#include "mainwindow.h"
#include <QApplication>
#include "qsplashscreen.h"
#include "qapplication.h"
#include <QTextEdit>
#include"qdatetime.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pixmap("C:/Users/98061/Desktop/f9e8ead191246e567f522126a533923.jpg");
       QSplashScreen splash(pixmap);
       splash.show();

       //启动第一阶段
       splash.showMessage(QStringLiteral("正在加载资源文件，请稍后……"), Qt::AlignHCenter|Qt::AlignBottom, Qt::red);
       QDateTime n=QDateTime::currentDateTime();
       QDateTime now;
       do{
           now=QDateTime::currentDateTime();
       } while (n.secsTo(now)<=3);//3为需要延时的秒数

       //启动第二阶段
       splash.showMessage(QStringLiteral("正在登录中，请稍后……"), Qt::AlignHCenter|Qt::AlignBottom, Qt::red);
       n=QDateTime::currentDateTime();
       now;
       do{
           now=QDateTime::currentDateTime();
       } while (n.secsTo(now)<=3);//3为需要延时的秒数



        MainWindow w;
        w.show();

        splash.finish(&w);
        return a.exec();

}
