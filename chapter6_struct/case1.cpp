#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Student
{
    string name;
    int scores;
};

struct Teacher
{
    string name;
    Student s_array[5];
};

// 给老师和学生赋值
void allocateSpace(Teacher tarray[], int len)
{
    string nameSeed = "ABCDE";
    for (int i=0; i<len; i++)
    {
        tarray[i].name = "Teacher_";
        tarray[i].name += nameSeed[i];
        // 通过循环给每名老师所带的学生赋值
        for (int j=0; j<5; j++)
        {
            tarray[i].s_array[j].name = "Student_";
            tarray[i].s_array[j].name += nameSeed[j];

            int random = rand() % 61 + 40; // 41-100
            tarray[i].s_array[j].scores = random;
        }
    }
}

// 打印所有信息
void printInfo(Teacher tarray[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout << "老师姓名： " << tarray[i].name << endl;
        for (int j=0; j<5; j++)
        {
            cout << "\t学生姓名： " << tarray[i].s_array[j].name;
            cout << " 考试分数： " << tarray[i].s_array[j].scores << endl;
        }
    }
}

int main()
{
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 创建3名老师的数组
    Teacher tarray[3];
    int len = sizeof(tarray) / sizeof(tarray[0]);
    allocateSpace(tarray, len);
    printInfo(tarray, len);
}