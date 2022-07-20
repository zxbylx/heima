#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    public:
    char name[20];
    int student_id;
    void show_student()
    {
        cout << "姓名：" << name << endl;
        cout << "学号：" << student_id << endl;
    }

    // 给姓名赋值
    void setname(char name1[])
    {
        strcpy(name, name1);
    }

    void setid(int id)
    {
        student_id = id;
    }
};

int main()
{
    Student stu;
    cout << "请输入学生姓名: " << endl;
    // cin.get();
    // cin.get(stu.name, 20);
    // while (cin.get()!='\n')
    //     continue;
    char name1[20];
    cin.get(name1, 20);
    stu.setname(name1);
    cout << "请输入学生学号11: " << endl;
    int id;
    cin >> id;
    stu.setid(id);
    stu.show_student();
}