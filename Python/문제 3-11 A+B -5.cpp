#include <iostream>
using namespace std;

int main() {
    int* A = new int[10];
    int* B = new int[10];
    while (1) {
        cin >> A[10] >> B[10];
        if (A[10] == 0 && B[10] == 0) {
            break;
        }
        cout << A[10] + B[10] << "\n";
    }
    return 0;
}