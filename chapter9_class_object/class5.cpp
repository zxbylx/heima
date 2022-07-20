#include <iostream>
using namespace std;

// 构造函数和析构函数
class Person
{
    // 构造函数，没有返回值不用写void，函数名与类名相同，可以有参数，可以发生重载
    // 创建对象时，构造函数会自动调用一次，且只调用一次
public:
    Person()
    {
        cout << "Person构造函数调用" << endl;
    }

    // 析构函数，进行清理的操作
    // 没有返回值不写void
    // 函数名与类名相同，前面带~
    // 析构函数不可以传参，在对象销毁前自动调用一次
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
};



int main()
{
    Person p1;
}