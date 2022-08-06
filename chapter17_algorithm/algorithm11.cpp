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

// 常用排序算法 merge
void test01()
{
    vector<int> v;
    vector<int> v2;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
        v2.push_back(i+1);
    }

    vector<int> v_target;
    v_target.resize(v.size()+v2.size());  // 需要提前分配内存才能插入
    merge(v.begin(), v.end(), v2.begin(), v2.end(), v_target.begin());
    for_each(v_target.begin(), v_target.end(), my_print);
    cout << endl;
}



int main()
{
    test01();
}