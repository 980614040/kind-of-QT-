#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "yangjunsheng.h"
#include<QMenuBar>
#include<QMenu>
#include<QStatusBar>
#include<QDebug>

#include<QAction>
#include<QPushButton>
#include<QCursor>
#include<QKeySequence>
#include"sheng.h"


yjs ab(0,0);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sheng *s=new sheng;
    s->setWindowFlags(Qt::FramelessWindowHint);
    s->exec();


}

void MainWindow::on_pushButton_2_clicked()
{

    ab.x++;
    ab.y++;
    ab.Show();
}
