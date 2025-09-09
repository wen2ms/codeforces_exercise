#include <cstdint>
#include <iostream>

int main() {
    int64_t num;
    int64_t target;
    std::cin >> num >> target;
    int64_t odd_count = (num + 1) / 2;
    if (target <= odd_count) {
        std::cout << 2 * target - 1 << '\n';
    } else {
        std::cout << 2 * (target - odd_count) << '\n';
    }

    return 0;
}