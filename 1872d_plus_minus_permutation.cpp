#include <cstdint>
#include <iostream>
#include <numeric>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num;
        int64_t first;
        int64_t second;
        std::cin >> num >> first >> second;
        int64_t lcm = std::lcm(first, second);
        int64_t num_of_biggest = num / first - num / lcm;
        int64_t num_of_smallest = num / second - num / lcm;
        int64_t result = num_of_biggest * (num + num - num_of_biggest + 1) / 2 - num_of_smallest * (num_of_smallest + 1) / 2;
        std::cout << result << '\n';
    }

    return 0;
}