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

    int M, N; //M���� �ٱ��Ͽ� N�� ����
    cin >> M >> N;
    vector<int> arr;
    for (int i = 1; i <= M; i++) {
        arr.push_back(i); //���� �ʱ�ȭ (�ٱ��� 1~M)
    }
    int i, j; // i��° �ٱ��Ϻ��� j��° �ٱ���
    
    for (int a=0; a < N; a++) {
        cin >> i >> j;
        reverse(arr.begin() + i-1, arr.begin() + j);
    }
    print(arr.begin(), arr.end());
    return 0;
}