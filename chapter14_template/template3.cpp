#include <iostream>
using namespace std;

// 实现一个通用的对数组进行排序的函数
// 规则：从大到小
// 算法 选择排序

template <typename T>
void mySort(T arr[], int len)
{
    for (int i=0; i<len; i++)
    {
        int max = i; // 认定最大值下标
        for (int j=i+1; j<len; j++)
        {
            if (arr[max]<arr[j])
            {
                max = j;
            }
        }
        if (max!=i)
        {
            T temp;
            temp = arr[max];
            arr[max] = arr[i];
            arr[i] = temp;
        }
    }
}

// 提供打印数组的模板
template <typename T>
void printArray(T arr[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    //测试数组
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(charArr[0]);
    mySort(charArr, num);
    printArray(charArr, num);
}

void test02()
{
    int intArr[] = {5, 4, 6, 3, 1};
    int num = sizeof(intArr) / sizeof(intArr[0]);
    mySort(intArr, num);
    printArray(intArr, num);
}

int main()
{
    test01();
    test02();
}