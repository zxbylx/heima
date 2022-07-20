#include <iostream>
#include <string>
using namespace std;

// 静态成员函数
// 所有的对象都共享同一个函数
// 静态成员函数只能访问静态成员变量
class Person
{
public:
    static void func()
    {
        m_a = 150;
        cout << "static void func调用" << endl;
    }
    static int m_a;
private:
    // 静态成员变量也是有访问权限的，私有的在类外不可访问
    static int m_b;
    static void func2()   // 类外访问不到私有成员函数
    {
        cout << "func2调用" << endl;
    }
};

int Person::m_a = 100;
int Person::m_b = 200;
void test()
{
    // 通过对象访问
    Person p;
    p.func();
    // 通过类名进行访问
    Person::func();
}

void test02()
{
    // 静态成员变量不属于某个对象上，所有对象共享同一份数据
    // 因此静态成员变量有2种访问方式
    // 1.通过对象访问
    Person p;
    cout << p.m_a << endl;
    // 2.通过类名进行访问
    cout << Person::m_a << endl;
}

int main()
{
    test();
    test02();
}