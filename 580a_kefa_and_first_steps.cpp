#include <iostream>
#include <vector>

int main() {
    int nums_count;
    std::cin >> nums_count;
    std::vector<int> nums(nums_count);
    for (int& num : nums) {
        std::cin >> num;
    }
    int max_len = 1;
    int curr_len = 1;
    for (int i = 1; i < nums_count; ++i) {
        if (nums[i] >= nums[i - 1]) {
            ++curr_len;
        } else {
            max_len = std::max(max_len, curr_len);
            curr_len = 1;
        }
    }

    max_len = std::max(max_len, curr_len);
    std::cout << max_len << '\n';

    return 0;
}