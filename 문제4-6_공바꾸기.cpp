#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    int i, j;
    int temp=0;
    cin >> N >> M;

    int* arr = new int[N]; //�迭 �ʱ�ȭ
    
    for (int a = 0; a < N; a++) { //N���� �ٱ��Ͽ� 1~N�� �ֱ�
        arr[a] = a + 1;     
    }

    for (int a = 0; a < M; a++) {
        cin >> i >> j;
        /*temp = arr[i - 1];
        arr[i - 1] = arr[j-1];
        arr[j - 1] = temp;*/
        swap(arr[i - 1], arr[j - 1]);
    }
    for (int a = 0; a < N; a++) {
        cout << arr[a] << " ";
        
    }
    delete[] arr;
    arr = nullptr;
    return 0;

}