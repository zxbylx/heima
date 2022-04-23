#include <iostream>
using namespace std;

int main() {
    // do...while语句
    // 在屏幕中输出0-9这10个数字
    int num = 0;
    do
    {
        cout << num << endl;
        num++;
    }
    while (num < 10);
    // do...while和while的区别是do...while会先执行一次循环
    
    return 0;
}