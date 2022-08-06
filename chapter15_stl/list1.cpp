#include <iostream>
#include <list>
using namespace std;

void print_list(const list<int> &l)
{
    for(list<int>::const_iterator it=l.begin(); it!=l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

// list容器构造
void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    print_list(l1);
    // 区间方式构造
    list<int> l2(l1.begin(), l1.end());
    print_list(l2);
    
    // 拷贝构造
    list<int> l3(l2);
    print_list(l3);

    // n个elem构造方式
    list<int> l4(3, 100);
    print_list(l4);
}

int main()
{
    test01();
}