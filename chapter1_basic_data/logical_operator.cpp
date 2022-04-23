#include <iostream>
using namespace std;

int main() {
    // 逻辑运算符   
    // 非 ！
    int a = 10;
    cout << !a << endl; // 0
    cout << !!a << endl; //1

    // && 与
    int c = 10;
    int d = 10;
    cout << "c && d = " << (c && d) << endl;

    // || 或
    int e = 10;
    int f = 0;
    cout << "e || f = " << (e || f) << endl;
    
    return 0;
}