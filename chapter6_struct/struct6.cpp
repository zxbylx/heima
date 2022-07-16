#include <iostream>
using namespace std;

// const 使用场景
struct Student
{
    // 成员列表
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
};
// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void print_student(const Student *s)
{
    // s->age = 100; 加入const后不可修改
    cout << "姓名： " << s->name << " 年龄： " << s->age << endl;
}

int main()
{
    // 创建学生结构体变量
    Student s = {"张三", 18, 100};

    print_student(&s);
}