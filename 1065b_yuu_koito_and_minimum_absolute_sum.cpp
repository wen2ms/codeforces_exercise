#include <cstdlib>
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
        if (nums[0] == -1 && nums[nums_count - 1] != -1) {
            nums[0] = nums[nums_count - 1];
        } else if (nums[0] == -1 && nums[nums_count - 1] == -1) {
            nums[0] = 0;
            nums[nums_count - 1] = 0;
        } else if (nums[0] != -1 && nums[nums_count - 1] == -1) {
            nums[nums_count - 1] = nums[0];
        }
        std::cout << std::abs(nums[nums_count - 1] - nums[0]) << '\n';
        for (int i = 0; i < nums_count; ++i) {
            std::cout << (nums[i] == -1 ? 0 : nums[i]) << (i == nums_count - 1 ? '\n' : ' ');
        }
    }

    return 0;
}