#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print_list(const list<int> &l)
{
    for(list<int>::const_iterator it=l.begin(); it!=l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

bool my_compare(int v1, int v2)
{
    // 降序， 让第一个数大于第二个数
    return v1 > v2;
}

// list容器反转和排序
void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);

    print_list(l1);
    // reverse(l1.begin(), l1.end()); // 方法1，但不是list的函数
    l1.reverse();
    print_list(l1);

    // 排序
    // 所有不支持随机访问迭代器的容器，不支持标准算法
    // sort(l1.begin(), l1.end());
    // 不支持随机访问的容器，内部会提供一些对应的算法
    l1.sort(); // 升序
    print_list(l1);
    l1.sort(my_compare);
    print_list(l1);
}

int main()
{
    test01();
}