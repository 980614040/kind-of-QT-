#include "cy.h"
#include <QImage>
#include <QColor>
#include <QToolButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QLabel>
#include <QFileDialog>
#include <QDir>
#include <QLabel>
#include <QTextEdit>
#include <QString>
#include <iostream>
#include <string>
#include <QByteArray>
#include <QRgb>
#include <QPainter>



using namespace std;
string str;
string ps;


CY::CY()
{
    ps="*";
}
void CY::setEdge(QLabel *label)
{
    QImage image = label->pixmap()->toImage();
    QImage img=printGray(image);
    label->setPixmap(QPixmap::fromImage(LeadToEdge(&img,1,1)));

}

QImage CY::LeadToEdge(QImage* image,double scale,int type)
{

        QImage* newImage = new QImage(image->width(),image->height(),QImage::Format_ARGB32);
        QColor color0;
        QColor color1;
        QColor color2;
        QColor color3;
        QColor color4;
        QColor color5;
        QColor color6;
        QColor color7;
        QColor color8;
        int  r = 0;
        int g = 0;
        int b = 0;
        int rgb = 0;
        int r1 = 0;
        int g1 = 0;
        int b1 = 0;
        int rgb1 = 0;
        int a = 0;
        for( int y = 1; y < image->height() - 1; y++)
        {
            for(int x = 1; x < image->width() - 1; x++)
            {
                color0 =   QColor ( image->pixel(x,y));

                color1=   QColor ( image->pixel(x-1,y-1));
                color2 =   QColor ( image->pixel(x,y-1));
                color3 =   QColor ( image->pixel(x+1,y));

                color4 =   QColor ( image->pixel(x-1,y));
                color5 =   QColor ( image->pixel(x+1,y));

                color6 =   QColor ( image->pixel(x-1,y+1));
                color7=   QColor ( image->pixel(x,y+1));
                color8 =   QColor ( image->pixel(x+1,y+1));
                r = abs(color1.red() + color2.red() * 2 + color3.red() - color6.red() - color7.red() * 2 - color8.red());
                g = abs(color1.green() + color2.green() * 2 + color3.green() - color6.green() - color7.green() * 2 - color8.green());
                b = abs(color1.blue() + color2.blue() * 2 + color3.blue() - color6.blue() - color7.blue() * 2 - color8.blue());
                rgb = r + g + b;

                r1 = abs(color1.red() + color4.red() * 2 + color6.red() - color3.red() - color5.red() * 2 - color8.red());
                g1= abs(color1.green() + color4.green() * 2 + color6.green() - color3.green() - color5.green() * 2 - color8.green());
                b1 = abs(color1.blue() + color4.blue() * 2 + color6.blue() - color3.blue() - color5.blue() * 2 - color8.blue());
                rgb1 = r1 + g1 + b1;
               if(type == 0)
               {
                   if (rgb > rgb1)
                       a = rgb;
                   else
                       a = rgb1;
               }
               else if(type == 1)
               {
                a = (rgb + rgb1)/2;
               }
                a = a * scale;
                a = a>255?255:a;

                newImage->setPixel(x,y,qRgb(a,a,a));
            }
        }
        return *newImage;
    }




void CY::setGray(QLabel *label)
{
    QImage image = label->pixmap()->toImage();

    label->setPixmap(QPixmap::fromImage(printGray(image)));

}

QImage CY::printGray(QImage image)
{
    QColor bfColor;


    for(int y = 0;y < image.height();y++)
    {
        for(int x = 0;x < image.width();x++)
        {
            bfColor=QColor(image.pixel(x,y));
            int gray=(bfColor.red()+bfColor.green()+bfColor.blue())/3;
            image.setPixel(x, y,qRgb(gray, gray, gray));


        }
    }
    return image;
}

void CY::setBrightness(QLabel *label)
{
    QImage image = label->pixmap()->toImage();

    label->setPixmap(QPixmap::fromImage(printBrightness(image)));

}

QImage CY::printBrightness(QImage image)
{
    QColor bfColor;
    int R=0;
    int G=0;
    int B=0;

    for(int y = 0;y < image.height();y++)
    {
        for(int x = 0;x < image.width();x++)
        {
            bfColor=QColor(image.pixel(x,y));
            R=bfColor.red()+20;
            G=bfColor.green()+20;
            B=bfColor.blue()+20;
            if(R>255){R=255;}
            if(G>255){G=255;}
            if(B>255){B=255;}
            image.setPixel(x, y,qRgb(R,G,B));


        }
    }
    return image;
}

