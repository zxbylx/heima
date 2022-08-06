#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void print01(int val)
{
    cout << val << " ";
}

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
        if (this->m_name==p.m_name && this->m_age==p.m_age)
        {
            return true;
        }
        else
            return false;
    }
    string m_name;
    int m_age;
};

// 常用查找算法 find，返回值是迭代器
// 查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it!=v.end())
    {
        cout << "找到" << " ";
        cout << *it << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }
}

// 查找自定义数据类型
void test02()
{
    vector<Person> v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator it = find(v.begin(), v.end(), p2);
    if (it==v.end())
    {
        cout << "没找到" << endl;
    }
    else
    {
        cout << "找到了" << endl;
        cout << it->m_name << " " << it->m_age << endl;
    }
}

int main()
{
    test01();
    test02();
}