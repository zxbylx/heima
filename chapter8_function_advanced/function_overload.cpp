#include <iostream>
using namespace std;

// 函数重载注意事项
// 1. 引用作为重载的条件
void func(int &a)
{
    cout << "func(int &a)调用" << endl;
}

void func(const int &a)
{
    cout << "func(const int &a)调用" << endl;
}
// 2. 函数重载碰到默认参数
void func2(int a, int b=10)
{
    cout << "func2(int a, int b=20)调用" << endl;
}

void func2(int a)
{
    cout << "func2(int a)调用" << endl;
}
int main()
{
    int a = 10;
    func(a);  // 调用void func(int &a)
    func(10);  // 调用void func(const int &a)
    // func2(10);  // 不传默认参数会出现二义性，记得不要这么做
    func2(10, 20);  // 带上默认参数可以
}