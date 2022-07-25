#include <iostream>
#include <string>
using namespace std;

// 关系运算符重载
class Person
{
public:
    string m_name;
    int m_age;
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    bool operator==(Person &p)
    {
        if (this->m_name==p.m_name && this->m_age==p.m_age)
        {
            return true;
        }
        else
            return false;
    }

    bool operator!=(Person &p)
    {
        if (this->m_name==p.m_name && this->m_age==p.m_age)
        {
            return false;
        }
        else
            return true;
    }
};

void test01()
{
    Person p1("tom", 18);
    Person p2("tom", 12);
    if (p1 == p2)
    {
        cout << "p1和p2是一个人" << endl;
    }
    else
        cout << "p1和p2不是一个人" << endl;
    if (p1 != p2)
    {
        cout << "p1和p2不是一个人" << endl;
    }
    else
        cout << "p1和p2是一个人" << endl;
}

int main()
{
    test01();
}