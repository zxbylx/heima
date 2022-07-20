#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
    void set_radius(int r);
    void set_center(Point center);

    int get_radius();
    
    Point get_center();

private:
    int m_r;  // 半径
    // 在类中可以让其他类作为成员
    Point m_center; // 圆心
};