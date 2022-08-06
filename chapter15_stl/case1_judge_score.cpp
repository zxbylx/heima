#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;


//有5名选手，10个评委分别打分，去掉最高分最低分，计算平均分
class Person
{
public:
    Person(string name, int score)
    {
        m_name = name;
        m_score = score;
    }
    string m_name;
    int m_score;
};

void create_person(vector<Person> &v)
{
    string nameSeed = "ABCDE";
    for (int i=0; i<5; i++)
    {
        string name = "选手";
        name += nameSeed[i];
        int score = 0;
        Person p(name, score);
        v.push_back(p);
    }
}

void set_score(vector<Person> &v)
{
    for (vector<Person>::iterator it=v.begin(); it!=v.end(); it++)
    {
        deque<int> d;
        for (int i=0; i<10; i++)
        {
            int score = rand() % 41 + 60;  // 60~100
            d.push_back(score);
        }
        sort(d.begin(), d.end());
        // 去除最高分和最低分，分别删掉头尾
        d.pop_back();
        d.pop_front();
        // 取平均分
        int sum = 0;
        for (deque<int>::iterator dit=d.begin(); dit!=d.end(); dit++)
        {
            sum += *dit; // 累加每个评委的分数
        }
        int avg = sum / d.size();
        // 将平均分赋值给选手上
        it->m_score = avg;
    }
}

void show_person(const vector<Person> &v)
{
    for (vector<Person>::const_iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << "姓名：" << (*it).m_name << " 分数：" << (*it).m_score << endl;
    } 
}

int main()
{
    // 随机数种子
    srand((unsigned int)time(NULL));
    // 1.创建5名选手
    vector<Person> v;
    create_person(v);
    // show_person(v);

    // 打分操作
    set_score(v);

    // 显示最好打分
    show_person(v);
}