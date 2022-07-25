#include <iostream>
using namespace std;

// 多态案例2：制作饮品
class AbstractDrinking
{
public:
    // 煮水
    virtual void Boil() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 倒入杯中
    virtual void PourInCup() = 0;
    // 加入辅料
    virtual void PutSomething() = 0;
    // 制作饮品
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

// 制作咖啡
class Coffee: public AbstractDrinking
{
public:
    void Boil()
    {
        cout << "煮水" << endl;
    }

    void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }

    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    void PutSomething()
    {
        cout << "加入糖和牛奶" << endl;
    }
};

// 制作茶叶
class Tea: public AbstractDrinking
{
public:
    void Boil()
    {
        cout << "煮水" << endl;
    }

    void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }

    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    void PutSomething()
    {
        cout << "加入枸杞" << endl;
    }
};

void doWork(AbstractDrinking * abs)
{
    abs->makeDrink();
    delete abs;
}

void test01()
{  
    doWork(new Coffee);
    cout << "-------------" << endl;
    doWork(new Tea);
}


int main()
{
    test01();
}