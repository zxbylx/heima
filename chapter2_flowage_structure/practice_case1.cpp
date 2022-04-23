#include <iostream>
using namespace std;

int main() {
    // 练习案例
    // 三只小猪称体重，判断哪只最重
    // 1.创建三只小猪体重变量
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    // 2. 让用户输入三只小猪的重量
    cout << "请输入A小猪的体重：" << endl;
    cin >> num1;
    cout << "请输入B小猪的体重：" << endl;
    cin >> num2;
    cout << "请输入C小猪的体重：" << endl;
    cin >> num3;
    cout << "A小猪的体重为：" << num1 << endl;
    cout << "B小猪的体重为：" << num2 << endl;
    cout << "C小猪的体重为：" << num3 << endl;
    // 判断哪只小猪最重
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "A小猪最重" << endl;
        }
        else
        {
            cout << "C小猪最重" << endl;
        }
        
    }
    else
    {
        if (num2 > num3)
        {
            cout << "B小猪最重" << endl;
        }
        else
        {
            cout << "C小猪最重" << endl;
        }
        
    }
    
    return 0;
}