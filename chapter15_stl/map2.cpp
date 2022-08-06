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

// map大小和交换
void test01()
{
    // 创建map容器
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 40));

    print_map(m1);
    cout << m1.size() << endl;
    //交换
    // m1.swap(m2);
}

int main()
{
    test01();
}