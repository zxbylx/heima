#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print01(int val)
{
    cout << val << " ";
}

class Print02
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

// 常用遍历算法 for_each
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), print01); // 普通函数传入函数名
    cout << endl;
    for_each(v.begin(), v.end(), Print02()); // 仿函数传入对象，因为正常调用应该是Print02()(*v.begin());
    cout << endl;
}

int main()
{
    test01();
}