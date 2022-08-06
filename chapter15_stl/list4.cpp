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

// list容器插入和删除
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

    l1.pop_back();
    print_list(l1);
    l1.pop_front();
    print_list(l1);

    // 插入insert
    l1.insert(++l1.begin(), 1000);
    print_list(l1);

    // 删除erase
    list<int>::iterator it = l1.begin();
    l1.erase(++it);
    print_list(l1);

    l1.push_back(10000);
    l1.push_back(10000);
    l1.push_back(10000);
    print_list(l1);
    // 删除与10000匹配的值都删除
    l1.remove(10000);
    print_list(l1);

    l1.clear();
    print_list(l1);
}

int main()
{
    test01();
}