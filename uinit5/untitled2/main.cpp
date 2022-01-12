#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);




    Mat srcImg = imread(imgFileName);  //读取一张图片
      Mat grayImg;
      cvtColor(srcImg, grayImg, COLOR_RGB2GRAY);//将图片转成灰度图

      string str;    //定义一个用来存储图片转换的字符的字符串

      //循环遍历(灰度图)图片的每一个像素点
      for(int y = 0; y < grayImg.rows; y++) {
          for (int x = 0; x < grayImg.cols; x++) {
              int grayVal = (int)grayImg.at<uchar>(y, x);
              //获取每个像素点的灰度值，并根据灰度值对应ASCII字符数组中的的字符
              //这里的69是定义的ASCII字符数组的长度，我直接写了
              int index = 69 / 255.0 * grayVal;
              str += codeLib[index];
          }
          str += "\r\n";
      }









    MainWindow w;
    w.show();

    return a.exec();
}
