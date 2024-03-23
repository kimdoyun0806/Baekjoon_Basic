#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    string S;
    getline(cin,S);
    istringstream stream(S);
    while (stream >> S) {
        count++;
    }
    cout << count;
    return 0;
}