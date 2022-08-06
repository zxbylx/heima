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

// 常用拷贝替换算法 replace
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), Myprint());
    cout << endl;

    replace(v.begin(), v.end(), 2, 200);  // 替换所有的2，不只是第一个
    for_each(v.begin(), v.end(), Myprint());
    cout << endl;

}



int main()
{
    test01();
}