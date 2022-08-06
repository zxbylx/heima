#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> &s)
{
    for (set<int>::iterator it=s.begin(); it!=s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// set容器和multiset区别
void test01()
{
    set<int> s1;

    // set容器插入数据只有insert方式
    // set容器特点：所有元素插入时自动排序，不允许插入重复值
    pair<set<int>::iterator, bool> ret = s1.insert(10);
    if(ret.second)
    {
        cout << "第一次插入成功" << endl;
    }
    else
        cout << "第一次插入失败" << endl;

    ret = s1.insert(10);
    if(ret.second)
    {
        cout << "第二次插入成功" << endl;
    }
    else
        cout << "第二次插入失败" << endl;

    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    for (multiset<int>::iterator it=ms.begin(); it!=ms.end(); it++)
    {
        cout << *it << endl;
    }
}


int main()
{
    test01();
}