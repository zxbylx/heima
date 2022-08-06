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

// deque构造函数
void test01()
{
    deque<int> d1;
    for (int i=0; i<10; i++)
    {
        d1.push_back(i);
    }
    print_deque(d1);
    deque<int> d2(d1.begin(), d1.end());
    print_deque(d2);

    deque<int> d3(10, 100);
    print_deque(d3);

    deque<int> d4(d3);
    print_deque(d4);

}

int main()
{
    test01();
}