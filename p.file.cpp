#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "输入电池电压: ";

    if (!(cin >> voltage)) {
        cout << "请输入数字" << endl;
    
    return 1;
    }  
    if (voltage < 10.5) {
        cout << "电压过低" << endl;
    }
    else if (voltage <= 12.6) {
        cout << "电压正常" << endl;
    }
    else {
        cout << "电压过高" << endl;
    }

    return 0;
}
