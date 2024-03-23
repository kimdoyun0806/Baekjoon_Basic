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
    //���͸� �̿��� ���� ���� ����
    //�迭�� �̿��ؼ� Ǫ�� �ͱ� ���� �޸𸮿� �ð������� ȿ�����̱� �ϴ�
    //���ͷ� ������ �� : �޸�-2916kb,�ð�-16ms
    //�迭�� ������ �� : �޸�-2388kb,�ð�-12ms
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