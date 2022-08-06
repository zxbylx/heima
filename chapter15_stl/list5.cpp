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

// list容器数据存储
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
    // 不可以用l1[0]访问list中的数据，也不可以用at，原因list本质是链表，存储不连续，不支持随机访问
    cout << l1.front() << endl;
    cout << l1.back() << endl;
    
    // 验证迭代器不支持随机访问
    list<int>::iterator it = l1.begin();
    it++;  // 这是允许的
    it--;  // 支持双向
    // it = it + 1;  // 不允许，没有重载加号运算符，因为能加1就能加2，所以不支持
}

int main()
{
    test01();
}