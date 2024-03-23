#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int W[100000];
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }
    sort(W, W + N, greater<>());
    //벡터를 이용해 구할 수도 있음
    //배열을 이용해서 푸는 것기 좀더 메모리와 시간적으로 효율적이긴 하다
    //벡터로 구현할 때 : 메모리-2916kb,시간-16ms
    //배열로 구현할 때 : 메모리-2388kb,시간-12ms
    /*
    vector <int> W; 

    cin >> N;
    for (int i = 0; i < N; i++) {
        int w;
        cin >> w;
        W.push_back(w);
    }
    sort(W.begin(), W.end(), greater<>());*/
    int max = W[0];
    for (int i = 1; i < N; i++) {
        int temp = W[i] * (i + 1);
        if (temp >= max) {
            max = temp;
        }
    }
    cout << max;
    return 0;
}