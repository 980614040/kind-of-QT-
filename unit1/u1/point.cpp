#ifndef _TEST_H_
#define _TEST_H_
#include"point.h"
#include "iostream"
#endif


Point::Point(double a = 0, double b = 0)
{
        x=a;y=b;
}
void Point::Set(double a,double b)
{
    x=a;y=b;
}
void Point::Show()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

