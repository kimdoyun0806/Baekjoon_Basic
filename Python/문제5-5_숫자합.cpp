#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    string str;
    int result=0;
    cin >> N;
    cin >> str;
    for (int i = 0; i < N; i++) {   
        result += str[i] - '0';
    }
    cout << result << endl;
    return 0;
}