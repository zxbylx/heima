#include <iostream>
#include <string>
using namespace std;

// 函数 调用运算符重载
class MyPrint
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};

// 仿函数非常灵活，没有固定写法
class Myadd
{
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};

void test01()
{
    MyPrint m1;
    m1("hello world");  // 由于使用起来非常类似函数调用，因此被称为仿函数
}

void test02()
{
    Myadd m2;
    cout << m2(2, 3) << endl;
    // 匿名函数对象
    cout << Myadd()(100, 100) << endl;
}

int main()
{
    test01();
    test02();
}