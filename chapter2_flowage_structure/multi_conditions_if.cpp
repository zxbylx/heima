#include <iostream>
using namespace std;

int main() {
    // 选择结构 多条件if语句
    // 用户输入一个分数，如果分数大于600，考上一本大学，在屏幕上输出
    // 大于500,考上二本
    // 大于400，考上三本
    // 小于等于400，未考上本科
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
    else if (score > 500)
    {
        cout << "恭喜您考上二本大学" << endl;
    }
    else if (score > 400)
    {
        cout << "恭喜您考上三本大学" << endl;
    }
    else
    {
        cout << "未考上大学" << endl;
    }
    
    
    return 0;
}