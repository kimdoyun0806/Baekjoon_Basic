#include <iostream>
#include <vector>

int main() {
    const int totalStudents = 30;
    const int submittedStudents = 28;

    std::vector<bool> submitted(totalStudents, false);

    // 특별 과제를 제출한 학생들의 출석 번호를 입력받음
    for (int i = 0; i < submittedStudents; ++i) {
        int studentNumber;
        std::cin >> studentNumber;

        // 해당 출석 번호의 학생이 특별 과제를 제출했음을 표시
        submitted[studentNumber - 1] = true;
    }

    // 특별 과제를 제출하지 않은 2명의 학생 번호를 출력
    for (int i = 0; i < totalStudents; ++i) {
        if (!submitted[i]) {
            std::cout << i + 1 << " ";
        }
    }

    return 0;
}