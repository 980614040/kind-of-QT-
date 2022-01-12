#include "logindialog.h"
#include "ui_logindialog.h"

#include <QMessageBox>
#include<QMenuBar>
#include<QMenu>
#include<QStatusBar>
#include<QDebug>
#include<QIcon>
#include<QAction>
#include<QPushButton>
#include<QCursor>
#include<QKeySequence>

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::on_loginBtn_clicked()
{
    if(ui->userLineEdit->text().trimmed()==tr("yjs")
            &&ui->pwdLineEdit->text()==tr("209400234")){
        accept();
    }
    else{
        QMessageBox::warning(this,tr("错误"),tr("用户名或者密码错误！"),QMessageBox::Yes);
        ui->userLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->userLineEdit->setFocus();
    }
}
