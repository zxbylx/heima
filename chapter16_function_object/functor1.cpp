#include <iostream>
#include <string>
using namespace std;

// 函数对象（仿函数）
// 函数对象在使用时可以像普通函数那样调用，可以有参数、返回值
// 函数对象超出普通函数的概念，函数对象可以有自己的状态
// 函数对象可以作为参数传递

class Myadd
{
public:
    int operator()(int v1, int v2)
    {
        return v1 + v2;
    }
};

// 函数对象超出普通函数的概念，函数对象可以有自己的状态
class Myprint
{
public:
    Myprint()
    {
        count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        count++;
    }
    int count;
};

// 函数对象可以作为参数传递

void doPrint(Myprint &mp, string test)
{
    mp(test);
}

void test03()
{
    Myprint mp;
    doPrint(mp, "test hello");
}

void test01()
{
    Myadd ma;
    cout << ma(10, 10) << endl;
}

void test02()
{
    Myprint mp;
    mp("hello world");
    mp("nihao");
    cout << "myprint调用次数: " << mp.count << endl;
}


int main()
{
    test01();
    test02();
    test03();
}