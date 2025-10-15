#include <cstdint>
#include <iostream>

int main() {
    int num_of_errors;
    std::cin >> num_of_errors;
    int64_t first_sum = 0;
    int64_t second_sum = 0;
    int64_t third_sum = 0;
    for (int i = 0; i < num_of_errors; ++i) {
        int error;
        std::cin >> error;
        first_sum += error;
    }
    for (int i = 0; i < num_of_errors - 1; ++i) {
        int error;
        std::cin >> error;
        second_sum += error;
    }
    for (int i = 0; i < num_of_errors - 2; ++i) {
        int error;
        std::cin >> error;
        third_sum += error;
    }

    std::cout << first_sum - second_sum << ' ' << second_sum - third_sum << '\n';

    return 0;
}