#include <iostream>
#include <string>
using namespace std;

// 类模板与继承
template <typename T>
class Base
{
public:
    T m;
};

// 子类继承父类是模板时必须指定父类的T类型才行
class Son: public Base<int>
{

};

// 如果想灵活指定父类的T类型，子类也需要变为类模板
template <typename T1, typename T2>
class Son2: public Base<T2>
{
public:
    T1 obj;
    Son2()
    {
        cout << "T1的类型为： " << typeid(T1).name() << endl;
        cout << "T2的类型为： " << typeid(T2).name() << endl;
    }
};

void test01()
{
    Son s1;
}

void test02()
{
    Son2<int, char> s2;
}

int main()
{
    test01();
    test02();
}