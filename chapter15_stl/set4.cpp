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

// set容器查找和统计
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
    set<int>::iterator pos = s1.find(30);
    if (pos != s1.end())
    {
        cout << "找到元素" << endl;
        cout << *pos << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }

}

// 统计
void test02()
{
    set<int> s1;

    // set容器插入数据只有insert方式
    // set容器特点：所有元素插入时自动排序，不允许插入重复值
    s1.insert(10);
    s1.insert(30);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    // 对于set要么是0，要么是1
    cout << "num = " << s1.count(30) << endl;
}

int main()
{
    test01();
    test02();
}