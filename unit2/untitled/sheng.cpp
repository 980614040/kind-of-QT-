#include "sheng.h"
#include "ui_sheng.h"

sheng::sheng(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sheng)
{
    ui->setupUi(this);
}

sheng::~sheng()
{
    delete ui;
}
