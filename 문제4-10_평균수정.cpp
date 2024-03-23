#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, score;
       
    cin >> M;
    double* arr = new double[M];

    for (int i = 0; i < M; i++) {
        cin >> arr[i];
    }
    int Max = arr[0];
    double sum = 0;
    double avg = 0;

    for (int i = 0; i < M; i++) {
        if (Max < arr[i]) {
            Max = arr[i];
        }
    }

    for (int i = 0; i < M; i++) {
        arr[i] = arr[i] / Max * 100;
    }

    for (int i = 0; i < M; i++) {
        sum += arr[i];
    }
    avg = sum / M;
    cout << avg;
}