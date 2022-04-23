#include <iostream>
using namespace std;
// 数组特点：放在一块连续的内存空间中，数组中每个元素都是相同的数据类型
int main() {
    // 一维数组名称的用途：
    // 1.可以统计整个数组在内存中的长度
    // 2.可以获取数组在内存中的首地址
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "整个数组占用内存空间的大小为：" << sizeof(arr) << endl;
    cout << "每个元素占用的内存空间大小为：" << sizeof(arr[0]) << endl;
    cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "数组首地址为：" << arr << endl;
    cout << "数组中第一个元素的地址为：" << &arr[0] << endl;
    cout << "数组中第二个元素的地址为：" << &arr[1] << endl;
    // 数组名是一个常量，不可以进行赋值操作
    return 0;
}