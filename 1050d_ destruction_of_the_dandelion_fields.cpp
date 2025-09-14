#include <algorithm>
#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int num_of_fields;
        std::cin >> num_of_fields;
        std::vector<int> even_dandelions;
        std::vector<int> odd_dandelions;
        for (int i = 0; i < num_of_fields; ++i) {
            int dandelion;
            std::cin >> dandelion;
            if (dandelion % 2 == 1) {
                odd_dandelions.push_back(dandelion);
            } else {
                even_dandelions.push_back(dandelion);
            }
        }
        int64_t result = 0;
        if (odd_dandelions.empty()) {
            std::cout << 0 << '\n';
            continue;
        }
        result += std::accumulate(even_dandelions.begin(), even_dandelions.end(), 0LL);
        std::sort(odd_dandelions.begin(), odd_dandelions.end());
        result += std::accumulate(odd_dandelions.begin() + odd_dandelions.size() / 2, odd_dandelions.end(), 0LL);
        std::cout << result << '\n';
    }

    return 0;
}