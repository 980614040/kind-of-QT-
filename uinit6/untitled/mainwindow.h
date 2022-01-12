#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qlabel.h"
#include <QMainWindow>
#include "QMouseEvent"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel *labelStatus;
    QLabel *labelMousePos;
protected :
    void mouseMoveEvent ( QMouseEvent * e );
    void mousePressEvent ( QMouseEvent * e );
    void mouseReleaseEvent ( QMouseEvent * e );
    void mouseDoubleClickEvent( QMouseEvent * e );

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
