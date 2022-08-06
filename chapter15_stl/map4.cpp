#include <iostream>
#include <map>
using namespace std;

void print_map(map<int, int>&m)
{
    for (map<int, int>::iterator it=m.begin(); it!=m.end(); it++)
    {
        cout << "key: " << it->first << " value: " << it->second << endl;
    }
    cout << endl;
}

// map查找和统计
void test01()
{
    // 创建map容器
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 40));

    // 查找
    map<int, int>::iterator pos = m1.find(4);
    if (pos!=m1.end())
    {
        cout << "查找到了元素" << endl;
    }
    else
    {
        cout << "没查到元素" << endl;
    }

    // 统计
    int num = m1.count(3);
    cout << num << endl;
}

int main()
{
    test01();
}