void CY::setWatermark(QLabel *label)
{
    QImage image = label->pixmap()->toImage();

    label->setPixmap(QPixmap::fromImage(drawWatermark(&image)));

}

QImage CY::drawWatermark(QImage *origin){
    QImage  *newImage = new QImage(*origin);
    QPainter painter;

    painter.begin(newImage);

    painter.drawImage(0,0, QImage(":/image/images/111.png"));

    painter.end();

    return *newImage;
}

void CY::setsharpening(QLabel *label)
{
    QImage image = label->pixmap()->toImage();

    label->setPixmap(QPixmap::fromImage(sharpening(&image)));

}

QImage CY::sharpening(QImage * origin){
    QImage * newImage = new QImage(* origin);

    int kernel [3][3]= {{0,-1,0},
                        {-1,5,-1},
                        {0,-1,0}};
    int kernelSize = 3;
    int sumKernel = 1;
    int r,g,b;
    QColor color;

    for(int x=kernelSize/2; x<newImage->width()-(kernelSize/2); x++){
        for(int y=kernelSize/2; y<newImage->height()-(kernelSize/2); y++){

            r = 0;
            g = 0;
            b = 0;

            for(int i = -kernelSize/2; i<= kernelSize/2; i++){
                for(int j = -kernelSize/2; j<= kernelSize/2; j++){
                    color = QColor(origin->pixel(x+i, y+j));
                    r += color.red()*kernel[kernelSize/2+i][kernelSize/2+j];
                    g += color.green()*kernel[kernelSize/2+i][kernelSize/2+j];
                    b += color.blue()*kernel[kernelSize/2+i][kernelSize/2+j];
                }
            }

            r = qBound(0, r/sumKernel, 255);
            g = qBound(0, g/sumKernel, 255);
            b = qBound(0, b/sumKernel, 255);

            newImage->setPixel(x,y, qRgb(r,g,b));

        }
    }
    return *newImage;
}

void CY::setFiltering(QLabel *label)
{
    QImage image = label->pixmap()->toImage();

    label->setPixmap(QPixmap::fromImage(printFiltering(image)));

}

QImage CY::printFiltering(QImage image)
{
    QColor bfColor;
    int Rs;
    int Gs;
    int Bs;
    int count;


    for(int y = 1;y < image.height()-1;y++)
    {
        for(int x = 1;x < image.width()-1;x++)
        {
            Rs=0;
            Gs=0;
            Bs=0;
            count=0;

            for(int i=x-1;i<x+1;i++){
                for(int j=y-1;j<y+1;j++){

                bfColor=QColor(image.pixel(i,j));
                Rs=Rs+bfColor.red();
                Gs=Gs+bfColor.green();
                Bs=Bs+bfColor.blue();
                count=count+1;
                }
            }
            Rs=Rs/count;
            Gs=Gs/count;
            Bs=Bs/count;
            image.setPixel(x, y,qRgb(Rs,Gs,Bs));
        }
    }
    return image;
}




void CY::transformation(QLabel *label)
{
    str="";




    QImage image = label->pixmap()->toImage();

    int **RGBArray = toRGBArray(image);
    if(RGBArray == 0)
        return;

    printText(RGBArray,image.width(),image.height());



    for(int i = 0;i < image.width();i++){delete[] RGBArray[i];}
    delete[] RGBArray;
}


string CY::output(){

   return str;

}

void CY::printstr(QString s){
    QByteArray ba=s.toLatin1();
    ps=ba.data();



}







int** CY::toRGBArray(QImage image)
{
    if(image.isNull())
        return 0;

    int W = image.width();
    int H = image.height();

    int **RGBArray = new int*[W];
    for(int i = 0;i < W;i++)
    {
        RGBArray[i] = new int[H];
    }

    for(int x = 0;x < W;x++)
        for(int y = 0;y < H;y++)
        {
            QColor rgb = image.pixel(x,y);
            RGBArray[x][y] = (rgb.red() + rgb.green() + rgb.blue())/3;
        }

    return RGBArray;
}

CY::printText(int** RGBArray, int W, int H)
{



    for(int y = 0;y < H;y++)
    {
        for(int x = 0;x < W;x++)
        {
            if(RGBArray[x][y]>128){str +=ps;}
            else if(RGBArray[x][y]<=128){str +=" ";}
        }
        str += "\r\n";
    }


}


