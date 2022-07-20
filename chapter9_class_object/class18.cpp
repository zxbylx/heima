#include <iostream>
#include <string>
using namespace std;

// 友元
// 在程序里，有些私有属性，也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
// 友元的目的就是让一个函数或者类访问另一个类中的私有成员

class Building
{
    // goodgay变为友元，可以访问私有成员
    friend void goodgay(Building *building);
public:
    string m_sitting_room;
    Building()
    {
        m_sitting_room = "客厅";
        m_bed_room = "卧室";
    }

private:
    string m_bed_room;
};

// 全局函数做友元
void goodgay(Building *building)
{
    cout << "好基友的全局函数正访问：" << building->m_sitting_room << endl;
    cout << "好基友的全局函数正访问：" << building->m_bed_room << endl;
}

void test01()
{
    Building building;
    goodgay(&building);
}

int main()
{
    test01();
}