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

// map插入和删除
void test01()
{
    // 创建map容器
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 40));

    // 插入方式2
    m1.insert(make_pair(12, 230));
    print_map(m1);
    
    // 插入方式3
    m1.insert(map<int, int>::value_type(5, 60));

    // 插入方式4, 如果后面赋值没成功，或者未赋值，会直接默认为0并插入，所以不建议使用
    m1[7] = 111;

    print_map(m1);

    // 删除，按照迭代器删除开头
    m1.erase(m1.begin());
    print_map(m1);
    m1.erase(3);  // 根据键删除
    print_map(m1);

    m1.erase(m1.begin(), m1.end());
    print_map(m1);
    m1.clear();
}

int main()
{
    test01();
}