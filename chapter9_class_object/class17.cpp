#include <iostream>
using namespace std;
// 常函数
class Person
{
public:
    Person()
    {
        cout << "this is person" << endl;
    }
    void show_class_name() const  // 后面加了const，this变为const Person * const this，什么都不可以修改了
    {
        // this的本质是指针常量，指针常量指向是不可修改的， 本质是Person * const this
        // this->m_age = 100;
        m_b = 10;
        cout << "m_b = " << m_b << endl;
    }

    int m_age;
    mutable int m_b;   // 特殊变量，即使在常函数中也可修改
};

void test01()
{
    Person p; 
    p.show_class_name();
}

// 常对象
void test02()
{
    const Person p;
    // p.m_age = 100;  // 常对象里的属性不可以修改，常对象只可调用常函数
    p.m_b = 20;  // mutable属性可以修改
}

int main()
{
    test01();
    test02();
}