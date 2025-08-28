#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;

    for (int i = 0; i < total_cases; ++i) {
        int64_t num;
        std::cin >> num;

        std::vector<int64_t> results;
        int64_t reminder = 1;
        for (int i = 1; i <= 18 && reminder + 1 <= num; ++i) {
            reminder *= 10;
            if (num % (reminder + 1) == 0) {
                results.push_back(num / (reminder + 1));
            }
        }
        std::sort(results.begin(), results.end());

        size_t count = results.size();
        std::cout << count << '\n';
        for (int i = 0; i < count; ++i) {
            std::cout << results[i];
            if (i == count - 1) {
                std::cout << '\n';
            } else {
                std::cout << ' ';
            }
        }
    }

    return 0;
}