#include <iostream>
#include <string>
using namespace std;

// 友元
// 在程序里，有些私有属性，也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
// 友元的目的就是让一个函数或者类访问另一个类中的私有成员

class Building
{
    // 类做友元，访问私有属性
    friend class Goodgay;
public:
    string m_sitting_room;
    Building();

private:
    string m_bed_room;
};
// 类外写成员函数
Building::Building()
{
    m_sitting_room = "客厅";
    m_bed_room = "卧室";
}
// 类做友元
class Goodgay
{
public:
    void visit();  // 参观函数访问Building中的属性
    Building *building;
    Goodgay();
};
Goodgay::Goodgay()
{
    // 创建建筑物对象
    building = new Building;
}

void Goodgay::visit()
{
    cout << "好基友的类正则访问: " << building->m_sitting_room << endl;
    cout << "好基友的类正则访问: " << building->m_bed_room << endl;
}

void test01()
{
    Goodgay gg;
    gg.visit();

}

int main()
{
    test01();
}