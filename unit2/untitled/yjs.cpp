#include "yjs.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include<QMouseEvent>
yjs::yjs(double a, double b)
{
    x=a;
    y=b;
}
void yjs::Show(){
    { cout << "(" << x << "," << y << ")" << endl; }
}
