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

class Myprint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

class Greater30
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

// 常用拷贝替换算法 replace_if
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), Myprint());
    cout << endl;

    replace_if(v.begin(), v.end(), Greater30(), 200);  // 第三个是仿函数，条件，满足条件的替换为第四个参数
    for_each(v.begin(), v.end(), Myprint());
    cout << endl;

}



int main()
{
    test01();
}