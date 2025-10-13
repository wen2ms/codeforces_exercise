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
        std::vector<int> nums(nums_count);
        for (int& num : nums) {
            std::cin >> num;
        }
        int64_t sum = 0;
        for (int i = 0; i < nums_count; ++i) {
            int curr = nums[i];
            int j = i;
            while (j < nums_count && ((nums[i] > 0 && nums[j] > 0) || (nums[i] < 0 && nums[j] < 0))) {
                curr = std::max(curr, nums[j]);
                ++j;
            }
            sum += curr;
            i = j - 1;
        }
        std::cout << sum << '\n';
    }

    return 0;
}