#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void myprint(int val)
{
    cout << val << " ";
}

// 常用算数生成算法 fill
void test01()
{
    vector<int> v;
    v.resize(10);
    // 后期重新填充
    fill(v.begin(), v.end(), 100);
    for_each(v.begin(), v.end(), myprint);
    cout << endl;
}

int main()
{
    test01();
}