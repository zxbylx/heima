#include <iostream>
#include <string>
using namespace std;

// 类模板与函数模板的区别
template<typename NameType, typename AgeType=int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        m_name = name;
        m_age = age;
    }
    void showPerson()
    {
        cout << "name: " << m_name << " age: " << m_age << endl;
    }
    NameType m_name;
    AgeType m_age;
};

// 1.类模板没有自动类型推导使用方式
void test01()
{
    // Person p("孙悟空", 999); //类模板没有自动类型推导使用方式
    Person<string, int> p("孙悟空", 999); // 正确，只能使用指定类型
    p.showPerson();
}

// 2.类模板可以在参数列表中设置默认参数
void test02()
{
    Person<string> p("猪八戒", 33);
    p.showPerson();
}

int main()
{
    test01();
    test02();
}