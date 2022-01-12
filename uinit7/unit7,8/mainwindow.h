#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSplashScreen>
#include <QFont>
#include <QImage>
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include <QScreen>
#include <QGuiApplication>

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
    void on_action_New_triggered();

    void on_action_Dock_triggered();

    void on_pushButton_clicked();

    void on_action_S_triggered();

    void on_action_Save_triggered();

    void on_fontComboBox_currentFontChanged(const QFont &f);



    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_editingFinished();

    void on_lineEdit_textChanged(const QString &arg1);


    void on_lineEdit_returnPressed();

    void on_lineEdit_textEdited(const QString &arg1);



    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_grayBtn_clicked();



    void on_filteringBtn_clicked();

    void on_saveBtn_clicked();



    void on_actionChinese_triggered();

    void on_actionEnglish_triggered();

    void on_brightnessBtn_clicked();

    void on_watermarkBtn_clicked();

    void on_sharpeningBtn_clicked();

    void on_edgeBtn_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
