#include <iostream>
using namespace std;

int main() {
    int N,V;
    int count=0;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> V;
    for (int i = 0; i < N; i++) {
        if (V == arr[i]) {
            count++;
        }
    }
    cout << count;
}