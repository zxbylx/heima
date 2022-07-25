#include <iostream>
using namespace std;

// 菱形继承
class Animal
{
public:
    int m_age;
};

// 利用虚继承解决菱形继承多份相同数据问题
// Animal称为虚基类
class Sheep: virtual public Animal
{

};

class Tuo: virtual public Animal
{

};

class SheepTuo: public Sheep, public Tuo
{

};

void test01()
{
    SheepTuo st;
    st.Sheep::m_age = 18;
    st.Tuo::m_age = 28;
    // 当菱形继承，两个父类有相同的数据，需要加以作用域区分
    cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
    cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
    // 虚继承后不会出现数据不明确的情况
    cout << "st.m_age = " << st.m_age << endl;  
    // 这个数据只需要一份，2份有点浪费
}

int main()
{
    test01();
}