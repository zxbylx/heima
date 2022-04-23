#include <iostream>
using namespace std;

int main() {
    // 嵌套循环：利用嵌套循环打乘法口诀表
    // 打印列数*行数=计算结果，每一行列数最多和行数相同
    for (int i=1; i<10; i++)
    {
        // 内层循环
        for (int j=1; j<=i; j++)
        {
            cout << j << "*" << i << "=" << i*j << "\t";
        }
        cout << endl;
    }
    return 0;
}