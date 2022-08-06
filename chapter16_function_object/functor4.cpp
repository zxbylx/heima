#include <iostream>
#include <functional>
using namespace std;

// 内建仿函数：算数仿函数
void test01()
{
    //取反仿函数
    negate<int> n;
    cout << n(50) << endl;
}

void test02()
{
    // 相加仿函数，<>里面只放一个类型就可以了，表示只能相加相同的类型
    plus<int> p;
    cout << p(10, 20) << endl;
}

int main()
{
    test01();
    test02();
}