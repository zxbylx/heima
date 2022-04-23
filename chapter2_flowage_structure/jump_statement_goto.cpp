#include <iostream>
using namespace std;

int main() {
    // goto语句，后面是个标记，跳转到标记位置继续执行
    cout << "1. xxx" << endl;
    goto FLAG;
    cout << "2. xxx" << endl;
    cout << "3. xxx" << endl;
    cout << "4. xxx" << endl;
    FLAG:
    cout << "5. xxx" << endl;
    return 0;
}