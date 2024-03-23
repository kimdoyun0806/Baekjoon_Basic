#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    cout << fixed; // 소수점 아래 숫자의 출력 범위만 설정하게 할 경우 추가
    cout.precision(10); //실수의 정수,소수를 합친 전체의 출력 범위 설정 함수
    cout << A / (double)B;
    return 0;
}