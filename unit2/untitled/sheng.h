#ifndef SHENG_H
#define SHENG_H

#include <QDialog>

namespace Ui {
class sheng;
}

class sheng : public QDialog
{
    Q_OBJECT

public:
    explicit sheng(QWidget *parent = 0);
    ~sheng();

private:
    Ui::sheng *ui;
};

#endif // SHENG_H
