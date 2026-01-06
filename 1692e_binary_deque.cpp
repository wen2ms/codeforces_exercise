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
        int s;
        std::cin >> nums_count >> s;
        std::vector<int> nums(nums_count);
        int sum = 0;
        for (int& num : nums) {
            std::cin >> num;
            sum += num;
        }

        int maximum_window = 0;
        int left = 0;
        int curr = 0;
        for (int right = 0; right < nums_count; ++right) {
            curr += nums[right];
            while (curr > s) {
                curr -= nums[left];
                ++left;
            }
            if (curr == s) {
                maximum_window = std::max(right - left + 1, maximum_window);
            }
        }
        if (maximum_window == 0) {
            std::cout << -1 << '\n';
        } else {
            std::cout << nums_count - maximum_window << '\n';
        }
    }

    return 0;
}