#include <iostream>
using namespace std;
// 转义字符
int main() {

    // 换行符 \n
    cout << "hello world\n";
    // 反斜杠 \\    
    cout << "\\" << endl;
    // 水平制表符 \t 共8个空格位置，输出1个a后面7个空格，5个a后面3个空格，作用是整齐的输出后面的字符
    // 多余8个字符以下个8字符算
    cout << "a\thello world" << endl;
    cout << "aaa\thello world" << endl;
    cout << "aaaaa\thello world" << endl;
    cout << "aaaaaaaaa\thello world" << endl;
    return 0;
}