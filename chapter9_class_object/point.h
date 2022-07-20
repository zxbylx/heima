#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
    void set_x(int x);
    void set_y(int y);

    int get_x();

    int get_y();
private:
    int m_x;
    int m_y;
};