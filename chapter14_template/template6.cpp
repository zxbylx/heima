#include <iostream>
#include <string>
using namespace std;

// 模板的局限性
// 模板不是万能的，有些特定数据类型，需要用到具体化方式做特殊实现


class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

// 对比两个数据是否相等
template <typename T>
bool myCompare(T &a, T &b)
{
    if (a == b)
        return true;
    else   
        return false;
}

// 利用具体化的Person版本实现代码，显示具体化实现
template<> bool myCompare(Person &p1, Person &p2)
{
    if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
        return true;
    else
        return false;
};


void test01()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare(a, b);
    if (ret)
        cout << "a等于b" << endl;
    else
        cout << "a不等于b" << endl;
}

void test02()
{
    Person p1("张三", 20);
    Person p2("张三", 20);
    bool ret = myCompare(p1, p2);
    if (ret)
    {
        cout << "相等" << endl;
    }
    else
        cout << "不相等" << endl;
}

int main()
{
    test01();
    test02();
}