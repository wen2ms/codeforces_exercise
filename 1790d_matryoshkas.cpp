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
        std::sort(nums.begin(), nums.end());
        int prev_count = 0;
        int i = 0;
        int result = 0;
        while (i < nums_count) {
            int curr_count = 0;
            int j = i;
            int curr = nums[i];
            while (j < nums_count && nums[j] == curr) {
                ++j;
                ++curr_count;
            }
            if (i == 0) {
                result += curr_count;
            } else if (nums[i - 1] != curr - 1) {
                result += curr_count;
            } else if (curr_count > prev_count) {
                result += curr_count - prev_count;
            }
            prev_count = curr_count;
            i = j;
        }
        std::cout << result << '\n';
    }

    return 0;
}