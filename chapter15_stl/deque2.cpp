#include <iostream>
#include <deque>
#include <string>
using namespace std;

void print_deque(const deque<int> &d)
{
    // for (int i=0; i<d.size(); i++)
    // {
    //     cout << d[i] << " ";
    // }
    // cout << endl;
    for (deque<int>::const_iterator it=d.begin(); it!=d.end(); it++)
    {
        // *it = 100; // 容器里数据不可以修改了，const_iterator
        cout << *it << " ";
    }
    cout << endl;
}

// deque容器大小操作
void test01()
{
    deque<int> d1;
    for (int i=0; i<10; i++)
    {
        d1.push_back(i);
    }
    print_deque(d1);
    
    if (d1.empty())
        cout << "d1为空" << endl;
    else
    {
        cout << "d1不为空" << endl;
        cout << d1.size() << endl;
        // deque与vector区别是没有容量大小，是无限扩容的
    }
    // d1.resize(15);
    print_deque(d1);
    d1.resize(15, 1);
    print_deque(d1);

}

int main()
{
    test01();
}