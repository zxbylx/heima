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

class MyCompare
{
public:
    bool operator()(int v1, int v2)
    {
        // 降序, map比较的是key值，所以只传递一个key类型的值就可以了
        return v1 > v2;
    }
};

// map排序，修改需要创建时就修改
void test01()
{
    // 创建map容器
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    m1.insert(pair<int, int>(2, 20));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 40));
    m1.insert(make_pair(5, 50));

    print_map(m1);

    // 修改为降序
    map<int, int, MyCompare> m2;
    m2.insert(pair<int, int>(1, 10));
    m2.insert(pair<int, int>(2, 20));
    m2.insert(pair<int, int>(3, 30));
    m2.insert(pair<int, int>(4, 40));
    m2.insert(make_pair(5, 50));
    for (map<int, int, MyCompare>::iterator it=m2.begin(); it!=m2.end(); it++)
    {
        cout << "key: " << it->first << " value: " << it->second << endl;
    }
    cout << endl;
}

int main()
{
    test01();
}