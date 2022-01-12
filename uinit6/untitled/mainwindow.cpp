#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qlabel.h"
#include "QMouseEvent"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labelStatus = new QLabel();
        labelStatus->setText(tr("Mouse Position:"));
        labelStatus -> setFixedWidth (200);

    //用于显示鼠标按下、释放时鼠标的位置
        labelMousePos = new QLabel();
        labelMousePos->setText(tr(""));
        labelMousePos->setFixedWidth (100);

    //在QMainWindow的状态栏中增加控件
        statusBar()->addPermanentWidget(labelStatus);
        statusBar()->addPermanentWidget(labelMousePos);

        this->setMouseTracking (true);//这是激活整个窗体的鼠标追踪

}
void MainWindow::mouseMoveEvent ( QMouseEvent * e )
{
   labelMousePos ->setText("("+QString::number(e->x())+","+QString::number(e->y())+")");
}
//鼠标按下事件响应函数
void MainWindow::mousePressEvent ( QMouseEvent * e )
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
    if(e->button()==Qt::LeftButton)
    {
        statusBar()->showMessage (tr("Mouse Left Button Pressed:")+str);
    }
    else if(e->button()==Qt::RightButton)
    {
        statusBar()->showMessage (tr("Mouse Right Button Pressed:")+str);
    }
    else if(e->button()==Qt::MidButton)
    {
        statusBar()->showMessage (tr("Mouse Middle Button Pressed:")+str);
    }
}

//鼠标双击事件响应函数
void MainWindow::mouseDoubleClickEvent( QMouseEvent * e )
{
    QString str="("+QString::number(e->x(      ))+","+QString::number(e->y())+")";
    if(e->button()==Qt::LeftButton)
    {
        statusBar()->showMessage (tr("Mouse Left Button Double Clicked:")+str);
    }
    else if(e->button()==Qt::RightButton)
    {
        statusBar()->showMessage (tr("Mouse Right Button Double Clicked:")+str);
    }
    else if(e->button()==Qt::MidButton)
    {
        statusBar()->showMessage (tr("Mouse Middle Button Double Clicked:")+str);
    }
}

//鼠标松开事件响应函数
void MainWindow::mouseReleaseEvent ( QMouseEvent * e )
{
    QString str="("+QString::number(e->x())+","+QString::number(e->y())+")";
    statusBar()->showMessage (tr("Mouser Released:")+str,1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}



