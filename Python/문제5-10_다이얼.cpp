#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int second = 0;
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] >= 'A' && S[i] <= 'C') second += 3;
        else if (S[i] >= 'D' && S[i] <= 'F') second += 4;
        else if (S[i] >= 'G' && S[i] <= 'I') second += 5;
        else if (S[i] >= 'J' && S[i] <= 'L') second += 6;
        else if (S[i] >= 'M' && S[i] <= 'O') second += 7;
        else if (S[i] >= 'P' && S[i] <= 'S') second += 8;
        else if (S[i] >= 'T' && S[i] <= 'V') second += 9;
        else if (S[i] >= 'W' && S[i] <= 'Z') second += 10;
    }
    cout << second << endl;
    return 0;
}