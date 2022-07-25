#include <iostream>
using namespace std;

// 赋值运算符重载
class Person
{
public:
    Person(int age)
    {
        m_age = new int(age);
    }
    int *m_age;
    ~Person()
    {
        if (m_age!=NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }
    // 重载赋值运算符
    Person & operator=(Person &p)
    {
        // 编译器提供的是浅拷贝
        // m_age = p.m_age;
        // 应该先判断是否有属性在堆区，如果有先释放干净，然后进行深拷贝
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(*p.m_age);
        return *this;
    }
private:

};
void test01()
{
    Person p1(18);
    cout << "p1的年龄为: " << *p1.m_age << endl;
    Person p2(28);
    p2 = p1;
    cout << "p2的年龄为: " << *p2.m_age << endl;
    Person p3(22);
    // 链式编程
    p1 = p2 = p3;
    cout << *p1.m_age << endl;
    cout << *p2.m_age << endl;
    cout << *p3.m_age << endl;
}
int main()
{
    test01();
}