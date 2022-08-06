#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void myprint(int val)
{
    cout << val << " ";
}

// 常用集合算法 差集set_difference，原容器需要是有序序列
void test01()
{
    vector<int> v1;
    vector<int> v2;
    vector<int> target;
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
        v2.push_back(i+1);
    }
    // 目标容器需要提前开辟空间，因为是求差集，二者中最大的情况
    target.resize(max(v1.size(), v2.size()));
    // 获取交集，返回交集中最后一个元素的位置
    // 求v1和v2的差集
    vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin());
    for_each(target.begin(), it, myprint);  //  这里结尾用it代替target.end()
    cout << endl;
    // 求v2和v1的差集
    it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), target.begin());
    for_each(target.begin(), it, myprint);  //  这里结尾用it代替target.end()
    cout << endl;
}

int main()
{
    test01();
}