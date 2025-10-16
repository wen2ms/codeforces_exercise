#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> count(nums_count + 1);
        for (int i = 0; i < nums_count; ++i) {
            int weight;
            std::cin >> weight;
            ++count[weight];
        }
        int result = 0;
        for (int sum = 2; sum <= 2 * nums_count; ++sum) {
            int curr = 0;
            for (int i = 1; i < (sum + 1) / 2; ++i) {
                if (sum - i > nums_count) {
                    continue;
                }
                curr += std::min(count[i], count[sum - i]);
            }
            if (sum % 2 == 0) {
                curr += count[sum / 2] / 2;
            }
            result = std::max(result, curr);
        }
        std::cout << result << '\n';
    }

    return 0;
}