#include <iostream>
using namespace std;

// 成员变量和成员函数是分开存储的，只有非静态成员变量属于类
class Person
{
    int m_a;  // 类里有int就是4字节了，侧面说明非静态成员变量是属于类对象上的
    static int m_b;  // 静态成员变量不属于类对象上的，还是4字节
    void func(){};   // 成员函数也不属于对象上的，成员变量和成员函数分开存储，还是4字节
    static void func2(){};  // 不属于
};

void test01()
{
    Person p;
    // 空对象占用内存空间1个字节
    // C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址
    cout << "size of p = " << sizeof(p) << endl;  
}

void test02()
{
    Person p;
    cout << "size of p = " << sizeof(p) << endl;  
}
int main()
{
    test01();
    test02();
}