#include <iostream>
using namespace std;

int main() {
    // 练习案例：水仙花数
    // 水仙花数是指一个三位数，它的每个位上数字的3次方之和等于它本身
    // 1.先打印所有的水仙花数
    int num = 100;
    do
    {
        // 2.从所有的三位数字中找到水仙花数
        int a = 0;  // 各位
        int b = 0;  // 十位
        int c = 0;  // 百位
        a = num % 10;
        b = (num / 10) % 10;
        c = num / 100;  // 注意这里取百位是整除不是取余
        if (a*a*a+b*b*b+c*c*c==num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
    
    
    
    return 0;
}