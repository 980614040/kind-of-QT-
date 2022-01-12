#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_6->setPixmap(QPixmap("C:/Users/98061/Desktop/QT/unit4/untitled/user.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    QPixmap pixmap(ic.NextImage());
    ui->label_6->setPixmap(pixmap);
    ui->label_6->show();




}
