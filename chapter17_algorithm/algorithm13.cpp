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

// 常用拷贝替换算法 copy
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    vector<int> v_target;
    v_target.resize(v.size());  // 需要提前分配内存才能插入
    copy(v.begin(), v.end(), v_target.begin());
    for_each(v_target.begin(), v_target.end(), my_print);
    cout << endl;
}



int main()
{
    test01();
}