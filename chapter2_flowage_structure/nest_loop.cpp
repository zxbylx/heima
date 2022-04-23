#include <iostream>
using namespace std;

int main() {
    // 嵌套循环：利用嵌套循环打印星图
    int i = 0;
    for (int i=0; i<10; i++)
    {
        // 内层循环
        for (int j=0; j<10; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}