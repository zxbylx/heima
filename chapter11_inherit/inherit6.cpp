#include <iostream>
using namespace std;

// 多继承语法
class Base1
{
public:
    Base1()
    {
        m_a = 100;
    }
    int m_a;
};

class Base2
{
public:
    Base2()
    {
        m_b = 100;
        m_a = 300;
    }
    int m_b;
    int m_a;
};

class Son: public Base1, public Base2
{
public:
    int m_c;
    int m_d;
    Son()
    {
        m_c = 300;
        m_d = 400;
    }
};

void test01()
{
    Son s;
    cout << "sizeof Son = " << sizeof(s) << endl;
    // 当父类中出现同名成员，需要加作用域区分
    cout << "m_a: " << s.Base1::m_a << endl; 
    cout << "m_a: " << s.Base2::m_a << endl; 
}

int main()
{
    test01();
}