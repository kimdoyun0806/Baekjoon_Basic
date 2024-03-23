#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int count = 0;
    cin >> N;
    while (true) {
        if (N == 1 || N == 2 || N == 4 || N == 7) {
            cout << -1; 
            break;
        }
        if (N % 5 == 0) {
            count += N / 5;
            cout << count;
            break;
        }
        else if (N % 5 == 1) {
            count += N / 5 - 1 + 2;
            cout << count;
            break;
        }
        else if (N % 5 == 2) {
            count += N / 5 - 2 + 4;
            cout << count;
            break;
        }
        else if (N % 5 == 3) {
            count += N / 5 + 1;
            cout << count;
            break;
        }

        else if (N % 5 == 4) {
            count += N / 5 - 1 + 3;
            cout << count;
            break;
        }
    }
    return 0;
}