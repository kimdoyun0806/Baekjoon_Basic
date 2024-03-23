#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename Iter>
void print(Iter begin, Iter end) {
    while (begin != end) {
        cout << *begin << " ";
        begin++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N; //M개의 바구니와 N번 실행
    cin >> M >> N;
    vector<int> arr;
    for (int i = 1; i <= M; i++) {
        arr.push_back(i); //벡터 초기화 (바구니 1~M)
    }
    int i, j; // i번째 바구니부터 j번째 바구니
    
    for (int a=0; a < N; a++) {
        cin >> i >> j;
        reverse(arr.begin() + i-1, arr.begin() + j);
    }
    print(arr.begin(), arr.end());
    return 0;
}