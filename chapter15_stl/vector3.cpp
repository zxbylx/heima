#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// vector容器嵌套容器
class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};


void test01()
{
    vector<vector<int>> v;
    // 创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    // 向小容器添加数据
    for (int i=0; i<4; i++)
    {
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    // 遍历
    for(vector<vector<int>>::iterator it=v.begin(); it!=v.end(); it++)
    {
        for (vector<int>::iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
        {
            cout << *it2 << endl;
        }
        cout << "----------" << endl;
    }
}

int main()
{
    test01();
}