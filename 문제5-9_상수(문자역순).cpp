#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2;
    string newstr1, newstr2;
    cin >> str1 >> str2;

    for (int i = str1.size()-1; i >=0 ; i--) {
        newstr1 += str1[i];
    }
    for (int i = str1.size() - 1; i >= 0; i--) {
        newstr2 += str2[i];
    }
    if (newstr1 > newstr2) {
        cout << newstr1;
    }
    else cout << newstr2;
    return 0;
}*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1, str2;
    cin >> str1 >> str2;

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    if (str1 > str2) cout << str1;
    else cout << str2;
    return 0;
}