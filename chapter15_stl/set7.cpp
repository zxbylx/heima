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

class Mycompare
{
public:
    // 仿函数是bool类型
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

// set容器排序
void test01()
{
    set<int> s1;

    // set容器插入数据只有insert方式
    // set容器特点：所有元素插入时自动排序，不允许插入重复值
    s1.insert(10);
    s1.insert(30);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    printSet(s1);
    // 指定排序规则从大到小,必须在插入前指定排序规则
    set<int, Mycompare> s2;

    // set容器插入数据只有insert方式
    // set容器特点：所有元素插入时自动排序，不允许插入重复值
    s2.insert(10);
    s2.insert(30);
    s2.insert(30);
    s2.insert(20);
    s2.insert(40);
    for(set<int, Mycompare>::iterator it=s2.begin(); it!=s2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    test01();
}