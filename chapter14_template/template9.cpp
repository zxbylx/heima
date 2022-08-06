#include <iostream>
#include <string>
using namespace std;

// 类模板中成员函数创建时机
// 类模板成员函数在调用时才去创建
class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 show" << endl;
    }
};

class Person2
{
public:
    void showPerson1()
    {
        cout << "Person2 show" << endl;
    }
};

template <typename T>
class Myclass
{
public:
    T obj;
    // 类模板中成员函数
    void func1()
    {
        obj.showPerson1();
    }
    void func2()
    {
        obj.showPerson2();
    }
};

void test01()
{
    Myclass<Person1> m;
    m.func1();
}

int main()
{
    test01();
    // test02();
}