#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// list容器排序案例， 对自定义数据类型排序
// 按照年龄排序，年龄相同按照身高排序

class Person
{
public:
    Person(string name, int age, int height)
    {
        m_name = name;
        m_age = age;
        m_height = height;
    }
    string m_name;
    int m_age;
    int m_height;
};

void print_list(const list<Person> &l)
{
    for (list<Person>::const_iterator it=l.begin(); it!=l.end(); it++)
    {
        cout << "name: " << (*it).m_name << " age: " << (*it).m_age << " height: " << (*it).m_height << endl;
    }
}

// 指定排序规则
bool compare_person(Person &p1, Person &p2)
{
    if (p1.m_age==p2.m_age)
    {
        return p1.m_height > p2.m_height;
    }
    else
        return p1.m_age < p2.m_age;
}

void test01()
{
    list<Person> l;  // 创建容器
    Person p1("zhao", 34, 123);
    Person p2("xin", 35, 124);
    Person p3("bo", 34, 156);
    Person p4("da", 44, 156);
    Person p5("ge", 54, 156);
    Person p6("hao", 64, 156);

    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);

    print_list(l);

    cout << "排序后： " << endl;
    l.sort(compare_person);
    print_list(l);
}

int main()
{
    test01();
}