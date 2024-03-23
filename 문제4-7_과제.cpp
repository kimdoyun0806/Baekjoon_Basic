#include <iostream>
#include <vector>

int main() {
    const int totalStudents = 30;
    const int submittedStudents = 28;

    std::vector<bool> submitted(totalStudents, false);

    // Ư�� ������ ������ �л����� �⼮ ��ȣ�� �Է¹���
    for (int i = 0; i < submittedStudents; ++i) {
        int studentNumber;
        std::cin >> studentNumber;

        // �ش� �⼮ ��ȣ�� �л��� Ư�� ������ ���������� ǥ��
        submitted[studentNumber - 1] = true;
    }

    // Ư�� ������ �������� ���� 2���� �л� ��ȣ�� ���
    for (int i = 0; i < totalStudents; ++i) {
        if (!submitted[i]) {
            std::cout << i + 1 << " ";
        }
    }

    return 0;
}