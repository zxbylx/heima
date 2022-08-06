#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Mycompare
{
public:
    bool operator()(int val1, int val2)
    {
        return val1 > val2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);

    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 使用函数对象，改变算法侧率，变为排序规则为从大到小
    sort(v.begin(), v.end(), Mycompare());

    for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    test01();
}