#include <iostream>
using namespace std;
// 空指针可以调用成员函数
class Person
{
public:
    void show_class_name()
    {
        cout << "this is Person class" << endl;
    }

    int m_age;
    void show_age()
    {
        if (this == NULL)  //预防空指针
            return;
        cout << "age = " << m_age << endl;  //m_age=this->m_age，所以空指针调用时会报错，因为没有对象
    }
};

void test01()
{
    Person *p = NULL;  // 空指针
    // p->show_age(); //报错原因，因为传入指针是空的
    p->show_class_name();
}

int main()
{
    test01();
}