#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

void print_deque(const deque<int> &d)
{
    for (deque<int>::const_iterator it=d.begin(); it!=d.end(); it++)
        cout << *it << " ";
    cout << endl;
}

// deque排序
void test01()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);
    print_deque(d1);
    sort(d1.begin(), d1.end());  // 需要2个输入区间迭代器
    // 对于支持随机访问的迭代器和容器，都可以利用sort算法直接对其排序，vector
    print_deque(d1);
}



int main()
{
    test01();
}