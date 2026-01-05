#include <algorithm>
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
        nums_count = std::unique(nums.begin(), nums.end()) - nums.begin();
        int result = nums_count;
        for (int i = 1; i < nums_count - 1; ++i) {
            if (nums[i] < nums[i - 1] && nums[i] > nums[i + 1] || nums[i] > nums[i - 1] && nums[i] < nums[i + 1]) {
                --result;
            }
        }
        std::cout << result << '\n';
    }

    return 0;
}
