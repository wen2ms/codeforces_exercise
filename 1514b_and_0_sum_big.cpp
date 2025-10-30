#include <cstdint>
#include <iostream>

int main() {
    int total_cases;
    std::cin >> total_cases;
    const int kMod = 1e9 + 7;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        int num_of_digits;
        std::cin >> nums_count >> num_of_digits;
        int64_t result = 1;
        for (int i = 0; i < num_of_digits; ++i) {
            result = (result * nums_count) % kMod;
        }
        std::cout << result << '\n';
    }

    return 0;
}