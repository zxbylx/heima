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

// vector容器容量和大小
void test01()
{
    vector<int>v1;  // 默认无参构造
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "V1不为空" << endl;
        cout << "V1的容量为：" << v1.capacity() << endl;
        cout << "v1的大小为：" << v1.size() << endl;
    }

    // 重新指定大小
    v1.resize(15);  // 如果重新制定的比原来size大，则默认补0
    printVector(v1);  
    // 可以指定填充值
    v1.resize(13, 100);   // 和上面的重新指定同时存在，填充的还是0，上面的注释掉就变100了，这个得注意下
    printVector(v1);
}

int main()
{
    test01();
}