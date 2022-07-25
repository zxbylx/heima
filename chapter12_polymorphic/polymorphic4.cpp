#include <iostream>
#include <string>
using namespace std;

// 虚析构与纯虚析构
class Animal
{
public:
    Animal()
    {
        cout << "Animal构造函数调用" << endl;
    }
    virtual void speak() = 0;
    // virtual ~Animal()  // 虚析构能调用子类的析构函数
    // {
    //     cout << "Animal析构函数调用" << endl;
    // }
    // 纯虚析构函数，需要声明，也需要实现，有了纯虚析构后这个类也属于抽象类，无法实例化
    virtual ~Animal() = 0;
};
// 纯虚析构实现
Animal::~Animal()
{
    cout << "Animal纯析构函数调用" << endl;
}

class Cat: public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat构造函数调用" << endl;
        m_name = new string(name);
    }
    void speak()
    {
        cout << *m_name <<"小猫在说话" << endl;
    }
    string *m_name;
    ~Cat()
    {
        if (m_name!=NULL)
        {
            cout << "Cat析构函数调用" << endl;
            delete m_name;
            m_name = NULL;
        }
    }
};

void test01()
{
    Animal * animal = new Cat("Tom");
    animal->speak();
    // 父类的指针在析构时不会调用子类的析构函数，导致子类如果有堆区属性，出现内存泄露
    delete animal;
}

int main()
{
    test01();
}