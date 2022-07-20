#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;

// 点和圆的关系的案例

// 判断点和圆的关系
void is_in_circle(Circle &c, Point &p)
{
    // 计算两点之间距离的平方
    int distance = (c.get_center().get_x() - p.get_x()) * (c.get_center().get_x() - p.get_x()) +
                    (c.get_center().get_y() - p.get_y()) * (c.get_center().get_y() - p.get_y());
    // 计算半径的平方
    int r_distance = c.get_radius() * c.get_radius();

    if (distance==r_distance)
        cout << "点在圆上" << endl;
    else if (distance<r_distance)
        cout << "点在圆内" << endl;
    else
        cout << "点在圆外" << endl;
}

int main()
{
    Circle c1;
    Point center;
    center.set_x(10);
    center.set_y(0);
    c1.set_radius(10);
    c1.set_center(center);
    Point p1;
    p1.set_x(10);
    p1.set_y(11);
    is_in_circle(c1, p1);
}