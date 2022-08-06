#include <iostream>
using namespace std;

// 普通函数与函数模板调用规则
// 1.优先调用普通函数
// 2.可以通过空模板参数列表强制调用函数模板
// 3.函数模板可以发生函数重载
// 4.如果函数模板可以产生更好的匹配，优先调用函数模板

void my_print(int a, int b)
{
    cout << "调用的普通函数" << endl;
}

template <typename T>
void my_print(T a, T b)
{
    cout << "调用函数模板" << endl;
}

template <typename T>
void my_print(T a, T b, T c)
{
    cout << "调用重载的函数模板" << endl;
}

void test01()
{
    int a = 10;
    int b = 20;
    my_print(a, b);
    // 通过空模板的参数列表，强制调用函数模板
    my_print<>(a, b);
    // 函数模板重载
    my_print(a, b, 100);
    // 如果函数模板可以产生更好的匹配，优先调用函数模板
    char c1 = 'a';
    char c2 = 'b';
    my_print(c1, c2);
}

int main()
{
    test01();
}