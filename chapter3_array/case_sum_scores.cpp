#include <iostream>
using namespace std;
#include <string>
// 数组特点：放在一块连续的内存空间中，数组中每个元素都是相同的数据类型
int main() {
    // 二维数组案例-统计考试成绩
    // 1.创建二维数组
    int scores[3][3] = 
    {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}
    };
    string names[3] = {"张三", "李四", "王五"};
    // 2.统计每个人的总和分数
    for (int i=0; i<3; i++)
    {
        int sum = 0;
        for (int j=0; j<3; j++)
        {
            sum += scores[i][j];
        }
        cout << names[i] << "的总分为：" << sum << endl;
    }
    return 0;
}