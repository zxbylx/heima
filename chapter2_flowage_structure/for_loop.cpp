#include <iostream>
using namespace std;

int main() {
    // for循环语句
    // for (起始表达式; 条件表达式; 末尾循环体) {循环语句;}
    // 打印0-9
    // for后面括号里的三个表达式都可以在其他地方写
    // for (int i=0; i<10; i++)
    // {
    //     cout << i << endl;
    // }
    int i = 0;
    for (;;)
    {
        if (i >= 10)
        {
            break;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}