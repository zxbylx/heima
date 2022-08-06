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

// list容器大小操作
void test01()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    print_list(l1);

    if (l1.empty())
    {
        cout << "l1为空" << endl;
    }
    else
    {
        cout << "l1不为空" << endl;
        cout << l1.size() << endl;
    }
    l1.resize(10);
    print_list(l1);
    l1.resize(10, 200);
    print_list(l1);

}

int main()
{
    test01();
}