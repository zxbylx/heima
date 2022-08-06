#include <iostream>
#include <string>
#include <set>

using namespace std;

void printSet(set<int> &s)
{
    for (set<int>::iterator it=s.begin(); it!=s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

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

class Mycompare
{
public:
    // 仿函数是bool类型
    bool operator()(const Person &p1, const Person &p2)
    {
        return p1.m_age > p2.m_age;
    }
};

// set容器排序:存放自定义数据类型
void test01()
{
    // 自定义数据类型都会指定排序规则，否则无法排序
    set<Person, Mycompare> s1;

    Person p1("zhao", 12);
    Person p2("xin", 122);
    Person p3("bo", 132);
    Person p4("shuai", 142);
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);
    for (set<Person, Mycompare>::iterator it=s1.begin(); it!=s1.end(); it++)
    {
        cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
    }
}

int main()
{
    test01();
}