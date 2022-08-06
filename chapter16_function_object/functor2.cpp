#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 仿函数返回值类型是bool的称为谓词，一个参数叫一元谓词，两个参数叫二元谓词

class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    // 查找容器中有没有大于5的数字
    // GreaterFive()匿名函数对象
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it==v.end())
    {
        cout << "未找到大于5的数字" << endl;
    }
    else
    {
        cout << "找到大于5的数字" << endl;
        cout << "数字为：" << *it << endl;
    }
}

int main()
{
    test01();
}