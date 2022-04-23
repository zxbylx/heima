#include <iostream>
using namespace std;

int main() {
    // 赋值运算符  =、 +=、 -=、 *=、 /=、 %=
    int a = 10;
    a = 100;
    cout << "a = " << a << endl;

    // +=
    int b = 10;
    b += 2;
    cout << "b = " << b << endl;

    // -=
    int c = 10;
    c -= 2;
    cout << "c = " << c << endl;

    // /=
    int d = 10;
    d /= 2;
    cout << "d = " << d << endl;

    // %=
    int e = 10;
    e %= 2;
    cout << "e = " << e << endl;

    return 0;
}