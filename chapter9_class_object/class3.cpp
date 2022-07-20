#include <iostream>
#include <string>
using namespace std;

// 访问权限
// 公公权限 public 成员在类内外都可访问

// 保护权限 protected 成员类内可以访问，类外不行，子类可以访问父类的保护内容

// 私有权限 private  成员类内可以访问，类外不行，子类不可以访问父类的私有内容
class Person
{
public:
    string name;
protected:
    string car;
private:
    int password;
public:
    void func()
    {
        name = "张三";
        car = "拖拉机";
        password = 123456;
    }
};
int main()
{
    Person p1;
    p1.name = "李四";
    // p1.car = "hello";  // 保护权限在类外是不可以访问的
    // p1.password = 234234;  // 私有权限内容在内外不可以访问
}