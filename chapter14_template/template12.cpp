#include <iostream>
#include <string>
using namespace std;

// 类模板成员函数类外实现
template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age);
    // {
    //     m_name = name;
    //     m_age = age;
    // }
    void showPerson();
    // {
    //     cout << "姓名： " << m_name << " 年龄: " << m_age << endl;
    // }
    T1 m_name;
    T2 m_age;
};

// 构造函数类外实现,注意要写模板，注明模板参数列表
template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    m_name = name;
    m_age = age;
}

template<typename T1, typename T2>
void Person<T1, T2>::showPerson()
{
    cout << "姓名： " << m_name << " 年龄: " << m_age << endl;
}

void test01()
{
    Person<string, int> p1("Tom", 20);
    p1.showPerson();
}

// void test02()
// {
//     Son2<int, char> s2;
// }

int main()
{
    test01();
    // test02();
}