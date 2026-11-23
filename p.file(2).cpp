#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "请输入温度" ;

    if (!(cin >> temperature)) {
        cout << "请输入数字" << endl;
        return 1;
    }
    if (temperature < 40) {
        cout << "温度正常" << endl;
    }
    else if (temperature < 70) {
        cout << "温度偏高" << endl;
    }
    else {
        cout << "温度报警" << endl;
    }

    return 0;

    
}