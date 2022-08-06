#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
using namespace std;


class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    // 重载==，让底层find知道如何对比Person数据类型
    bool operator==(const Person &p)
    {
        if (this->m_age==p.m_age)
        {
            return true;
        }
        else
            return false;
    }
    string m_name;
    int m_age;
};

// 常用统计算法 count
// 查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    int num = count(v.begin(), v.end(), 3);
    cout << num << endl;
}

class Great20
{
public:
    bool operator()(Person &p)
    {
        return p.m_age > 20;
    }
};

// 查找自定义数据类型
void test02()
{
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 30);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person p5("eee", 30);
    int num = count(v.begin(), v.end(), p5);
    cout << "和p5相同岁数的人有：" << num << "人" << endl;
}

int main()
{
    test01();
    test02();
}