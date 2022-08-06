#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// string求子串
void test01()
{
    string str = "hello";
    string substr = str.substr(1, 3); // 从1开始截取3个
    cout << "substr=" << substr << endl;

}

void test02()
{
    string email = "xinbo@hello.com";
    // 从邮件中获取用户名
    int index = email.find("@");
    string name = email.substr(0, index);
    cout << name << endl;
}

int main()
{
    test01();
    test02();
}