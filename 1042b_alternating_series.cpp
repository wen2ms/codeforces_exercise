#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;

    for (int i = 0; i < total_cases; ++i) {
        int length;
        std::cin >> length;

        // -1 3 -1
        // -1 3 -1 2
        // -1 3 -1 3 -1
        // -1 3 -1 3 -1 2
        // -1 3 -1 3 -1 3 -1

        std::cout << -1 << ' ';
        for (int i = 0; i < (length - 1) / 2; ++i) {
            std::cout << 3 << ' ' << -1 << ' ';
        }
        if (length % 2 == 0) {
            std::cout << 2;
        }
        std::cout << '\n';
    }

    return 0;
}