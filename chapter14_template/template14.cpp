#include <iostream>
#include <string>
using namespace std;
// 这里必须先声明类，再声明函数，否则会报错
template<typename T1, typename T2>
class Person;
// 全局函数类外实现
template<typename T1, typename T2>
void printPerson2(Person<T1, T2> &p)
{
    cout << "类外实现的姓名： " << p.m_name << " 年龄：" << p.m_age << endl;
}


// 通过全局函数来打印Person的信息
template<typename T1, typename T2>
class Person
{
    // 全局函数类内实现
    friend void printPerson(Person<T1, T2> p)
    {
        cout << "姓名： " << p.m_name << " 年龄：" << p.m_age << endl;
    }
    // 全局函数类外实现，加一个空模板参数列表
    // 如果全局函数是类外实现的话，需要让编译器提前知道这个函数的存在,还有类Person
    friend void printPerson2<>(Person<T1, T2> &p);
public:
    Person(T1 name, T2 age)
    {
        m_name = name;
        m_age = age;
    }
private:
    T1 m_name;
    T2 m_age;
};



void test01()
{
    Person<string, int>p("Tom", 20);
    printPerson(p);

}

// 全局函数在类外实现
void test02()
{
    Person<string, int>p("Jerry", 20);
    printPerson2(p);
}

int main()
{
    test01();
    test02();
}

