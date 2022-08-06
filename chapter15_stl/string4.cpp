#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 字符串查找和替换
void test01()
{
    string str1 = "abcdefgde";
    int pos = str1.find("de");
    cout << "pos： " << pos << endl;
    int pos1 = str1.rfind("de");  // 从右往左找
    cout << "pos1： " << pos1 << endl;

}

// 替换
void test02()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111");  // 从1的位置开始替换3个字符，但是放进4个1进去,换成替换5个字符效果也是一样
    cout << "str1=" << str1 << endl;
}

int main()
{
    test01();
    test02();
}