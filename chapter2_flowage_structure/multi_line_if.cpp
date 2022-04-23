#include <iostream>
using namespace std;

int main() {
    // 选择结构 多行if语句
    // 用户输入一个分数，如果分数大于600，考上一本大学，在屏幕上输出，如果没考上一本，打印未考上一本大学
    // 1.用户输入分数
    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;
    // 2.打印用户输入的分数
    cout << "您输入的分数为： " << score << endl;
    // 3.判断分数是否大于600，如果大于，那么输出，否则打印未考上一本
    if (score > 600) 
    {
        cout << "恭喜您考上一本大学" << endl;
    }
    else
    {
        cout << "未考上一本大学" << endl;
    }
    
    return 0;
}