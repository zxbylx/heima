#include <iostream>
using namespace std;

class Person
{  
public:
    Person()
    {
        cout << "Person默认构造函数调用" << endl;
    }

    Person(int a)
    {
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }
    // 拷贝构造
    Person(const Person &p)
    {
        // 将传入的人身上的所有属性拷贝到我身上
        cout << "Person的拷贝构造函数调用" << endl;
        age = p.age;
    }
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
    int age;
};
// 拷贝构造函数的调用时机
    // 1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2 = Person(p1);
    cout << "p2的年龄为: " << p2.age << endl;
}

// 2.值传递的方式给函数参数传值
void do_work(Person p)
{
    cout << "do work" << endl;
}
void test02()
{
    Person p;
    do_work(p);  // p作为值传递参数,值传递的本质会创建一个副本，所以会调用拷贝构造
}

// 3.值的方式返回局部对象
Person do_work2()
{
    Person p1;
    cout << &p1 << endl;
    return p1;
}

void test03()
{
    Person p = do_work2();
    cout << &p << endl;
}

int main()
{
    // test01();
    // test02();
    test03(); // windows两个地址不同，调用了拷贝构造，linux两个地址一样，没有调用。
}