#ifndef YJS_H
#define YJS_H

#include<iostream>
#include<QPushButton>
using namespace std;

class yjs
{
public:
    yjs();
    double x;			// x坐标
    double y;			// y坐标
    yjs(double,double);
    void Show();			// 显示坐标
};

#endif
