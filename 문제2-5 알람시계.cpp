#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;
    if (hour >= 1 && minute >= 45) {
        cout << hour << " " << minute - 45;
    }
    else if (hour >=1 && minute < 45) {
        cout << hour - 1 << " " << minute + 15;
    }
    else if (hour == 0 && minute >= 45) {
        cout << 0 << " " << minute - 45;
    }
    else if (hour == 0 && minute < 45) {
        cout << 23 << " " << minute + 15;
    }
    return 0;
}