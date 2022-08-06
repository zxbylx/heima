#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 字符串存取
void test01()
{
    string str1 = "hello";
    // 1.通过[]访问单个字符
    for (int i=0; i<str1.size(); i++)
    {
        cout << str1[i] << endl;
    }

    // 2.通过at方式访问单个字符
    for (int i=0; i<str1.size(); i++)
    {
        cout << str1.at(i) << endl;
    }
    str1[0] = 's';
    cout << str1 << endl;
    str1.at(3) = 'a';
    cout << str1 << endl;

}

int main()
{
    test01();
}