#include <iostream>
using namespace std;

int main() {
    // 加减乘除
    // 两个整数相除，结果依然是整数，小数部分去除
    int a1 = 10;
    int b1 = 3;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;

    int a2 = 10;
    int b2 = 20;
    cout << "a2/b2= " << a2 / b2 << endl;

    // 两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.23;
    cout << "d1/d2=" << d1/d2 << endl;
    return 0;
}