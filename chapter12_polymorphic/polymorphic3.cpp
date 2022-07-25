#include <iostream>
using namespace std;

// 纯虚函数和抽象类
class Base
{
public:
    // 纯虚函数
    // 当类中有了纯虚函数，这个类也称为抽象类
    // 抽象类特点：
    // 1.无法实例化对象
    // 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
    virtual void func() = 0;
};

class Son: public Base
{
public:
    void func()
    {
        cout << "func函数调用" << endl;
    }
};

void test01()
{
    // Base b;  // 抽象类无法实例化对象
    // Son s;   // 子类必须重写父类中纯虚函数，否则无法实例化
    Base * base = new Son;
    base->func();

}

int main()
{
    test01();
}