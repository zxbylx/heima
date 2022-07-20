#include <iostream>
using namespace std;

// 深拷贝与浅拷贝
class Person
{  
public:
    Person()
    {
        cout << "Person默认构造函数调用" << endl;
    }

    Person(int a, int height)
    {
        age = a;
        m_height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
    }
    // 拷贝构造
    Person(const Person &p)
    {
        // 将传入的人身上的所有属性拷贝到我身上
        cout << "Person的拷贝构造函数调用" << endl;
        age = p.age;
        // m_height = p.m_height; // 编译器默认实现的就是这样的代码
        m_height = new int(*p.m_height); // 深拷贝
    }
    ~Person()
    {
        // 析构代码，将堆区开辟数据做释放
        if (m_height!=NULL)
        {
            delete m_height;  // 浅拷贝带来的问题是堆区的内存重复释放
            m_height = NULL;
        }
        cout << "Person析构函数调用" << endl;
    }
    int age;
    int *m_height;
};

void test01()
{
    Person p1(18, 160);
    cout << "p1的年龄：" << p1.age << endl;
    cout << "p1的身高：" << *p1.m_height << endl;
    Person p2(p1);
    cout << "p2的年龄：" << p2.age << endl;
    cout << "p2的身高：" << *p2.m_height << endl;

}

int main()
{
    test01();
}