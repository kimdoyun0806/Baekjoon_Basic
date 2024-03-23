#include <iostream>
using namespace std;

int main() {
    int hour, minute, need;
    cin >> hour >> minute;
    cin >> need;
    hour += need / 60;
    minute += need % 60;
    if (minute >= 60) {
        minute -= 60;
        hour += 1;
        if (hour >= 24) {
            cout << hour - 24 << " " << minute;
        }
        else cout << hour << " " << minute;
    }
    else if (hour > 23) {
        hour -= 24;
        if (minute >= 60) {
            hour += 1;
            minute -= 60;
            cout << hour << " " << minute;
        }
        else cout << hour << " " << minute;
    }
    else cout << hour << " " << minute;
    return 0;
}
