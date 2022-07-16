#include <iostream>
using namespace std;
// 嵌套结构体
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
struct Teacher
{
    int id;
    string name;
    int age;
    Student stu;
};


int main()
{
    // 创建老师
    Teacher t;
    t.id = 1;
    t.name = "老王";
    t.age = 44;
    t.stu.name = "张三";
    t.stu.age = 15;
    t.stu.score = 88;

    cout << "老师姓名： " << t.name << " 老师编号： " << t.id << " 老师学生姓名：" << t.stu.name << endl;
}