#include <algorithm>
#include <cstdint>
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
        int64_t total;
        std::cin >> nums_count >> total;
        std::vector<int64_t> nums(nums_count);
        for (int64_t& num : nums) {
            std::cin >> num;
        }
        int64_t low = 1;
        int64_t high = total + 1;
        while (low < high) {
            int64_t mid = (low + high) / 2;
            int64_t curr = mid;
            for (int i = 0; i < nums_count - 1; ++i) {
                curr += std::min(mid, nums[i + 1] - nums[i]);
            }
            if (curr < total) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        std::cout << low << '\n';
    }

    return 0;
}