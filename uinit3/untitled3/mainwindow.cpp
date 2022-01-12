#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QMessageBox"

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

void MainWindow::on_QuestionBtn_clicked()
{
    switch(QMessageBox::question(this,tr("问题"),tr("已到达文档结尾,是否从头搜索?"), QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Ok))
          {
          case QMessageBox::Ok:
            ui->label->setText("Question button / OK");break;
          case QMessageBox::Cancel:
            ui->label->setText("Question button / Cancel");break;
          default: break;
          }

}

void MainWindow::on_InformationBtn_clicked()
{
    QMessageBox::information(this,"Information",tr("这是信息显示内容"));
}

void MainWindow::on_WarningBtn_clicked()
{
    switch(QMessageBox::warning(this,tr("警告"),tr("是否保存对文档的修改?"), QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel, QMessageBox::Save))
       {
       case QMessageBox::Save:
         ui->label->setText("Warning button / Save");break;
       case QMessageBox::Discard:
         ui->label->setText("Warning button / Discard");break;
       case QMessageBox::Cancel:
         ui->label->setText("Warning button / Cancel");break;
       default: break;
       }

}

void MainWindow::on_CriticalBtn_clicked()
{
    QMessageBox::critical(this,"Information", tr("致命错误"));
        ui->label->setText("Critical");

}

void MainWindow::on_AboutBtn_clicked()
{
    QMessageBox::about(this, "About", tr("QMessageBox实例"));
       ui->label->setText("About QMessageBox");

}

void MainWindow::on_AboutQTBtn_clicked()
{
    QMessageBox::aboutQt(this,"About Qt");
     ui->label->setText("About Qt QMessageBox");

}

void MainWindow::on_CustomBtn_clicked()
{
    QMessageBox customMsgBox;
     customMsgBox.setWindowTitle("Custom message box");
     QPushButton *lockButton = customMsgBox.addButton(tr("Lock"),QMessageBox::ActionRole);
     QPushButton *unlockButton = customMsgBox.addButton(tr("Unlock"),QMessageBox::ActionRole);
     QPushButton *cancelButton = customMsgBox.addButton(QMessageBox::Cancel);
     customMsgBox.setIconPixmap(QPixmap(":/qqimg/110512151485383.png"));
     customMsgBox.setText(tr("This is a custom message box"));
     customMsgBox.exec();
     if(customMsgBox.clickedButton() == lockButton)
         ui->label->setText(" Custom MessageBox / Lock ");
     if(customMsgBox.clickedButton() == unlockButton)
         ui->label->setText(" Custom MessageBox / Unlock ");
     if(customMsgBox.clickedButton() == cancelButton)
         ui->label->setText(" Custom MessageBox / Cancel ");

}
