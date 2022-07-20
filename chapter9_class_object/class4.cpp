#include <iostream>
#include <string>
using namespace std;

// 成员属性设置为私有
// 1.可以自己控制读写权限
// 2.对于写可以检测数据的有效性
class Person
{
public:
    void setname(string name)
    {
        m_name = name;
    }
    string getname()
    {
        return m_name;
    }

    int get_age()
    {
        return m_age;
    }

    void set_age(int age)
    {
        // 对数据的有效性进行检测
        if (age<0 || age>150)
            cout << "年龄不符合预期" << endl;
        else
            m_age = age;
    }

    void set_lover(string lover)
    {
        m_lover = lover;
    }
private:
    string m_name;
    int m_age = 0;
    string m_lover;
};
int main()
{
    Person p1;
    p1.setname("张三");
    cout << "名字: " << p1.getname() << endl;
    p1.set_age(100);
    cout << "年龄为： " << p1.get_age() << endl;
    p1.set_lover("李四");
    // cout << "情人为： " << p1.m_lover << endl;  数据不可以访问，只写不可读
}