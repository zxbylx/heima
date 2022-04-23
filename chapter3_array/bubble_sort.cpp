#include <iostream>
using namespace std;
// 数组特点：放在一块连续的内存空间中，数组中每个元素都是相同的数据类型
int main() {
    // 冒泡排序
    int arr[] = {4, 2, 8, 0, 5, 7, 9, 3, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    // 总共排序的轮数为元素个数-1
    for (int i=len-1; i>0; i--)
    {
        for (int j=0; j<=i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int k=0; k<len; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}