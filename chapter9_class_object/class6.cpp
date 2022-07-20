#include <iostream>
using namespace std;

// 构造函数的分类和调用
class Person
{
    // 构造函数分类
    // 按照参数分类  无参构造（默认构造）和有参构造
    // 按照类型分类  普通构造和拷贝构造
public:
    Person()
    {
        cout << "Person构造函数调用" << endl;
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

void test01()
{
    // 调用分类 1.括号法
    // Person p1;
    // Person p2(10);  // 有参数构造
    // Person p3(p2);
    // cout << p2.age << endl;
    // cout << p3.age << endl;

    // 2. 显示法
    Person p1;
    Person p2 = Person(10);  // 有参构造，等号右侧是匿名对象，当前行执行结束后，系统会立即收回匿名对象
    Person p3 = Person(p2);  // 拷贝构造
    // 注意事项：不要利用拷贝构造函数初始化匿名对象 Person(p3) 会被编译器当做 Person p3;

    // 3.隐式转换法
    Person p4 = 10; // 相当于Person p4 = Person(10);
    Person p5 = p4; // 拷贝构造
}

int main()
{
    test01();
}