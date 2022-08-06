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

// 常用排序算法 reverse
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    reverse(v.begin(), v.end());  // 输入两个迭代器，起始和结尾
    for_each(v.begin(), v.end(), my_print);
    cout << endl;
}



int main()
{
    test01();
}