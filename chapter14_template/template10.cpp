#include <iostream>
#include <string>
using namespace std;

// 类模板实例化出的对象，向函数传参的方式
// 一共有三种传参方式：
// 1.指定传入的类型——直接显示对象的数据类型
// 2.参数模板化——将对象中参数变为模板进行传递
// 3.整个类模板化——将这个对象类型模板化进行传递
template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        m_name = name;
        m_age = age;
    }
    void showPerson()
    {
        cout << "姓名： " << m_name << " 年龄: " << m_age << endl;
    }
    T1 m_name;
    T2 m_age;
};
// 1.指定传入的类型, 最常用
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
}

// 2.参数模板化
template<typename T1, typename T2>
void printPerson2(Person<T1, T2>&p)
{
    p.showPerson();
    cout << "T1的类型为： " << typeid(T1).name() << endl;
    cout << "T2的类型为： " << typeid(T2).name() << endl;
}

// 3.整个类模板化
template<typename T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T的类型为： " << typeid(T).name() << endl;
}

void test01()
{
    Person<string, int> p("孙悟空", 111);
    printPerson1(p);

}

void test02()
{
    Person<string, int> p("猪八戒", 111);
    printPerson2(p);
}

void test03()
{
    Person<string, int> p("唐僧", 111);
    printPerson3(p);
}

int main()
{
    test01();
    test02();
    test03();
}