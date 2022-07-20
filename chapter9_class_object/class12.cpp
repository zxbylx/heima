#include <iostream>
#include <string>
using namespace std;

// 静态成员变量
class Person
{
public:
    //1.所有对象都共享同一份数据
    //2.编译阶段就分配内存
    //3.类内声明，类外初始化操作
    static int m_a;
private:
    // 静态成员变量也是有访问权限的，私有的在类外不可访问
    static int m_b;
};

int Person::m_a = 100;
int Person::m_b = 200;
void test()
{
    Person p;
    cout << p.m_a << endl;

    Person p2;
    p2.m_a = 200;
    cout << p.m_a << endl;  // p2修改了m_a为200,p.m_a也变为200，说明共享同一份数据
}

void test02()
{
    // 静态成员变量不属于某个对象上，所有对象共享同一份数据
    // 因此静态成员变量有2种访问方式
    // 1.通过对象访问
    Person p;
    cout << p.m_a << endl;
    // 2.通过类名进行访问
    cout << Person::m_a << endl;
}

int main()
{
    test();
    test02();
}