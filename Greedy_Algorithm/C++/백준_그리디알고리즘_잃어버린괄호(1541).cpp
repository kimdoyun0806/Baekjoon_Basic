#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str; //���ڿ� �Է�
    int res = 0; //�����
    string num = ""; //���� ����
    bool check = false; // - �Ǻ�

    cin >> str;
    for (int i = 0; i <= str.
size(); i++) {
        //1. ��ȣ�� �����ų� ���� ���� ��
        if (str[i] == '-' || str[i] == '+' || i == str.size()) {
            //�ռ� - �� �־��ٸ� ���ڸ� ����
            if (check == true) {
                // ���ڿ� ������ ���ڸ� ���������� ��ȯ
                res -= stoi(num);
                // ���� ���ڴ� �������� �ʱ�ȭ
                num = "";
            }
            // �ռ� - �� �����ٸ� ���ڸ� ������
            else if (check == false) {
                res += stoi(num);
                num = "";
            }
        }
        //2. ��ȣ�� �ƴ� ���(������ ���)
        else {
            num += str[i]; // ���ڿ� ���·� ���� ����
        }
        //3. - �� ���� ���
        if (str[i] == '-') { // - �߷ý� true�� ����
            check = true;
        }
    }
    cout << res << endl;
    return 0;
}