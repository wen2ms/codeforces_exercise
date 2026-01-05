#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    std::sort(nums.begin(), nums.end());
    int minimum_count = 0;
    int maximum_count = 0;
    for (int num : nums) {
        if (num == nums[0]) {
            ++minimum_count;
        }
        if (num == nums[nums_count - 1]) {
            ++maximum_count;
        }
    }
    std::cout << nums[nums_count - 1] - nums[0] << ' ';
    if (nums[nums_count - 1] == nums[0]) {
        std::cout << static_cast<int64_t>(nums_count) * (nums_count - 1) / 2;
    } else {
        std::cout << static_cast<int64_t>(maximum_count) * minimum_count << '\n';
    }

    return 0;
}