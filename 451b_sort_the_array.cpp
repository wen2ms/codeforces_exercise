#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    std::vector<int> sorted = nums;
    std::sort(sorted.begin(), sorted.end());
    std::unordered_map<int, int> map;
    for (int i = 0; i < nums_count; ++i) {
        map[sorted[i]] = i;
    }
    for (int i = 0; i < nums_count; ++i) {
        nums[i] = map[nums[i]];
    }
    int left = -1;
    for (int i = 0; i < nums_count; ++i) {
        if (nums[i] != i) {
            left = i;
            break;
        }
    }
    int right = -1;
    for (int i = nums_count - 1; i >= 0; --i) {
        if (nums[i] != i) {
            right = i;
            break;
        }
    }
    if (left == -1 || right == -1) {
        std::cout << "yes" << '\n';
        std::cout << "1 1" << '\n';
    } else {
        std::reverse(nums.begin() + left, nums.begin() + right + 1);
        for (int i = 0; i < nums_count; ++i) {
            if (nums[i] != i) {
                std::cout << "no" << '\n';
                return 0;
            }
        }
        std::cout << "yes" << '\n';
        std::cout << left + 1 << ' ' << right + 1 << '\n';
    }

    return 0;
}