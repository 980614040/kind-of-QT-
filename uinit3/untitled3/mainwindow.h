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
    void on_QuestionBtn_clicked();

    void on_InformationBtn_clicked();

    void on_WarningBtn_clicked();

    void on_CriticalBtn_clicked();

    void on_AboutBtn_clicked();

    void on_AboutQTBtn_clicked();

    void on_CustomBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
