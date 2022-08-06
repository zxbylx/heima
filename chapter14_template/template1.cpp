#include <iostream>
using namespace std;

// 函数模板
template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 10;
    int b = 20;
    // 自动类型推导
    Swap(a, b);
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    float c = 3.5;
    float d = 2.3;
    // 显示指定类型
    Swap<float>(c, d);
    cout << "c = " << c << endl; 
    cout << "d = " << d << endl; 
}