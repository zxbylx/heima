#include <iostream>
using namespace std;

int main() {
    // break语句，用于跳出选择结构或循环结构
    // 1. 出现在switch语句中
    // cout << "请选择副本难度" << endl;
    // cout << "1. 普通" << endl;
    // cout << "2. 中等" << endl;
    // cout << "3. 困难" << endl;

    // int select = 0;  // 创建选择结果的变量
    // cin >> select;  //等待用户输入
    // switch (select)
    // {
    //     case 1:
    //         cout << "您选择的难度是普通难度" << endl;
    //         break;  // 退出switch语句
    //     case 2:
    //         cout << "您选择的难度是中等难度" << endl;
    //         break;
    //     case 3:
    //         cout << "您选择的难度是困难难度" << endl;
    //         break;
    //     default:
    //         break;
    // }
    // 2. 出现在循环语句中
    // for (int i=0; i<10; i++)
    // {
    //     if (i==5)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         cout << i << endl;
    //     }
        
    // }
    // 3. 出现在嵌套循环语句中
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if (j==5)
            {
                break; // 退出内层循环
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}