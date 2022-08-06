#include <iostream>
using namespace std;

// 函数模板注意事项
// 1.自动类型推导必须推导出一致的数据类型T才可以使用
// 2.模板必须要确定T的数据类型才可以使用
template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void func()
{
    cout << "func调用" << endl;
}


int main()
{
    int a = 10;
    int b = 20;
    // 自动类型推导
    Swap(a, b);
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    char e = 'e';
    // Swap(a, e);  // T变为一个int，一个char不一致

    // func();  // 因为这没法知道T的数据类型，所以报错，除非显示指定数据类型
    func<int>();
}