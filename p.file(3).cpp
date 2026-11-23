#include <iostream>
using namespace std;

int main() {
    bool motorEnabled;
    bool emergencyStop;
    bool batteryOK;

    cout << "电机是否启用(1表示启用, 0表示未启用): ";
    cin >> motorEnabled;

    cout << "急停是否触发(1表示触发, 0表示未触发): ";
    cin >> emergencyStop;

    cout << "电池是否正常(1表示正常, 0表示不正常): ";
    cin >> batteryOK;

    if (emergencyStop) {
        cout << "禁止启动：急停触发" << endl;
    }
    else if (!motorEnabled) {
        cout << "禁止启动：电机未启用" << endl;

    }
    else if (!batteryOK) {
        cout << "禁止启动：电池异常" << endl;
    }
    else {
        cout << "允许启动" << endl;
    }
    return 0;
}