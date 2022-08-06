#include <iostream>
#include <string>
using namespace std;

// 类模板
template<typename NameType, typename AgeType>
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

void test01()
{
    Person<string, int> p1("孙悟空", 999);  // 注意要传类模板参数列表
    p1.showPerson();
}

int main()
{
    test01();
}