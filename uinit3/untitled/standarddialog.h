#ifndef STANDARDDIALOG_H
#define STANDARDDIALOG_H

#include <QDialog>

namespace Ui {
class StandardDialog;
}

class StandardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StandardDialog(QWidget *parent = 0);
    ~StandardDialog();



private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::StandardDialog *ui;
};

#endif // STANDARDDIALOG_H
