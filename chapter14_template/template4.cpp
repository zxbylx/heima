#include <iostream>
using namespace std;

// 普通函数与函数模板区别
// 普通函数调用时可以发生自动类型转换（隐式类型转换）
// 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
// 如果利用显示指定类型的方式，可以发生隐式类型转换

// 普通函数
int myadd(int a, int b)
{
    return a + b;
}

// 函数模板
template <typename T>
T myadd2(T a, T b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    cout << myadd(a, c) << endl;  // 把字符型变量c转换为int类型
    // cout << myadd2(a,c) << endl;  // 不能隐式类型转换，报错
    cout << myadd2<int>(a, c) << endl;
} 

int main()
{
    test01();
}