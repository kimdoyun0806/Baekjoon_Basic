#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << min << " " << max;

    delete[] arr;
    arr = nullptr;
    return 0;
}

//알고리즘 라이브러리 이용
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int array[N];

    for(int i = 0; i < N; i++) {
        cin >> array[i];
    }

    sort(array, array + N);

    cout << array[0] << " " << array[N - 1];

    return 0;
}
*/