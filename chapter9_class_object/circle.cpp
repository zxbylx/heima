#include "circle.h"

void Circle::set_radius(int r)
{
    m_r = r;
}
void Circle::set_center(Point center)
{
    m_center = center;
}

int Circle::get_radius()
{
    return m_r;
}

Point Circle::get_center()
{
    return m_center;
}