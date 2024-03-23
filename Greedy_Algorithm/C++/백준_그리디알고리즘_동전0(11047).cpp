#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    int money;
    int count = 0;
    vector <int> vec;
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> money;
        vec.push_back(money);
    }
    sort(vec.begin(), vec.end(), greater<>());
    for (int i = 0; i < N; i++) {
        if (K >= vec[i]) {
            count += K / vec[i];
            K %= vec[i];
        }
        else continue;
    }
    cout << count << endl;
    return 0;
}