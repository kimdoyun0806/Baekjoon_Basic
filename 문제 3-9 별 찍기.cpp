#include <iostream> 
#include <string>
using namespace std;

int main() {
    int N;
    string A = "*";
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << A;
        }
        cout << "\n";
    }
    return 0;
}