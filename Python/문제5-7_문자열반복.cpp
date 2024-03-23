#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TestCase;
    string S;
    int Repeat;

    cin >> TestCase;

    for (int i = 0; i < TestCase; i++) {
        cin >> Repeat >> S;
        for (int j = 0; j < S.size(); j++) {
            for (int k = 0; k < Repeat; k++) {
                cout << S[j];
            }
        }
        cout << endl;
    }
    return 0;
}

