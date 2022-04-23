#include <iostream>
using namespace std;

// 值传递
// 所谓值传递，就是函数调用时实参将值传入给形参
// 值传递时，如果形参发生改变，并不会影响实参

// 如果函数不需要返回值，声明的时候可以写void
void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // 交换
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后： " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}
int main() {
    // 调用swap函数
    // a,b为实参，num1,num2为形参，函数调用时实参的值会传递给形参
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a, b);
    // 值传递时，如果形参发生改变，并不会影响实参
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}