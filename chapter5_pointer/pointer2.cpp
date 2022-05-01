#include <iostream>
using namespace std;

int main() {
    // 指针所占内存空间,32位占4个字节，64位占8个字节，不管是什么数据类型
    int a = 10;
    int *p = &a;
    cout << "sizeof int * = " << sizeof(int *) << endl;
    cout << "sizeof float * = " << sizeof(float *) << endl;
    cout << "sizeof double * = " << sizeof(double *) << endl;
    cout << "sizeof char * = " << sizeof(char *) << endl;
    return 0;
}