#include <iostream>
using namespace std;
// 动态多态满足条件
// 1.有继承关系
// 2.子类重写父类的虚函数
// 动态多态的使用
// 父类的指针或者引用指向子类对象
class Animal
{
public:
    // 虚函数，地址晚绑定
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat: public Animal
{
public:
    // 重写，函数返回值类型，函数名参数列表完全相同，virtual关键字可写可不写
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

class Dog: public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

// 地址早绑定，在编译阶段就确定了函数地址
// 如果想执行猫说话，那么这个函数不能提前绑定，需要在运行阶段绑定,地址晚绑定，用到基类虚函数
void doSpeak(Animal &animal)  // Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

int main()
{
    test01();
}
