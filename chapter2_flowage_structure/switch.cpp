#include <iostream>
using namespace std;

int main() {
    // switch语句，执行多条件分支语句
    // 给电影打分
    // 9~10 经典
    // 7-8 非常好
    // 5-6 一般
    // 5以下 烂片

    // 1. 提示用户给电影评分
    cout << "请给电影进行评分" << endl;
    // 2.用户开始打分
    int score = 0;
    cin >> score;
    cout << "您打的分数为：" << score << endl;
    // 3. 根据用户输入的分数来提示用户最后的结果
    switch (score)
    {
    case 10:
        cout << "您认为是经典电影" << endl;
        break;
    case 9:
        cout << "您认为是经典电影" << endl;
        break;
    case 8:
        cout << "您认为是非常好的电影" << endl;
        break;
    case 7:
        cout << "您认为是非常好的电影" << endl;
        break;
    case 6:
        cout << "您认为是一般的电影" << endl;
        break;
    case 5:
        cout << "您认为是一般的电影" << endl;
        break;
    default:
        cout << "您认为是烂片" << endl;
        break;
    }

    // if 和 switch 区别
    // switch缺点：判断时候只能是整型或字符型，不能是区间，
    // switch优点：是结构清晰，执行效率高
    return 0;
}