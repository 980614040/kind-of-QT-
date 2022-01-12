#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void RecNum(int num);
    int GetPostExp(QString exp_str,QString pos_exp[]);
    double CalFromStr(QString exp_str,bool &ok);
    void RecOpe(QChar ch);
    QString pos_exp[];
    QChar opes_temp[];
    QString exp_str[];
    GetPriOfOpe(QString [0],int 0);
    int pri_i;
    emit SendNum(int 0);
    emit SendOpe(QString "");
    int num;
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn0_clicked();
    void on_btnequal_clicked();







private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
