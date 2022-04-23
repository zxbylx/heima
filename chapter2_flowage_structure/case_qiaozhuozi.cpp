#include <iostream>
using namespace std;

int main() {
    // 练习案例：敲桌子，从100个数字中找到7的倍数或含7的数字，输出敲桌子
    for (int i=1; i<=100; i++)
    {
        if (i%7==0 || i%10==7 || i/10==7)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << i << endl;
        }
        
    }
    return 0;
}