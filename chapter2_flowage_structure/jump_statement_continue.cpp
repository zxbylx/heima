#include <iostream>
using namespace std;

int main() {
    // continue语句
    for (int i=0; i<=100; i++)
    {
        if (i%2==1)
        {
            cout << i << endl;
        }
        else
        {
            continue; //可以筛选条件，执行到此不再执行下面语句
        }
        
    }
    return 0;
}