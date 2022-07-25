#include <iostream>
#include <fstream>
using namespace std;

// 二进制文件写操作
class Person
{
public:
    char m_name[64];
    int m_age;
};

void test01()
{
    // ofstream ofs;
    // ofs.open("person.txt", ios::out | ios::binary);
    Person p = {"张三", 18};
    ofstream ofs("person.txt", ios::out | ios::binary);
    // 将写的数据转换成二进制形式，指定写多少
    ofs.write((const char *)&p, sizeof(Person));
    ofs.close();
}

int main()
{
    test01();
}