#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print01(int val)
{
    cout << val << " ";
}

class Transform
{
public:
    int operator()(int v)
    {
        return v + 100;
    }
};

// 常用遍历算法 transform
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    vector<int> v2;
    v2.resize(v.size());  // 目标容器必须提前开辟空间
    transform(v.begin(), v.end(), v2.begin(), Transform());
    for_each(v2.begin(), v2.end(), print01);
    cout << endl;
}

int main()
{
    test01();
}