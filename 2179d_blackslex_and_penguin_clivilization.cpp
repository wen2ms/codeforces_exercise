#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num;
        std::cin >> num;
        std::cout << (1 << num) - 1 << ' ';
        for (int i = 1; i < num + 1; ++i) {
            for (int j = 0; j < (1 << i); j += 2) {
                std::cout << j * (1 << (num - i)) + (1 << (num - i)) - 1 << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}