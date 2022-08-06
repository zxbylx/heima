#include <iostream>
#include <deque>
#include <string>
using namespace std;

void print_deque(const deque<int> &d)
{
    for (deque<int>::const_iterator it=d.begin(); it!=d.end(); it++)
        cout << *it << " ";
    cout << endl;
}

// deque容器插入和删除
// 两端操作
void test01()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);
    print_deque(d1);

    d1.pop_back();
    print_deque(d1);
    d1.pop_front();
    print_deque(d1);
}

void test02()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);
    print_deque(d1);

    // insert插入
    d1.insert(d1.begin(), 1000);
    print_deque(d1);
    d1.insert(d1.begin(), 2, 10000);  // 在开始位置插入2个10000
    print_deque(d1);
    //按照区间进行插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d1.insert(d1.begin(), d2.begin(), d2.end());   
    print_deque(d1);
}

// 删除
void test03()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);
    print_deque(d1);

    deque<int>::iterator it=d1.begin();
    it++;
    d1.erase(it);
    print_deque(d1);
    // 按照区间操作
    d1.erase(d1.begin(), d1.end());
    print_deque(d1);

    d1.clear();
}


int main()
{
    test01();
    test02();
    test03();
}