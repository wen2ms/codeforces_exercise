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
        int pos = nums_count - 1;
        while (pos > 0 && nums[pos] <= nums[pos - 1]) {
            --pos;
        }
        while (pos > 0 && nums[pos] >= nums[pos - 1]) {
            --pos;
        }
        std::cout << pos << '\n';
    }

    return 0;
}