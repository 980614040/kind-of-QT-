#ifndef POINT_H
#define POINT_H
#include "iostream"

class Point
{
public:
// 数据成员
    double x;			// x坐标
    double y;			// y坐标


// 公有函数
    Point(double a , double b);// 构造函数

    void Set(double a, double b);	// 设置坐标

    void Show();			// 显示坐标

    //可用qDebug()代替cout
};
#endif // POINT_H
