#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double a, b;
    
    cout << "请输入两个数字：";
    cin >> a >> b;
    
    cout << "加法:" << a + b << endl;
    cout << "减法:" << a - b << endl;
    cout << "乘法:" << a * b << endl;
    
    if (b != 0) {
        cout << "除法:" << a/b << endl;
    } else {
        cout << "除数不为零" << endl;
    }
    
    return 0;
}   