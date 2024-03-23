#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    if (0 < A && B < 10) {
        std::cout << A + B;
    }
}