#include <iostream>
using namespace std;

// 继承中同名静态成员处理方式
class Base
{
public:
    static int m_a;
    static void func()
    {
        cout << "base的func" << endl;
    }
};
// 静态成员类内声明类外初始化
int Base::m_a = 100;

class Son: public Base
{
public:
    static int m_a;
    static void func()
    {
        cout << "Son的func" << endl;
    }
};
int Son::m_a = 200;
void test01(){
    // 静态成员通过对象访问
    Son son;
    cout << "m_a: " << son.m_a << endl;
    // 如果通过子类对象访问到父类中的同名成员，需要加父类作用域
    cout << "base的m_a: " << son.Base::m_a << endl;

    // 静态成员通过类名访问
    cout << "son m_a:" << Son::m_a << endl;
    // 第一个::代表通过雷鸣方式访问 第二个::代表访问父类作用域下的
    cout << "Base m_a:" << Son::Base::m_a << endl;
}

void test02()
{
    // 通过对象访问静态成员函数
    Son s;
    s.func();
    //调用父类的同名函数
    s.Base::func();

    // 通过类名方式访问
    Son::func();
    Son::Base::func();    
}

int main()
{
    test01();
    test02();
}