#ifndef CY_H
#define CY_H
#include <iostream>
#include <string>
#include <QTextEdit>
#include <QLabel>
#include <QString>
#include <QImage>


using namespace std;

class CY
{
private:
    QImage printBrightness(QImage image);
    QImage printGray(QImage image);
    QImage printFiltering(QImage image);
    QImage drawWatermark(QImage *origin);
    QImage sharpening(QImage * origin);
    QImage LeadToEdge(QImage* image,double scale,int type);
    int** toRGBArray(QImage image);
    printText(int** RGBArray,int W,int H);
public:

    CY();
    string str;
    string ps;

    string output();

    void printstr(QString s);
    void transformation(QLabel *label);
    void setGray(QLabel *label);
    void setFiltering(QLabel *label);
    void setBrightness(QLabel *label);
    void setWatermark(QLabel *label);
    void setsharpening(QLabel *label);
    void setEdge(QLabel *label);







};

#endif // CY_H
