#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 字符串拼接
void test01()
{
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl;
    string str2 = "helo";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    str1.append("I");
    cout << "str1 = " << str1 << endl;
    str1.append(" lovedfadf", 4); // 添加前4个字符
    cout << "str1 = " << str1 << endl;
    str1.append(str2);
    cout << "str1 = " << str1 << endl;
    str1.append(str2, 1, 3); // 从1位置开始，截取3个
    cout << "str1 = " << str1 << endl;

}

int main()
{
    test01();
}