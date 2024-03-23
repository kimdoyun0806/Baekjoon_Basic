#include <iostream> 
using namespace std;

int main() {
    int T;
    cin >> T;
    int* A = new int[T];
    int* B = new int[T];
    for (int i = 0; i < T; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < T; i++) {
        cout << "Case #" << i + 1 << ": " << A[i] << " + "
            << B[i] << " = " << A[i] + B[i] << "\n";
    }
    delete[] A;
    delete[] B;
    A = nullptr;
    B = nullptr;
    return 0;
}