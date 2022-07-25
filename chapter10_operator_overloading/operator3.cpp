#include <iostream>
using namespace std;

// 递增运算符重载
class My_integer
{
    friend ostream & operator<<(ostream &cout, My_integer & myint);
public:
    My_integer()
    {
        m_num = 0;
    }
    // 重载前置++运算符
    My_integer & operator++() //前置要返回引用
    {
        m_num++;
        return *this;
    }

    // 重置后置++运算符
    My_integer operator++(int) //括号里加int编译器就认为是后置++重载,int占位参数，区分前置后置
    {
        My_integer temp = *this;
        m_num++;
        return temp;  // 后置递增要返回值，不能是引用，局部引用不可返回
    }
private:
    int m_num;
};

// 重载左移运算符
ostream & operator<<(ostream &cout,  My_integer & myint)
{
    cout << myint.m_num << endl;
    return cout;
}

void test01()
{
    My_integer myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    My_integer myint;
    My_integer a = myint++;
    cout << a << endl;
    cout << myint << endl;
}

int main()
{
    test01();
    test02();
}