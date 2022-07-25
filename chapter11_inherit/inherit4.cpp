#include <iostream>
using namespace std;

// 继承中同名成员处理方式
class Base
{
public:
    int m_a;
    Base()
    {
        m_a = 100;
    }
    void func()
    {
        cout << "base的func" << endl;
    }
    // 如果子类中出现同名成员函数，子类的同名成员函数会隐藏掉父类中所有的同名成员函数，此时想访问父类方法加作用域
    void func(int a)
    {
        cout << "base的传参func" << endl;
    }
};

class Son: public Base
{
public:
    int m_a;
    Son()
    {
        m_a = 200;
    }
    void func()
    {
        cout << "Son的func" << endl;
    }
};

void test01(){
    Son son;
    cout << "m_a: " << son.m_a << endl;
    // 如果通过子类对象访问到父类中的同名成员，需要加父类作用域
    cout << "base的m_a: " << son.Base::m_a << endl;
}

void test02()
{
    Son s;
    s.Base::func(100);
    //调用父类的同名函数
    s.Base::func();
}

int main()
{
    test01();
    test02();
}