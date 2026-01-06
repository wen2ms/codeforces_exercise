#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int nums_count;
    int64_t invited_count;
    int64_t threshold;
    std::cin >> nums_count >> invited_count >> threshold;
    std::vector<int64_t> nums(nums_count);
    for (int64_t& num : nums) {
        std::cin >> num;
    }
    std::sort(nums.begin(), nums.end());
    std::vector<int64_t> diffs(nums_count - 1);
    for (int i = 0; i < nums_count - 1; ++i) {
        diffs[i] = nums[i + 1] - nums[i];
    }
    std::sort(diffs.begin(), diffs.end());
    int64_t minimum = 1;
    for (int i = 0; i < nums_count - 1; ++i) {
        if (diffs[i] > threshold) {
            int64_t count = (diffs[i] - 1) / threshold;
            if (invited_count >= count) {
                invited_count -= count;
            } else {
                ++minimum;
            }
        }
    }
    std::cout << minimum << '\n';

    return 0;
}