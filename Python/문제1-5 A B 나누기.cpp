#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    cout << fixed; // �Ҽ��� �Ʒ� ������ ��� ������ �����ϰ� �� ��� �߰�
    cout.precision(10); //�Ǽ��� ����,�Ҽ��� ��ģ ��ü�� ��� ���� ���� �Լ�
    cout << A / (double)B;
    return 0;
}