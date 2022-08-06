#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 字符串插入删除
void test01()
{
    string str = "hello";
    str.insert(1, "111");
    cout << str << endl;
    str.erase(1, 3); // 从1位置删除3个
    cout << str << endl;

}

int main()
{
    test01();
}