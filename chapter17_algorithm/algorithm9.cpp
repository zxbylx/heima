#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

void my_print(int val)
{
    cout << val << " ";
}

// 常用排序算法 random_shuffle
void test01()
{
    vector<int> v;
    for (int i=0; i<10; i++)
    {
        v.push_back(i);
    }
    // 打乱顺序，无返回值
    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), my_print);
    cout << endl;
}



int main()
{
    srand((unsigned int)time(NULL));
    test01();
}