#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

void my_print(int val)
{
    cout << val << " ";
}

// 常用拷贝替换算法 swap
void test01()
{
    vector<int> v;
    vector<int> v2;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
        v2.push_back(i+1);
    }

    cout << "交换前：" << endl;
    for_each(v.begin(), v.end(), my_print);
    cout << endl;
    for_each(v2.begin(), v2.end(), my_print);
    cout << endl;
    cout << "交换后" << endl;
    swap(v, v2);
    for_each(v.begin(), v.end(), my_print);
    cout << endl;
    for_each(v2.begin(), v2.end(), my_print);
    cout << endl;
}



int main()
{
    test01();
}