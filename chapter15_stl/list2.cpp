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

// list容器赋值和交换
void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    print_list(l1);
    // 赋值
    list<int> l2 = l1;
    print_list(l2);

    list<int> l3;
    l3.assign(l2.begin(), l2.end()); // 注意要用迭代器，不是直接传入l2
    print_list(l3);

    list<int> l4;
    l4.assign(10, 100);
    print_list(l4);    
}

void test02()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    list<int> l2;
    l2.assign(10, 200);
    print_list(l1);
    print_list(l2);

    l1.swap(l2);
    cout << "交换后:" << endl;
    print_list(l1);
    print_list(l2);
}

int main()
{
    // test01();
    test02();
}