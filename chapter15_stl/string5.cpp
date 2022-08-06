#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 字符串比较
void test01()
{
    string str1 = "hello";
    string str2 = "dello";
    if (str1.compare(str2)==0)
    {
        cout << "str1等于str2" << endl;
    }
    else if(str1.compare(str2)>0)
    {
        cout << "str1大于str2" << endl;
    }
    else
    {
        cout << "str1小于str2" << endl;
    }
}

int main()
{
    test01();
}