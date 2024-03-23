#include <iostream>
using namespace std;

/*int main() {
    int T, A, B;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}*/
//동적 할당을 이용한 방법
int main() {
    int a = 0;
    cin >> a;
    int* b = new int[a];
    int* c = new int[a];

    for (int i = 0; i < a; i++) {
        cin >> b[i] >> c[i];
    }
    for (int i = 0; i < a; i++) {
        cout << b[i] + c[i] << endl;
    }

    delete[] b;
    delete[] c;
    b = nullptr; //포인터 변수 초기화
    c = nullptr;
    return 0;
}