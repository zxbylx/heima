#include <iostream>
#include <fstream>
using namespace std;

// 二进制文件读操作
class Person
{
public:
    char m_name[64];
    int m_age;
};

void test01()
{
    Person p;
    ifstream ifs("person.txt", ios::in | ios::binary);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
    }
    // 将写的数据转换成二进制形式，指定写多少
    ifs.read((char *)&p, sizeof(Person));
    cout << "姓名：" << p.m_name << " 年龄： " << p.m_age << endl;
    ifs.close();
}

int main()
{
    test01();
}