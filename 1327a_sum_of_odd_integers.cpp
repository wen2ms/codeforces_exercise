#include <cstdint>
#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int64_t num;
        int64_t count;
        std::cin >> num >> count;
        if (count * count <= num && num % 2 == count % 2) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }

    return 0;
}