#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int nums_count;
    int number_k;
    std::cin >> nums_count >> number_k;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    std::sort(nums.begin(), nums.end());

    if (number_k == 0) {
        if (nums[0] == 1) {
            std::cout << -1 << '\n';
            return 0;
        }
        std::cout << 1 << '\n';
        return 0;
    }
    if (number_k != nums_count && nums[number_k] == nums[number_k - 1]) {
        std::cout << -1 << '\n';
        return 0;
    }
    std::cout << nums[number_k - 1] << '\n';

    return 0;
}