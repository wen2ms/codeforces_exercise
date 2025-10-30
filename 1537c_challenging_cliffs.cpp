#include <algorithm>
#include <iostream>
#include <limits>
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
        std::sort(nums.begin(), nums.end());
        if (nums_count == 2) {
            std::cout << nums[0] << ' ' << nums[1] << '\n';
            continue;
        }
        int position = -1;
        int diff = std::numeric_limits<int>::max();
        for (int i = 0; i < nums_count - 1; ++i) {
            if (nums[i + 1] - nums[i] < diff) {
                diff = nums[i + 1] - nums[i];
                position = i;
            }
        }
        for (int i = position + 1; i < nums_count; ++i) {
            std::cout << nums[i] << ' ';
        }
        for (int i = 0; i <= position; ++i) {
            std::cout << nums[i] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}