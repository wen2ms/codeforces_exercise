#include <cstdint>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
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
        std::unordered_map<int, int64_t> hash;
        for (int i = 0; i < nums_count; ++i) {
            int digit = 0;
            while (nums[i] > 0) {
                ++digit;
                nums[i] >>= 1;
            }
            ++hash[digit];
        }
        int64_t result = 0;
        for (const auto& [digit, count] : hash) {
            result += count * (count - 1) / 2;
        }
        std::cout << result << '\n';
    }

    return 0;
}