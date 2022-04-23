#include <iostream>
using namespace std;

// 函数的定义
// 语法
// 返回值类型 函数名 (参数列表) {函数体语句 return表达式} 

// 加法函数，实现两个整型相加，并且将相加的结果进行返回
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main() {
    // 调用add函数
    // a,b为实参，num1,num2为形参，函数调用时实参的值会传递给形参
    int a = 10;
    int b = 20;
    int c = add(a, b);
    cout << c << endl;
    return 0;
}