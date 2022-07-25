#include <iostream>
using namespace std;

// 左移运算符重载
class Person
{
    // 友元访问私有属性
    friend ostream & operator<<(ostream &cout, Person &p);
    friend void test01();
private:
    int m_a;
    int m_b;
    // 不会利用成员函数重载左移运算符，因为无法实现cout在左侧
    // void operator<<(cout){}
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout, Person &p)  // 本质operator<<(cout, p)  简化 cout << p
{
    cout << "m_a = " << p.m_a << endl;
    cout << "m_b = " << p.m_b << endl;
    return cout;
}

void test01()
{
    Person p;
    p.m_a = 10;
    p.m_b = 20;
    // 链式编程
    cout << p << "hello" << endl;
}

int main()
{
    test01();
}