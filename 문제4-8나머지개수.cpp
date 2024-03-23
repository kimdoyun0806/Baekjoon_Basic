#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A[10]; //1차원 배열
    int N[10]; //나머지 저장 배열

    vector<int> arr;

    for (int i = 0; i < 10; i++) {
        cin >> A[i];
        N[i] = A[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
        auto current = find(arr.begin(), arr.end(), N[i]);
        if (current == arr.end()) {
            arr.push_back(N[i]);
        }
    }
    cout << arr.size();
    return 0;
}
/*
#include <set>
//set은 같은 원소가 있다면 이를 insert 하지 않는다
int main() {
    int n[10];
    set<int> s;

    for (int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        s.insert(a % 42);
    }
    cout << s.size() << endl;
}
*/