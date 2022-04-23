#include <iostream>
using namespace std;

int main() {
    // 1. 单精度 float 4字节 7位有效数字
    // 2. 双精度 double 8字节 15-16位有效数字
    // 在C++中不管是单精度还是双精度，默认显示6位有效数字，有效数字包含小数点前的数字
    float f1 = 3.1415926f;
    cout << "f1= " << f1 << endl;
    double d1 = 3.1415926;
    cout << "d1= " << d1 << endl;

    // 统计float和double占用内存空间
    cout << "float占用的内存空间为：" << sizeof(float) << endl;
    cout << "double占用的内存空间为：" << sizeof(double) << endl;

    // 科学计数法
    float f2 = 3e2;  // 3 * 10 ^ 2
    cout << "f2= " << f2 << endl;
    float f3 = 3e-2;  // 3* 0.1 ^ 2
    cout << "f3= " << f3 << endl;

    return 0;
}