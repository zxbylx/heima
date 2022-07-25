#include <iostream>
using namespace std;

// 继承方式：公共继承
class Base1
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son1: public Base1
{
public:
    int m_d;
};


void test01()
{
    // 父类中所有非静态成员属性都会被子类继承下去
    // 父类中私有成员属性 是被编译器隐藏了，因此访问不到，但是确实被继承下去了
    cout << "size of Son1 = " << sizeof(Son1) << endl; // 16
}


int main()
{
    test01();
}
