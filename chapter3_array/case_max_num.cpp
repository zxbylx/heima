#include <iostream>
using namespace std;
// 数组特点：放在一块连续的内存空间中，数组中每个元素都是相同的数据类型
int main() {
    // 求数组中的最大值
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    for (int i=0; i<5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "数组中最大值为：" << max << endl; 
    return 0;
}