#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
using namespace std;

// 常用查找算法 binary_serach，查找前必须是有序的，返回布尔值
// 查找内置数据类型
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }
    bool ret = binary_search(v.begin(), v.end(), 5);
    if (ret)
    {
        cout << "找到元素" << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }
}


int main()
{
    test01();
}