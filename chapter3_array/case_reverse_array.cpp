#include <iostream>
using namespace std;
// 数组特点：放在一块连续的内存空间中，数组中每个元素都是相同的数据类型
int main() {
    // 反转数组
    int arr[5] = {4, 2, 3, 1, 5};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1; //数组结束下标
    int copy_end = end; // 注意这里要保存结尾位置，end变化了无法使用了
    // 循环交换位置
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; //注意这里要加减，否则会死循环
        end--;
    }
    for (int i=0; i<=copy_end; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}