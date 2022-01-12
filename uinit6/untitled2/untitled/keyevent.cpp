#include "keyevent.h"
#include "ui_keyevent.h"
#include "qpainter.h"
#include "keyevent.h"
#include "QKeyEvent"
KeyEvent::KeyEvent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyEvent)
{
    ui->setupUi(this);
    setAutoFillBackground(true);

      QPalette palette = this->palette();
      palette.setColor(QPalette::Window,Qt::white);
      setPalette(palette);

      setMinimumSize(1024,768);
      setMaximumSize(1024,768);

      width=size().width();
      height=size().height();

      pix = new QPixmap(width,height);
      pix->fill(Qt::white);

      step=32;
      image.load("C:/Users/98061/Desktop/QT/unit2/2021-2022-1 QT图形界面编程上机任务2/images/fileopen.png");//图片自己定义

      startX=0;
      startY=0;

      drawPix();

}
//drawPix()函数实现在QPixmap对象上绘制图像：
void KeyEvent::drawPix()
{
    pix->fill(Qt::white);//重刷pix对象为白色底色
QPainter *painter = new QPainter(pix);//创建QPainter对象，指定pix为绘图设备

    QPen pen(Qt::DotLine);//设置画笔类型，用于绘制网格
    painter->setPen(pen);
    for(int i=step;i<width;)
    {
        painter->drawLine(QPoint(i,0),QPoint(i,height));
        i=i+step;
    }
    for(int j=step;j<height;)
    {
        painter->drawLine(QPoint(0,j),QPoint(width,j));
        j=j+step;
}

//在pix对象中绘制可移动的小图标
    painter->drawImage(QPoint(startX,startY),image);
    delete painter;
}

//keyPressEvent()函数处理键盘的按下事件：
void KeyEvent::keyPressEvent(QKeyEvent *event)
{
    if(event->modifiers() == Qt::ControlModifier)
    {
        if(event->key() == Qt::Key_Left)
        {
            startX=(startX-1<0)?startX:startX-1;

        }
        if(event->key() == Qt::Key_Right)
        {
            startX=(startX+1+image.width ()>width)?startX:startX+1;

        }
        if(event->key() == Qt::Key_Up)
        {
            startY=(startY-1<0)?startY:startY-1;

        }
        if(event->key() == Qt::Key_Down)
        {
            startY=(startY+1+image.height()>height)?startY:startY+1;

        }
    }
    else
    {
        startX=startX-startX%step;
        startY=startY-startY%step;

        if(event->key() == Qt::Key_Left)
        {
            startX=(startX-step<0)?startX:startX-step;
        }
        if(event->key() == Qt::Key_Right)
        {
            startX=(startX+step+image.width()>width)?startX:startX+step;
        }
        if(event->key() == Qt::Key_Up)
        {
            startY=(startY-step<0)?startY:startY-step;
        }
        if(event->key() == Qt::Key_Down)
        {
            startY=(startY+step+image.height()>height)?startY:startY+step;
        }
        if(event->key() == Qt::Key_Home)
        {
            startX=0;
            startY=0;
        }
        if(event->key() == Qt::Key_End)
        {
            startX=width-image.width();
            startY=height-image.height();
        }
    }
    drawPix();//重新在pix中绘制图像
    update();//触发界面重画
}

//paintEvent()为界面的重画函数，将pix绘制在界面上。具体代码如下：
void KeyEvent::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(QPoint(0,0),*pix);
}


KeyEvent::~KeyEvent()
{
    delete ui;
}
