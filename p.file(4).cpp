#include <iostream>
using namespace std;

int main() {
    double speed;
    cout << "请输入速度";
    cin >> speed;
    if (speed > 0) {
        cout << "正向运动" << endl;
    }
    else if (speed < 0) {
        cout << "反向运动" << endl;
    }
    else {
        cout << "静止" << endl;
    }
    return 0;
}