#include <iostream>
using namespace std;

int main() {
    // const修饰指针有三种情况：
    // 1. const修饰指针：常量指针
    int a = 10;
    int b = 20;
    const int * p = &a; // const修饰的是*,所以指针指向的值不可以改，没有修饰p，所以指针的指向可以改
    // *p = 20; // 错误
    p = &b;  // 正确
    // 2. const修饰常量： 指针常量
    // const修饰的p2，所以指针指向不可以改，未修饰*,所以指针指向的值可以改
    int * const p2 = &a;
    *p2 = 100; // 正确
    // p2 = &b;  // 错误
    // 3. const既修饰指针又修饰常量
    // const既修饰*又修饰p3，所以指针指向和指针指向的值都不可以改
    const int * const p3 = &a;
    // p3 = &b; // 错误
    // *p3 = 200;  // 错误
    return 0;
}