#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// vector容器预留空间

void test02()
{
    vector<int> v;

    // 利用reserve预留空间,减少开辟空间的次数
    v.reserve(10000);
    int num = 0;  // 统计开辟空间的次数
    int *p = NULL;
    for (int i=0; i<10000; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << "num=" << num << endl;
}

int main()
{
    // test01();
    test02();
}