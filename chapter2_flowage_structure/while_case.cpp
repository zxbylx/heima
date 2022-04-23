#include <iostream>
using namespace std;
#include <ctime>

int main() {
    // while循环案例：猜数字1-100
    // 添加随机数种子，作用是利于当前系统时间来生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));
    // 1.生成一个随机数
    int num = rand() % 100 + 1;   // rand()%100 生成0-99随机数
    // cout << num << endl;

    // 2.玩家输入数字猜测
    int val = 0;
    while (val != num)
    {
        cin >> val;
        // 3.判断玩家的猜测
        if (val > num)
        {
            cout << "大了" << endl;
        }
        else if (val < num)
        {
            cout << "小了" << endl;
        }
        else
        {
            cout << "猜对了" << endl;
            break; // 退出当前循环
        }
    }
    
    
    return 0;
}