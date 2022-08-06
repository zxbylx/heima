#include <iostream>
#include <stack>
using namespace std;

// 栈容器stack
void test01()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // 只要栈不为空，就查看栈顶并出栈
    while (!s.empty())
    {
        // 查看栈顶元素
        cout << "栈顶元素为: " << s.top() << endl;
        s.pop();
    }
    cout << "栈的大小：" << s.size() << endl;
}

int main()
{
    test01();
}