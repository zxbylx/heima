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
    void func()
    {
        m_a = 10; // 父类中的公共权限成员，到子类依然是公共权限
        m_b = 20; // 父类中保护权限成员，到子类中依然是保护权限
        // m_c = 5;  // 父类中私有成员权限，子类访问不到
    }
};

class Son2: protected Base1
{
public:
    void func()
    {
        m_a = 100;  // 父类中公共权限成员到子类中是保护权限
        m_b = 200;  // 父类中保护权限成员到子类中是保护权限
        // m_c = 300; // 父类中私有成员权限，子类访问不到
    }
};

class Son3: private Base1
{
public:
    void func()
    {
        m_a = 100;  // 父类中公共权限成员到子类中是私有成员
        m_b = 200;  // 父类中保护权限成员到子类中是私有成员
        // m_c = 300; // 父类中私有成员权限，子类访问不到
    }
};

class GrandSon3: public Son3
{
public:
    void func()
    {
        // m_a = 100;  // 这里不能访问说明m_a在Son3是私有成员
    }
};

void test01()
{
    Son1 son1;
    son1.m_a = 5;
    // son1.m_b = 100;  // 到了Son1中m_b是保护权限，类外访问不到
}

void test02()
{
    Son2 son2;
    // son2.m_a = 300;  // 在Son2中m_a变为了保护权限，因此类外不能访问
}

void test03()
{
    Son3 son3;
    // son3.m_a = 1000;
}


int main()
{
    test01();
}
