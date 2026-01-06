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
        int maximum = nums_count;
        int minimum = 1;
        int left = 0;
        int right = nums_count - 1;
        while (left < right) {
            if (nums[left] <= minimum) {
                ++left;
                ++minimum;
            } else if (nums[right] >= maximum) {
                --right;
                --maximum;
            } else if (nums[left] >= maximum) {
                ++left;
                --maximum;
            } else if (nums[right] <= minimum) {
                --right;
                ++minimum;
            } else {
                break;
            }
        }
        if (left == right) {
            std::cout << -1 << '\n';
        } else {
            std::cout << left + 1 << ' ' << right + 1 << '\n';
        }
    }

    return 0;
}