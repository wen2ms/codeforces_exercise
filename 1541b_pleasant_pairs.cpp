#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> nums(nums_count + 1);
        for (int i = 1; i <= nums_count; ++i) {
            std::cin >> nums[i];
        }
        int num_of_pairs = 0;
        for (int i = 1; i <= nums_count; ++i) {
            for (int j = nums[i] - i; j <= nums_count; j += nums[i]) {
                if (j > i && static_cast<int64_t>(nums[i]) * nums[j] == i + j) {
                    ++num_of_pairs;
                }
            }
        }
        std::cout << num_of_pairs << '\n';
    }

    return 0;
}