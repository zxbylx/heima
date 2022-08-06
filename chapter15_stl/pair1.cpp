#include <iostream>
#include <set>

using namespace std;

// pair对组创建

void test01()
{
    pair<string, int> p("tom", 20);
    cout << "姓名： " << p.first << " 年龄：" << p.second << endl;

    // 第二种方式创建
    pair<string, int> p2 = make_pair("Jerry", 15);
    cout << "姓名： " << p2.first << " 年龄：" << p2.second << endl;
}

int main()
{
    test01();
}