#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"point.cpp"
Point ab(0,0);
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

    ab.x++;ab.y++;
    ab.Show();
}
