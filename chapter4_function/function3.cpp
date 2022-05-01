#include <iostream>
using namespace std;

// 函数的常见样式
// 1.无参无返
void test01()
{
    cout << "this is test01" << endl;
}

// 2.有参无返
void test02(int a)
{
    cout << "this is test02 a = " << a << endl;
}

// 3.无参有返
int test03()
{
    cout << "this is test03" << endl;
    return 1000;
}
// 4.有参无返
int test04(int b)
{
    cout << "this is test04 b = " << b << endl;
    return b; 
}

int main() {
    // 无参无返函数调用
    test01();
    // 有参无返函数调用
    test02(100);
    // 无参有返函数调用
    int num1 = test03();
    cout << "num1 = " << num1 << endl;
    // 有参有返函数调用
    int num2 = test04(2000);
    cout << "num2 = " << num2 << endl;
    return 0;
}