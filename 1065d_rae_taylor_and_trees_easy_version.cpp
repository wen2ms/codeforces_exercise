#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count + 1);
    std::vector<int> prefix_minimums(nums_count + 1, nums_count);
    std::vector<int> suffix_maximums(nums_count + 2);
    for (int i = 1; i <= nums_count; ++i) {
        std::cin >> nums[i];
        prefix_minimums[i] = std::min(prefix_minimums[i - 1], nums[i]);
    }
    for (int i = nums_count; i >= 1; --i) {
        suffix_maximums[i] = std::max(suffix_maximums[i + 1], nums[i]);
    }
    for (int i = 2; i <= nums_count; ++i) {
        if (prefix_minimums[i - 1] > suffix_maximums[i]) {
            std::cout << "No" << '\n';
            return;
        }
    }
    std::cout << "Yes" << '\n';
}

int main() {
    int total_cases;
    std::cin >> total_cases;
    while (total_cases > 0) {
        --total_cases;
        solve();
    }

    return 0;
}
