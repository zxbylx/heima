#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// 文本文件写操作
void test01()
{
    // 创建流对象
    ifstream ifs;
    ifs.open("hello.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    // 读数据
    // 第一种
    // char buf[1024] = { 0 };
    // while (ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    // 第二种
    // char buf[1024] = {0};
    // while (ifs.getline(buf, 1024))
    // {
    //     cout << buf << endl;
    // }

    // // 第三种
    string buf;
    while (getline(ifs, buf))
    {
        cout << buf << endl;
    }

    // 第四种不推荐
    // char c;
    // while ((c = ifs.get()) != EOF)
    // {
    //     cout << c;
    // }
    // ifs.close();
}

int main()
{
    test01();
}