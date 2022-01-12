#include "geometrydlg.h"
#include "ui_geometrydlg.h"

GeometryDlg::GeometryDlg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeometryDlg)
{
    ui->setupUi(this);
    setWindowTitle("Geometry");
     updateLabel();

}
void GeometryDlg::updateLabel()
{
   QString temp;
   QString str_x;
   ui->xlabel->setText(str_x.setNum(x()));

   QString str_y;
   ui->ylabel->setText(str_y.setNum(y()));

   QString frameGeo;
    frameGeo =temp.setNum(frameGeometry().x()) + "," ;
    frameGeo +=temp.setNum(frameGeometry().y()) + ",";
    frameGeo +=temp.setNum(frameGeometry().width()) + "," ;
    frameGeo +=temp.setNum(frameGeometry().height());
    ui->frameGeolabel->setText(frameGeo);

    QString position;
    position = temp.setNum(pos().x()) + ",";
    position +=  temp.setNum(pos().y());
    ui->poslabel->setText(position);

    QString geo;
    geo =temp.setNum(geometry().x()) + "," ;
    geo +=temp.setNum(geometry().y()) + ",";
    geo +=temp.setNum(geometry().width()) + "," ;
    geo +=temp.setNum(geometry().height());
    ui->geolabel->setText(geo);

    QString w;
    ui->widthlabel->setText(w.setNum(width()));
    QString h;
    ui->heightlabel->setText(h.setNum(height()));

    QString r;
    r =temp.setNum(rect().x()) + "," ;
    r +=temp.setNum(rect().y()) + ",";
    r +=temp.setNum(rect().width()) + "," ;
    r +=temp.setNum(rect().height());
    ui->rectlabel->setText(r);

    QString s;
    s =  temp.setNum(size().width()) + "," ;
    s +=temp.setNum(size().height()) ;
    ui->sizelabel->setText(s);
}

GeometryDlg::~GeometryDlg()
{
    delete ui;
}
void GeometryDlg::moveEvent(QMoveEvent*)
{
  updateLabel();
}

void GeometryDlg::resizeEvent(QResizeEvent *)
{
  updateLabel();
}
