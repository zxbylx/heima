#include <iostream>
using namespace std;

// this的作用
// 1.防止名称冲突
class Person
{
public:
    Person(int age)
    {
        // this指针指向的是被调用的成员函数所属的对象
        this->age = age;
    }
    int age;

    Person & person_add_age(Person &p)
    {
        this->age += p.age;
        return *this;  // 返回对象本身
    }
};

void test01()
{
    Person p1(18);
    cout << "p1的年龄为：" << p1.age << endl; 
}

// 2.返回对象本身用*this
void test02()
{
    Person p1(19);
    Person p2(19);

    // 链式编程
    p2.person_add_age(p1).person_add_age(p1);
    cout << "p2的年龄为：" << p2.age << endl;

}

int main()
{
    test01();
    test02();
}