#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    string b;
    cin >> a;
    cin >> b;
    cout << a * stoi(b.substr(2,1)) << endl;
    cout << a * stoi(b.substr(1, 1)) << endl;
    cout << a * stoi(b.substr(0, 1)) << endl;
    cout << a * stoi(b);
    return 0;
}