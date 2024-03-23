#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    int i, j, k;

    cin >> N >> M;

    int* arr = new int[N];

    for (int x = 0; x < N; x++) {
        arr[x] = 0;
    }
    for (int a = 0; a < M; a++) {
        cin >> i >> j >> k;
        for (int b=i-1; b <= j-1; b++) {
            arr[b] = k;
        }
    }
    for (int a = 0; a < N; a++) {
        cout << arr[a] << " ";
    }

    delete[] arr;
    arr = nullptr;
    return 0;
}