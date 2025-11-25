#include <algorithm>
#include <cstdint>
#include <functional>
#include <iostream>
#include <vector>

int main() {
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
        std::sort(nums.begin(), nums.end(), std::greater<>());
        int64_t sum = 0;
        for (int i = 0; i < nums_count; ++i) {
            if (i % 2 == 0) {
                if (nums[i] % 2 == 0) {
                    sum += nums[i];
                }
            } else {
                if (nums[i] % 2 == 1) {
                    sum -= nums[i];
                }
            }
        }
        if (sum > 0) {
            std::cout << "Alice" << '\n';
        } else if (sum < 0) {
            std::cout << "Bob" << '\n';
        } else {
            std::cout << "Tie" << '\n';
        }
    }

    return 0;
}