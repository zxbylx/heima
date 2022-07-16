#include <iostream>
using namespace std;

// 结构体做函数参数
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
// 打印学生信息参数
// 1.值传递
void print_student(Student s)
{
    s.age = 100;
    cout << "值传递函数中的学生姓名：" << s.name << " 年龄： " << s.age << " 分数： " << s.score << endl;
}
// 2.地址传递,修改形参，实参会发生变化
void print_student_by_address(Student *p)
{
    p->age = 50;
    cout << "地址传递函数中的学生姓名：" << p->name << " 年龄： " << p->age << " 分数： " << p->score << endl;
}
int main()
{
    // 创建学生结构体变量
    Student s = {"张三", 18, 100};
    print_student(s);
    print_student_by_address(&s);
    cout << "姓名： " << s.name << " 年龄： " << s.age << " 分数：" << s.score << endl;
}