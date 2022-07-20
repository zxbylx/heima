#include <iostream>
#include <string>
using namespace std;

// 类对象作为类成员
class Phone
{
public:
    string p_name;
    Phone(string name)
    {
        p_name = name;
        cout << "Phone的构造函数调用" << endl;
    }
    ~Phone()
    {
        cout << "Phone的析构函数调用" << endl;
    }
};
class Person
{
public:
    // Phone m_phone = p_name; 隐式转换法进行初始化
    Person(string name, string p_name):m_name(name), m_phone(p_name)
    {
        cout << "Person的构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
    string m_name;
    Phone m_phone;
};
// 当其他类对象作为本类成员，构造时候先构造类对象，再构造自身,析构时先析构自身，再析构类成员
void test01()
{
    Person p("张三", "苹果");
    cout << p.m_name << "拿着： " << p.m_phone.p_name << endl; 
}

int main()
{
    test01();
}