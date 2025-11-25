#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count + 1);
    std::vector<int> prefix_minimums(nums_count + 1, nums_count);
    std::vector<std::pair<int, int>> suffix_maximums(nums_count + 2);
    for (int i = 1; i <= nums_count; ++i) {
        std::cin >> nums[i];
        prefix_minimums[i] = std::min(prefix_minimums[i - 1], nums[i]);
    }
    for (int i = nums_count; i >= 1; --i) {
        suffix_maximums[i] = std::max(suffix_maximums[i + 1], {nums[i], i});
    }
    for (int i = 2; i <= nums_count; ++i) {
        if (prefix_minimums[i - 1] > suffix_maximums[i].first) {
            std::cout << "No" << '\n';
            return;
        }
    }
    std::cout << "Yes" << '\n';
    int left = 1;
    while (left <= nums_count) {
        int right = suffix_maximums[left].second;
        for (int i = left; i < right; ++i) {
            std::cout << nums[i] << ' ' << nums[right] << '\n';
        }
        if (left > 1) {
            std::cout << prefix_minimums[left - 1] << ' ' << nums[right] << '\n';
        }
        left = right + 1;
    }
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
