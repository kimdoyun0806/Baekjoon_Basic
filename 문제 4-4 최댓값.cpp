#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int* arr = new int[9];
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    int max = arr[0];
    int num=1;
    for (int i = 0; i < 9; i++) {
        if (max < arr[i]) {
            max = arr[i];
            num = i+1;
        }
    }
    cout << max << "\n";
    cout << num;

    delete[] arr;
    arr = nullptr;
    return 0;
}