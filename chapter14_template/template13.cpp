#include <iostream>
#include <string>
// 第一种解决方法，直接包含源文件，但是基本没人这么做
#include "person.hpp"
// 第二种解决方法，将.h和.cpp内容写到一起，将后缀名改为.hpp文件
using namespace std;


void test01()
{
    Person<string, int>p("jerry", 28);
    p.showPerson();
}

int main()
{
    test01();
}