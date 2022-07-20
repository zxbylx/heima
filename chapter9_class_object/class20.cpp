#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();  // 让visit函数可以访问Building中私有成员
    void visit2();  // 让visit2函数不可以访问Building中私有成员
    Building * building;
};

class Building
{
    friend void GoodGay::visit();  // 成员函数做友元，记得需要前面加类名
public:
    Building();
    string m_sitting_room;

private:
    string m_bed_room;
};

//类外实现成员函数
Building::Building()
{
    m_sitting_room = "客厅";
    m_bed_room = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "visit函数访问：" << building->m_sitting_room << endl;
    cout << "visit函数访问：" << building->m_bed_room << endl;
}

void GoodGay::visit2()
{
    cout << "visit2函数访问：" << building->m_sitting_room << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main()
{
    test01();
}

