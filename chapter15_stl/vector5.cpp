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

// vector赋值
void test01()
{
    vector<int>v1;  // 默认无参构造
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // 赋值 operator=
    vector<int> v2;
    v2 = v1;
    printVector(v2);

    // assigon
    vector<int>v3;
    v3.assign(v1.begin(), v1.end());
    printVector(v3);

    vector<int>v4;
    v4.assign(10, 100);
    printVector(v4);
}

int main()
{
    test01();
}