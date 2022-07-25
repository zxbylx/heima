#include <iostream>
#include <string>
using namespace std;

// 分别利用普通写法和多态技术实现计算器

// 普通写法
class Caculator
{
public:
    int m_num1;  // 操作数1
    int m_num2;  // 操作数2

    int get_result(string oper)
    {
        if (oper == "+")
        {
            return m_num1 + m_num2;
        }
        else if (oper == "-")
        {
            return m_num1 - m_num2;
        }
        else if (oper == "*")
        {
            return m_num1 * m_num2;
        }
        else
        {
            return m_num1 / m_num2;
        }
        // 如果想扩展新的功能，需要修改源码，比如增加乘方
        // 在真正的开发中提倡开闭原则
        // 开闭原则：对扩展进行开放，对修改进行关闭
    }
};

// 利用多态实现计算器
// 多态带来的好处
// 1.组织结构清晰，可读性强
// 2.对于前期后期扩展及维护性高
class AbstractCaculator
{
public:
    int m_a;
    int m_b;

    virtual int get_result()
    {
        return 0;
    }
};

class AddCaculator: public AbstractCaculator
{
    int get_result()
    {
        return m_a + m_b;
    }
};

class SubCaculator: public AbstractCaculator
{
    int get_result()
    {
        return m_a - m_b;
    }
};

class MulCaculator: public AbstractCaculator
{
    int get_result()
    {
        return m_a * m_b;
    }
};

void test01()
{
    Caculator c;
    c.m_num1 = 10;
    c.m_num2 = 5;
    cout << c.m_num1 << " + " << c.m_num2 << " = " << c.get_result("+") << endl;
    cout << c.m_num1 << " - " << c.m_num2 << " = " << c.get_result("-") << endl;
    cout << c.m_num1 << " * " << c.m_num2 << " = " << c.get_result("*") << endl;
    cout << c.m_num1 << " / " << c.m_num2 << " = " << c.get_result("/") << endl;
}

void test02()
{
    // 多态使用条件：父类指针或引用指向子类对象
    AbstractCaculator * abc = new AddCaculator;
    abc->m_a = 10;
    abc->m_b = 100;
    cout << abc->m_a << " + " << abc->m_b << " = " << abc->get_result() << endl;
    // 用完后记得销毁
    delete abc;

    abc = new SubCaculator;
    abc->m_a = 10;
    abc->m_b = 100;
    cout << abc->m_a << " - " << abc->m_b << " = " << abc->get_result() << endl;
    delete abc;

    abc = new MulCaculator;
    abc->m_a = 10;
    abc->m_b = 100;
    cout << abc->m_a << " * " << abc->m_b << " = " << abc->get_result() << endl;
    delete abc;
}

int main()
{
    test01();
    test02();
}