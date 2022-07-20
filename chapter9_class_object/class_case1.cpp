#include <iostream>
using namespace std;

// 设计立方体类，求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个立方体是否相等
class Cube
{
public:
    void set_length(int l)
    {
        m_l = l;
    }

    int get_length()
    {
        return m_l;
    }

    void set_width(int w)
    {
        m_w = w;
    }

    int get_width()
    {
        return m_w;
    }

    void set_height(int h)
    {
        m_h = h;
    }

    int get_height()
    {
        return m_h;
    }

    int get_superficial_area()
    {
        return 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
    }

    int get_volume()
    {
        return m_l * m_w * m_h;
    }

    bool is_same_by_class(Cube &c)
    {
        if (m_l==c.get_length() && m_w==c.get_width() && m_h==c.get_height())
            return true;
        else
            return false;
    }

private:
    int m_l;  // 长
    int m_w;  // 宽
    int m_h;  // 高
};

// 利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
    if (c1.get_length() == c2.get_length() && c1.get_width() ==c2.get_width() 
        && c1.get_height() == c2.get_height())
        return true;
    else
        return false;
}

int main()
{
    Cube c1;
    c1.set_length(10);
    c1.set_width(10);
    c1.set_height(10);
    cout << "c1的表面积为： " << c1.get_superficial_area() << endl;
    cout << "c1的体积为： " << c1.get_volume() << endl;

    Cube c2;
    c2.set_length(10);
    c2.set_width(10);
    c2.set_height(10);
    bool ret = isSame(c1, c2);
    if (ret)
        cout << "c1和c2相等" << endl;
    else
        cout << "c1和c2不相等" << endl;
    
    bool ret1 = c1.is_same_by_class(c2);
    if (ret1)
        cout << "c1和c2相等" << endl;
    else
        cout << "c1和c2不相等" << endl;
}