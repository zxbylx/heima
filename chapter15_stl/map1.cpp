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

// map构造和赋值, 里面会按照key自动升序排序，map里的数据都是pair对组
void test01()
{
    // 创建map容器
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 40));

    print_map(m1);
    map<int, int> m2(m1);  // 拷贝构造
    print_map(m2);
    map<int, int> m3;
    m3 = m2;
    print_map(m3);
}

int main()
{
    test01();
}