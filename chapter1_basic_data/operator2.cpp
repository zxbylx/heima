#include <iostream>
using namespace std;

int main() {
    // 前置递增
    int a = 10;
    ++a;
    cout << "a=" << a << endl;

    // 后置递增
    int b = 10;
    b++;
    cout << "b=" << b << endl;

    // 前置递增和后置递增的区别
    // 前置递增先让变量加一，然后进行表达式运算
    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = " << a2 << endl;  // a2=11
    cout << "b2 = " << b2 << endl;  // b2=110

    // 后置递增先进行表达式计算，然后再让表达式加一
    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = " << a3 << endl;  // a3=11
    cout << "b3 = " << b3 << endl;  // b3=100
    return 0;
}