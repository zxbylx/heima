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

// vector容器互换
void test01()
{
    vector<int>v1;  // 默认无参构造
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for (int i=10; i>0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    // 交换后打印
    cout << "交换后：" << endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

// 实际用途
// 巧用swap可以收缩内存空间
void test02()
{
    vector<int> v;
    for (int i=0; i<10000; i++)
    {
        v.push_back(i);
    }
    cout << "v的容量：" << v.capacity() << endl;
    cout << "v的大小：" << v.size() << endl;
    v.resize(3);
    cout << "v的容量：" << v.capacity() << endl;
    cout << "v的大小：" << v.size() << endl;
    // 使用swap收缩内存
    // vector<int>(v)这是匿名对象，利用拷贝构造v，没有名字
    vector<int>(v).swap(v);
    cout << "v的容量：" << v.capacity() << endl;
    cout << "v的大小：" << v.size() << endl;
}

int main()
{
    test01();
    test02();
}