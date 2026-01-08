#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int total_cases;
        int nums_count;
        std::cin >> total_cases >> nums_count;
        if (total_cases % 2 == 1) {
            std::cout << 1 << ' ' << total_cases / 2 << ' ' << total_cases / 2 << '\n';
        } else if (total_cases % 4 == 0) {
            std::cout << total_cases / 2 << ' ' << total_cases / 4 << ' ' << total_cases / 4 << '\n';
        } else {
            std::cout << total_cases / 2 - 1 << ' ' << total_cases / 2 - 1 << ' ' << 2 << '\n';
        }
    }

    return 0;
}