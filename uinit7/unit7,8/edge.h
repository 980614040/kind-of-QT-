#ifndef EDGE_H
#define EDGE_H
#include <iostream>
#include <string>
#include <QTextEdit>
#include <QLabel>
#include <QString>
#include <QImage>

using namespace std;


class edge
{
private:
        QImage gray(QImage image);
        void generic_guess(double kernel[10][10],int size,double thelt);
        QImage calculate(QImage *img_gray,QImage img);
        QImage nms(QImage *img_guass);
        QImage guess(QImage image);

public:
    edge();
    void setedge(QLabel *label);

};

#endif // EDGE_H
