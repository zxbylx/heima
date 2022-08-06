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

// vector容器插入和删除
void test01()
{
    vector<int>v1;  // 默认无参构造
    for (int i=0; i<10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    
    v1.pop_back();
    printVector(v1);

    // 插入，第一个参数是迭代器
    v1.insert(v1.begin(), 100);
    printVector(v1);

    v1.insert(v1.begin(), 2, 1000);
    printVector(v1);

    // 删除，第一个参数也是迭代器
    v1.erase(v1.begin());
    printVector(v1);

    // 清空
    v1.clear();
    // v1.erase(v1.begin(), v1.end());
    printVector(v1);
    

}

int main()
{
    test01();
}