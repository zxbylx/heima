#include <iostream>
using namespace std;

class Person
{  
public:
    // Person()
    // {
    //     cout << "Person默认构造函数调用" << endl;
    // }

    Person(int a)
    {
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }
    // 拷贝构造
    // Person(const Person &p)
    // {
    //     // 将传入的人身上的所有属性拷贝到我身上
    //     cout << "Person的拷贝构造函数调用" << endl;
    //     age = p.age;
    // }
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
    int age;
};
// 拷贝构造函数的调用规则
// 1.创建一个类，C++编译器会给每个类都添加至少3个函数
// 默认构造（无参）
// 默认析构 (无参)
// 拷贝构造函数（值拷贝）

// 2.如果创建了有参构造，编译器就不提供默认构造了，但还提供拷贝构造
// 3.如果写了拷贝构造函数，编译器就不提供其他构造函数了
void test01()
{
    Person p1(18);
    p1.age = 18;
    Person p2(p1);
    cout << "p2的年龄为： " << p2.age << endl;
}

void test02()
{
    Person p(19);
    Person p2(p);  // 上面拷贝注释掉了，依然可以用，针对第2条规则
    cout << "p2的年龄为： " << p2.age << endl;
}
int main()
{
    // test01();
    test02();
}