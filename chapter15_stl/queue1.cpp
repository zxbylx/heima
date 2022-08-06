#include <iostream>
#include <queue>
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
    string m_name;
    int m_age;
};

void test01()
{
    queue<Person> q;
    Person p1("zhao", 12);
    Person p2("xin", 123);
    Person p3("bo", 122);
    Person p4("shuai", 152);

    // 入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    while (!q.empty())
    {
        // 查看队列投部
        cout << "队列头部：" << q.front().m_name << endl;
        cout << "队列尾部：" << q.back().m_name << endl;
        cout << q.size() << endl;
        q.pop();
    }
    cout << q.size() << endl;
}

int main()
{
    test01();
}