#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        int nums_count;
        std::cin >> nums_count;
        std::vector<int> nums(nums_count);
        for (int& num : nums) {
            std::cin >> num;
        }
        int sum = 0;
        for (int i = 1; i < nums_count; ++i) {
            sum += std::abs(nums[i] - nums[i - 1]);
        }
        int maximum = std::max(std::abs(nums[1] - nums[0]), std::abs(nums[nums_count - 1] - nums[nums_count - 2]));
        for (int i = 1; i < nums_count - 1; ++i) {
            maximum = std::max(
                maximum, std::abs(nums[i] - nums[i - 1]) + std::abs(nums[i + 1] - nums[i]) - std::abs(nums[i + 1] - nums[i - 1]));
        }
        std::cout << sum - maximum << '\n';
    }

    return 0;
}