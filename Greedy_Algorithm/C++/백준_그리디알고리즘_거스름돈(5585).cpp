#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int money;
    int count = 0;
    cin >> money;
    money = 1000 - money;
    int arr[6] = { 500,100,50,10,5,1 };
    for (int i = 0; i < 6; i++) {
        if (money >= arr[i]) {
            count += money / arr[i];
            money %= arr[i];
        }
        else continue;
    }
    cout << count << endl;
    return 0;
}
