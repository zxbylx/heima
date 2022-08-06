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

void print_vector(vector<int> v)
{
    for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// 内建仿函数：关系仿函数
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    print_vector(v);

    // sort(v.begin(), v.end(), Mycompare());  // 自己写的仿函数
    sort(v.begin(), v.end(), greater<int>());  // 内置大于仿函数
    print_vector(v);

}


int main()
{
    test01();
    // test02();
}