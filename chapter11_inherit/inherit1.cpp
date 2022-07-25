#include <iostream>
using namespace std;

// 继承
// 语法： class 子类: 继承方式 父类
class BasePage
{
public:
    void header()
    {
        cout << "header" << endl;
    }

    void footer()
    {
        cout << "footer" << endl;
    }

    void left()
    {
        cout << "left" << endl;
    }
};

class Java: public BasePage
{
public:
    void content()
    {
        cout << "java content" << endl;
    }
};

class Python: public BasePage
{
public:
    void content()
    {
        cout << "python content" << endl;
    }
};

void test01()
{
    Java java;
    java.header();
    java.footer();
    java.left();
    java.content();

    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
}

int main()
{
    test01();
}
