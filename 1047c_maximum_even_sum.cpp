#include <cstdint>
#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int64_t num_a;
        int64_t num_b;
        std::cin >> num_a >> num_b;
        if (num_a % 2 == 1 && num_b % 2 == 1) {
            std::cout << num_a * num_b + 1 << '\n';
        } else if ((num_b & 1) == 1) {
            std::cout << -1 << '\n';
        } else if ((num_a * num_b) / 2 % 2 == 1) {
            std::cout << -1 << '\n';
        } else {
            std::cout << num_a * num_b / 2 + 2 << '\n';
        }
    }

    return 0;
}