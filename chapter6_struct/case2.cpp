#include <iostream>
#include <string>
using namespace std;

struct Hero
{
    string name;
    int age;
    string sex;
};
// 冒泡排序
void bubble_sort(Hero hero_array[], int len)
{
    for (int i=len-1; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            if (hero_array[j].age > hero_array[j+1].age)
            {
                Hero temp = hero_array[j];
                hero_array[j] = hero_array[j+1];
                hero_array[j+1] = temp; 
            }
        }
    }
}

int main()
{
    // 1.设计英雄结构体
    Hero hero_array[5]
    {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"}
    };
    int len = sizeof(hero_array) / sizeof(hero_array[0]);
    // 2.创建数组存放5名英雄
    
    bubble_sort(hero_array, len);
    for (int i=0; i<len; i++)
    {
        cout << "英雄名字： " << hero_array[i].name << " 年龄：" << hero_array[i].age << endl;
    }
}