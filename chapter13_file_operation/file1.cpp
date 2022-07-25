#include <iostream>
#include <fstream>
using namespace std;

// 文本文件写操作
void test01()
{
    // 创建流对象
    ofstream ofs;
    ofs.open("hello.txt", ios::out);
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;
    ofs.close();
}

int main()
{
    test01();
}