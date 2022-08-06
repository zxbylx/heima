#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
using namespace std;

// 常用查找算法 adjacent_find
// 查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }
    v.push_back(9);
    vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    if (it!=v.end())
    {
        cout << "找到相邻重复元素" << " ";
        cout << *it << endl;
    }
    else
    {
        cout << "未找到相邻重复元素" << endl;
    }
}


int main()
{
    test01();
}