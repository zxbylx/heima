#include <iostream>
#include <string>  // 用C++风格字符串要包含这个头文件
using namespace std;

int main() {
    // 1. C风格字符串
    // 注意事项： char 字符串名后要带[]; 等号后面要用双引号包含字符串
    char str[] = "hello world";
    cout << str << endl;
    // 2. C++风格字符串
    // 注意要包含一个头文件 #include <string>
    string str2 = "hello world";
    cout << str2 << endl;
    return 0;
}