#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    string str;
    cin >> test;
    for (int i = 0; i < test; i++) {
        cin >> str[i];
        cout << str.front() << str.back() << endl;
    }
    return 0;
}