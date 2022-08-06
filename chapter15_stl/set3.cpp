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

// set容器插入和删除
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
    s1.erase(s1.begin());
    printSet(s1);

    s1.erase(30);
    printSet(s1);
    s1.clear();
    printSet(s1);

}

int main()
{
    test01();
}