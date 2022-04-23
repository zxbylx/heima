#include <iostream>
using namespace std;
// 数组特点：放在一块连续的内存空间中，数组中每个元素都是相同的数据类型
int main() {
    // 二维数组名称用途
    // 可以查看占用内存空间大小
    int arr[2][3] =
    {
        {1,2,3},
        {4,5,6}
    };
    cout << "二维数组占用内存空间大小为：" << sizeof(arr) << endl;
    cout << "二维数组第一行占用内存空间大小为：" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用内存空间大小为： " << sizeof(arr[0][0]) << endl;
    cout << "二维数组行数: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    // 可以查看二维数组首地址
    cout << "二维数组首地址为：" << arr << endl;
    cout << "二维数组第一行首地址为：" << arr[0] << endl;
    cout << "二维数组第二行首地址为：" << arr[1] << endl;
    cout << "二维数组首地址为：" << (long)arr << endl;  // 这里不能直接转换为int，因为linux系统指针类型占用8个字节，int占用4个，会出现loses precision报错
    cout << "二维数组第一个元素首地址： " << &arr[0][0] << endl;
    cout << "二维数组第二行第一个元素首地址： " << &arr[1][0] << endl;
    return 0;
}