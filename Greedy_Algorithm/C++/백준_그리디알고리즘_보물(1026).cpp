#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int sum = 0;
    vector <int> A;
    vector <int> B;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int j;
        cin >> j;
        A.push_back(j);
    }
    for (int i = 0; i < N; i++) {
        int j;
        cin >> j;
        B.push_back(j);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<>());
    for (int i = 0; i < N; i++) {
        sum += A[i] * B[i];
    }
    cout << sum;
    return 0;
}   