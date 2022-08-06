#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void my_print(int val)
{
    cout << val << endl;
}

// vector容器存放内置数据类型
void test01()
{
    vector<int> v;
    // 插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // 通过迭代器访问容器中的数据
    // vector<int>::iterator itBegin = v.begin(); // 起始迭代器
    // vector<int>::iterator itEnd = v.end();  // 指向容器中最后一个元素的下一个位置

    // // 第一种遍历
    // while(itBegin!=itEnd)
    // {
    //     cout << *itBegin << endl;
    //     itBegin++;
    // }

    // // 第二种遍历方式
    // for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // 第三种遍历
    for_each(v.begin(), v.end(), my_print);
}

int main()
{
    test01();
}