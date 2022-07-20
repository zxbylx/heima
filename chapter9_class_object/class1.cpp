#include <iostream>
using namespace std;
const double PI = 3.14;
// 设计一个圆类，求圆的周长
class Circle
{
    // 访问权限
    public:
    // 属性
    int m_r;  // 半径
    // 行为
    // 获取圆的周长
    double circumference()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    // 通过圆类，创建一个具体的圆(对象)
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长为：" << c1.circumference() << endl;
}
