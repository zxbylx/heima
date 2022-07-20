#include <iostream>
using namespace std;

// 初始化列表
class Person
{
public:
    int m_A;
    int m_B;
    int m_C;

    // Person():m_A(10),m_B(20),m_C(30)
    // {

    // }

    Person(int a, int b, int c):m_A(a), m_B(b), m_C(c) //注意冒号位置
    {}
};

int main()
{
    Person p(20,30,40);
    cout << "m_A: " << p.m_A << endl;
    cout << "m_B: " << p.m_B << endl;
    cout << "m_C: " << p.m_C << endl;
}