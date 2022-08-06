#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

class Mycompare
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

void print_vector(vector<bool> v)
{
    for (vector<bool>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 内建仿函数：逻辑仿函数
void test01()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(true);
    v.push_back(true);
    v.push_back(false);
    print_vector(v);

    // 利用逻辑非，将容器v搬运到v2中，并执行取反操作
    vector<bool> v2;
    v2.resize(v.size());
    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
    print_vector(v2);

    vector<bool> v3;
    v3 = v;
    // v3 = logical_not<bool>(v);  // 貌似仿函数不能直接使用，只能放在算法里
    print_vector(v3);
}


int main()
{
    test01();
    // test02();
}