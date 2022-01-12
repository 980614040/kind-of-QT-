#ifndef KEYEVENT_H
#define KEYEVENT_H
#include "keyevent.h"
#include <QWidget>
#include "qpainter.h"
namespace Ui {
class KeyEvent;
}

class KeyEvent : public QWidget
{
    Q_OBJECT

public:
    explicit KeyEvent(QWidget *parent = 0);
    ~KeyEvent();
    void drawPix();
       void keyPressEvent(QKeyEvent *);
       void paintEvent(QPaintEvent *);

private:
       QPixmap *pix;
          QImage image;
          int startX;
          int startY;
          int width;
          int height;
          int step;

    Ui::KeyEvent *ui;
};

#endif // KEYEVENT_H
