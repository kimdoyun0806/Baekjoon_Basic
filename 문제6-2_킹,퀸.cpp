#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int arr[10] = { 1,1,2,2,2,8 };
    int arr2[10];
    for (int i = 0; i < 6; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < 6; i++) {
        cout << arr[i] - arr2[i] << " ";
    }
    return 0;
}